from .base import *
from ...output_functions import *


class LineCode(GeneralObject):
    """ Converted component class. """

    def __init__(self, converted_comp_type, name, circuit, tse_properties, tse_component):
        self.type = converted_comp_type
        self.name = name
        self.circuit = circuit

        # Some TSE components require more than one instance/class
        self.created_instances_list = [self]

        # Number of phases
        self.num_phases = self.define_number_of_phases(self, tse_properties, tse_component)
        # Number of buses
        self.num_buses = self.define_number_of_buses(self, tse_properties, tse_component)
        # Floating neutral
        self.floating_neutral = self.is_neutral_floating(self, tse_properties, tse_component)

        # Get bus connections list
        # self.buses = return_bus_connections(tse_component, self.num_buses, self.num_phases, self.floating_neutral)

        # Filter unused TSE properties and create new ones
        self.new_format_properties = self.create_new_format_properties_dict(self, tse_properties, tse_component)

        # Run parent initialization code
        super().__init__(name, self.circuit, self.new_format_properties)

        # Apply extra necessary conversion steps
        self.extra_conversion_steps(self, tse_properties, tse_component)

    @staticmethod
    def create_new_format_properties_dict(self, tse_properties, tse_component):
        """ Filters unused TSE properties and creates new ones. Returns a dictionary with the new properties. """

        tse_props_copy = dict(tse_properties)

        tse_props_copy.pop("mode", "")
        # Assume 3 if phases is not found
        tse_props_copy['nphases'] = tse_props_copy.pop("phases", "3")

        # Matrix parameters need to be converted
        if any((tse_props_copy.get(p) for p in ["rmatrix", "xmatrix", "cmatrix"])):
            for p in ["rmatrix", "xmatrix", "cmatrix"]:
                tse_props_copy[p] = convert_matrix_format(tse_props_copy.get(p), self.num_phases)

        new_format_properties = tse_props_copy

        return new_format_properties

    @staticmethod
    def define_number_of_phases(self, tse_properties, tse_component):
        """ Returns the number of phases of the component. """

        num_phases = int(tse_properties.get("phases", "3"))

        return num_phases

    @staticmethod
    def define_number_of_buses(self, tse_properties, tse_component):
        """ Returns the number of buses the component is connected to. """

        num_buses = 0

        return num_buses

    @staticmethod
    def is_neutral_floating(self, tse_properties, tse_component):
        """ Floating neutrals connect to an unused bus node """

        return False

    @staticmethod
    def extra_conversion_steps(self, tse_properties, tse_component):
        """ Applies extra necessary conversion steps. """

        pass

    def output_line(self):
        """ Overrides parent output_line method. """

        n_phases = self.new_format_properties.pop("nphases")
        line_props = [f'{k}={v}' for k, v in self.new_format_properties.items()]
        return f'new {self.identifier()} nphases={n_phases} {" ".join(line_props)}\n'

    def created_component_instances(self):
        """ Some TSE components may result in multiple converted components. """

        return self.created_instances_list
