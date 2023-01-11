# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'load_object.ui'
#
# Created by: PyQt5 UI code generator 5.15.2
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets
import tse_to_opendss.thcc_libs.gui_scripts.general_objects as obj
import os, pathlib
import pandas as pd

from tse_to_opendss.conversion.default_mapping.component_classes.base import convert_matrix_format


class Ui_load_object(object):
    def setupUi(self, load_object):
        load_object.setObjectName("load_object")
        load_object.resize(362, 449)
        self.label_object = QtWidgets.QLabel(load_object)
        self.label_object.setGeometry(QtCore.QRect(10, 10, 61, 16))
        self.label_object.setObjectName("label_object")
        self.list_object = QtWidgets.QListWidget(load_object)
        self.list_object.setGeometry(QtCore.QRect(10, 30, 121, 381))
        self.list_object.setEditTriggers(QtWidgets.QAbstractItemView.NoEditTriggers)
        self.list_object.setObjectName("list_object")
        self.groupBox = QtWidgets.QGroupBox(load_object)
        self.groupBox.setGeometry(QtCore.QRect(140, 10, 211, 401))
        self.groupBox.setObjectName("groupBox")
        self.button_edit = QtWidgets.QPushButton(self.groupBox)
        self.button_edit.setGeometry(QtCore.QRect(130, 370, 75, 23))
        self.button_edit.setObjectName("button_edit")
        self.button_load = QtWidgets.QPushButton(load_object)
        self.button_load.setGeometry(QtCore.QRect(90, 420, 75, 23))
        self.button_load.setObjectName("button_load")
        self.button_cancel = QtWidgets.QPushButton(load_object)
        self.button_cancel.setGeometry(QtCore.QRect(180, 420, 75, 23))
        self.button_cancel.setObjectName("button_cancel")

        self.retranslateUi(load_object)
        QtCore.QMetaObject.connectSlotsByName(load_object)

    def retranslateUi(self, load_object):
        _translate = QtCore.QCoreApplication.translate
        load_object.setWindowTitle(_translate("load_object", "Form"))
        self.label_object.setText(_translate("load_object", "Object"))
        self.groupBox.setTitle(_translate("load_object", "Parameters"))
        self.button_edit.setText(_translate("load_object", "Edit"))
        self.button_load.setText(_translate("load_object", "Load"))
        self.button_cancel.setText(_translate("load_object", "Cancel"))


class LoadObject(QtWidgets.QDialog, Ui_load_object):

    def __init__(self, mdl, obj_type, obj_dicts={}, starting_object=None):
        super().__init__()
        self.setupUi(self)

        self.mdl = mdl
        try:
            self.mdl.get_model_file_path()
        except:
            raise Exception("Cannot load DSS object. The TSE model must be saved first.")

        self.starting_object = starting_object

        self.setWindowModality(QtCore.Qt.WindowModal)

        # Layout
        self.layout = QtWidgets.QGridLayout(self.groupBox)
        self.vertical_spacer = QtWidgets.QSpacerItem(40, 30, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Expanding)

        self.obj_dicts = obj_dicts
        self.obj_type = obj_type

        self.setWindowTitle(f"Select the {obj_type}")
        self.label_object.setText(f"{obj_type}")

        self.created_parameters = []
        self.selected_object = None

        self.list_object.itemSelectionChanged.connect(self.create_parameters)
        self.button_edit.clicked.connect(self.start_edit)
        self.button_cancel.clicked.connect(self.reject)
        self.button_load.clicked.connect(self.return_selected_object)

        self.open_window()

    def open_window(self):
        self.create_generic_parameters()
        self.refresh_all()

        if self.starting_object:
            found_obj = self.list_object.findItems(self.starting_object, QtCore.Qt.MatchExactly)
            if found_obj:
                self.list_object.setCurrentItem(found_obj[0])
        else:
            self.list_object.setCurrentRow(0)

    def refresh_all(self):
        self.update_list_with_names()
        self.create_parameters()

    def update_list_with_names(self):

        if self.obj_type == "LineCode":
            getname = "linecodes"
        elif self.obj_type == "LineGeometry":
            getname = "linegeometries"
        elif self.obj_type == "LoadShape":
            getname = "loadshapes"

        if self.obj_dicts.get(getname):
            self.list_object.clear()
            obj_names = list(self.obj_dicts.get(getname).keys())
            obj_names.sort()
            self.list_object.addItems(obj_names)

    def create_generic_parameters(self):

        self.generic_parameters = []

        for idx in range(10):
            self.new_label = QtWidgets.QLabel(self.groupBox)
            self.new_label.setGeometry(QtCore.QRect(10, 30, 51, 16))
            self.new_label.setObjectName(f"new_label{idx}")
            self.new_par_unit = QtWidgets.QLabel(self.groupBox)
            self.new_par_unit.setGeometry(QtCore.QRect(170, 30, 41, 16))
            self.new_par_unit.setObjectName(f"new_par_unit{idx}")
            self.edit_new_par = QtWidgets.QLineEdit(self.groupBox)
            self.edit_new_par.setMaxLength(200000)
            self.edit_new_par.setGeometry(QtCore.QRect(60, 30, 91, 20))
            self.edit_new_par.setReadOnly(True)
            self.edit_new_par.setObjectName(f"edit_new_par{idx}")
            self.layout.addWidget(self.new_label, idx, 0)
            self.layout.addWidget(self.edit_new_par, idx, 1)
            self.layout.addWidget(self.new_par_unit, idx, 2)

            self.new_label.setVisible(False)
            self.new_par_unit.setVisible(False)
            self.edit_new_par.setVisible(False)

            self.generic_parameters.extend([self.new_label, self.new_par_unit, self.edit_new_par])

        self.layout.addItem(self.vertical_spacer, idx + 1, 0, QtCore.Qt.AlignTop)

    def create_parameters(self):

        if self.obj_type == "LineCode":
            self.getname = "linecodes"
            self.unit_dict = {"r0": "Ω/km", "r1": "Ω/km", "x0": "Ω/km", "x1": "Ω/km", "c0": "nF/km",
                              "c1": "nF/km", "xmatrix": "Ω/km", "rmatrix": "Ω/km", "cmatrix": "nF/km", "nphases": ""}
        elif self.obj_type == "LineGeometry":
            self.getname = "linegeometries"
        elif self.obj_type == "LoadShape":
            self.getname = "loadshapes"
            self.unit_dict = {"mult": "", "npts": "", "hour": "", "useactual": "", }


        if self.list_object.currentItem():
            selected_object = self.list_object.currentItem().text()

            # If an item has been renamed it won't be found in the list
            if not selected_object in self.obj_dicts.get(self.getname):
                return

            # Update LoadShape interval type
            interval_type = self.obj_dicts.get(self.getname).get(selected_object).get("interval_unit")
            if interval_type:
                inter_string = "interval" if interval_type == "h" else "minterval" if interval_type == "min" else "sinterval"
                self.unit_dict.update({inter_string: ""})

            # Hide all first
            for param in self.generic_parameters:
                param.setVisible(False)

            for idx, par in enumerate(self.obj_dicts.get(self.getname).get(selected_object)):
                if not par == "mode" and par in self.unit_dict.keys():
                    if not par == "mult":
                        par_value = self.obj_dicts.get(self.getname).get(selected_object).get(par)
                    else:
                        use_csv = self.obj_dicts.get(self.getname).get(selected_object).get("csv_file") == "True"
                        if use_csv:
                            self.unit_dict["csv_path"] = ""
                            csv_path = self.obj_dicts.get(self.getname).get(selected_object).get("csv_path")
                            headers = self.obj_dicts.get(self.getname).get(selected_object).get("headers")
                            column = self.obj_dicts.get(self.getname).get(selected_object).get("column")
                            par_value = str(self.get_points_from_csv(csv_path, headers, column))
                        else:
                            par_value = self.obj_dicts.get(self.getname).get(selected_object).get(par)
                    if par_value:
                        self.new_label = self.findChild(QtWidgets.QWidget, f"new_label{idx}")
                        self.new_label.setText(f"{par}")
                        self.new_par_unit = self.findChild(QtWidgets.QWidget, f"new_par_unit{idx}")
                        if self.unit_dict.get(par):
                            self.new_par_unit.setText(f"{self.unit_dict.get(par)}")
                        else:
                            self.new_par_unit.setText(f"")
                        self.edit_new_par = self.findChild(QtWidgets.QWidget, f"edit_new_par{idx}")
                        self.edit_new_par.setObjectName(f"edit_new_par{idx}")

                        self.edit_new_par.setText(str(par_value))

                        self.new_label.setVisible(True)
                        self.new_par_unit.setVisible(True)
                        self.edit_new_par.setVisible(True)

    def start_edit(self):

        edit_window = obj.GeneralObjects(self.obj_type, obj_dicts=self.obj_dicts, mdl=self.mdl)
        selected_object = self.list_object.currentItem()
        selected_object_text = ""
        if selected_object:
            selected_object_text = selected_object.text()
            matches = edit_window.list_linecodes.findItems(selected_object_text, QtCore.Qt.MatchExactly)
            if matches:
                edit_window.list_linecodes.setCurrentItem(matches[0])

        if edit_window.exec():
            import json

            # Get the path to the objects file
            mdlfile = self.mdl.get_model_file_path()
            mdlfile_name = pathlib.Path(mdlfile).stem
            mdlfile_folder = pathlib.Path(mdlfile).parents[0]
            mdlfile_target_folder = mdlfile_folder.joinpath(mdlfile_name + ' Target files')
            dss_folder_path = pathlib.Path(mdlfile_target_folder).joinpath('dss')
            fpath = os.path.join(dss_folder_path, 'data', 'general_objects.json')

            self.obj_dicts = edit_window.obj_dicts

            if self.obj_type == "LineCode":
                dss_fpath = os.path.join(dss_folder_path, 'data', 'linecodes.dss')
            elif self.obj_type == "LoadShape":
                dss_fpath = os.path.join(dss_folder_path, 'data', 'loadshapes.dss')

            self.write_dss_object_file(dss_fpath)

            try:
                with open(fpath, 'w') as f:
                    f.write(json.dumps(self.obj_dicts, indent=4))
            except FileNotFoundError:
                os.mkdir(mdlfile_target_folder)
                with open(fpath, 'w') as f:
                    f.write(json.dumps(self.obj_dicts, indent=4))

            self.refresh_all()

        if selected_object_text:
            found_item = self.list_object.findItems(selected_object_text, QtCore.Qt.MatchExactly)
            if found_item:
                self.list_object.setCurrentItem(found_item[0])
        else:
            self.list_object.setCurrentItem(self.list_object.item(0))

    def write_dss_object_file(self, fpath):

        file_path = pathlib.Path(fpath)
        file_folder = file_path.parents[0]

        if not file_folder.is_dir():
            # Create missing directories
            file_folder.mkdir(parents=True)

        with open(fpath, 'w') as f:
            f.write(f"! Automatically generated by the Typhoon HIL TSE to OpenDSS converter.\n\n")
            for obj_name, param_dict in self.obj_dicts.get(self.getname).items():
                new_line = f'new "{self.obj_type.upper()}.{obj_name}" '

                par_strs = []
                num_phases = param_dict.get("nphases")
                exchange_dict = {"rmatrix": "R1", "xmatrix": "X1", "cmatrix": "C1", "nphases": "nphases"}

                for parname, parval in param_dict.items():
                    if parname.lower() in self.unit_dict.keys() and parval:
                        if num_phases == "1" and not parname == "nphases":
                            par_strs.append(f"{exchange_dict.get(parname)}={parval}")
                        else:
                            if parname in ["rmatrix", "xmatrix", "cmatrix"]:
                                parval = convert_matrix_format(parval, num_phases)
                            par_strs.append(f"{parname}={parval}")

                par_strs.sort(key=lambda x: x in ['npts'])  # npts should appear first if present
                new_line += " ".join(par_strs)
                f.write(new_line + "\n")

    def return_selected_object(self):
        self.selected_object = self.list_object.currentItem().text()
        self.accept()


    def get_points_from_csv(self, loaded_file_path, headers, column):
        try:
            with open(loaded_file_path, 'r') as f:
                if headers == "True":
                    df = pd.read_csv(f)
                    df = df.fillna(0)
                else:
                    df = pd.read_csv(f, header=None)
                    df = df.fillna(0)
                datapoints = list(df.iloc[:, int(column) - 1])
                return datapoints
        except FileNotFoundError:
            return "File not found."