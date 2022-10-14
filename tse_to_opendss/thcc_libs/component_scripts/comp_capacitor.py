import numpy as np

x0, y0 = (8192, 8192)


def calculate_c(mdl, mask_handle):
    tp_connection_prop = mdl.prop(mask_handle, "tp_connection")
    tp_connection = mdl.get_property_value(tp_connection_prop)
    phases_prop = mdl.prop(mask_handle, "phases")
    phases = mdl.get_property_value(phases_prop)

    v_correction = 1 if tp_connection == "Δ" else (1/(3**0.5))
    f = mdl.get_property_value(mdl.prop(mask_handle, "BaseFreq"))
    kvar = mdl.get_property_value(mdl.prop(mask_handle, "Kvar"))
    kv = mdl.get_property_value(mdl.prop(mask_handle, "Kv"))
    C = (1/(int(phases)))*kvar*1000/(2*np.pi*f*(1000*v_correction*kv)**2)

    mdl.set_property_value(mdl.prop(mask_handle, "C"), C)


def recreate_capacitors(mdl, comp_handle):
    cap_a = mdl.get_item('Ca', parent=comp_handle)
    cap_b = mdl.get_item('Cb', parent=comp_handle)
    cap_c = mdl.get_item('Cc', parent=comp_handle)
    phases_prop = mdl.prop(comp_handle, "phases")
    phase_num = mdl.get_property_disp_value(phases_prop)

    if phase_num == "3":
        if not cap_a:
            cap_a = mdl.create_component("Capacitor", parent=comp_handle, name="Ca", position=(8111,8095), rotation="down")
            mdl.set_property_value(mdl.prop(cap_a, "capacitance"), "C")
        if not cap_b:
            cap_b = mdl.create_component("Capacitor", parent=comp_handle, name="Cb", position=(8111,8191), rotation="down")
            mdl.set_property_value(mdl.prop(cap_b, "capacitance"), "C")
        if not cap_c:
            cap_c = mdl.create_component("Capacitor", parent=comp_handle, name="Cc", position=(8111,8287), rotation="down")
            mdl.set_property_value(mdl.prop(cap_c, "capacitance"), "C")
    elif phase_num == "2":
        if not cap_a:
            cap_a = mdl.create_component("Capacitor", parent=comp_handle, name="Ca", position=(8111,8095), rotation="down")
            mdl.set_property_value(mdl.prop(cap_a, "capacitance"), "C")
        if not cap_b:
            cap_b = mdl.create_component("Capacitor", parent=comp_handle, name="Cb", position=(8111,8191), rotation="down")
            mdl.set_property_value(mdl.prop(cap_b, "capacitance"), "C")
        if cap_c:
            mdl.delete_item(cap_c)
    elif phase_num == "1":
        if not cap_a:
            cap_a = mdl.create_component("Capacitor", parent=comp_handle, name="Ca", position=(8111,8095), rotation="down")
            mdl.set_property_value(mdl.prop(cap_a, "capacitance"), "C")
        if cap_b:
            mdl.delete_item(cap_b)
        if cap_c:
            mdl.delete_item(cap_c)


def y_delta_connection(mdl, comp_handle, tp_connection, phases):

    cap_a = mdl.get_item('Ca', parent=comp_handle)
    cap_b = mdl.get_item('Cb', parent=comp_handle)
    cap_c = mdl.get_item('Cc', parent=comp_handle)
    delta_conn_1 = mdl.get_item('delta_conn_1', parent=comp_handle, item_type="connection")
    delta_conn_2 = mdl.get_item('delta_conn_2', parent=comp_handle, item_type="connection")
    b1_conn = mdl.get_item('b1_conn', parent=comp_handle, item_type="connection")
    B1 = mdl.get_item('B1', parent=comp_handle, item_type="port")
    c1_conn = mdl.get_item('c1_conn', parent=comp_handle, item_type="connection")
    C1 = mdl.get_item('C1', parent=comp_handle, item_type="port")
    gndc = mdl.get_item("gndc", parent=comp_handle)

    if b1_conn:
        mdl.delete_item(b1_conn)

    if gndc:
        mdl.delete_item(gndc)

    #if B1:
    #    if not len(mdl.find_connections(B1)) == 0:
    #        for xx in mdl.find_connections(B1):
    #            mdl.delete_item(xx)
    #if C1:
    #    if not len(mdl.find_connections(C1)) == 0:
    #        for xx in mdl.find_connections(C1):
    #            mdl.delete_item(xx)

    junc = mdl.create_junction(name="j", parent=comp_handle, position=(x0 - 200, y0))
    if tp_connection == "Δ":
        delta_conn_1 = mdl.get_item('delta_conn_1', parent=comp_handle, item_type="connection")
        delta_conn_2 = mdl.get_item('delta_conn_2', parent=comp_handle, item_type="connection")
        if delta_conn_1:
            mdl.delete_item(delta_conn_1)
        if delta_conn_2:
            mdl.delete_item(delta_conn_2)
        mdl.create_connection(junc, mdl.term(cap_a, "n_node"))
        mdl.create_connection(junc, mdl.term(cap_c, "n_node"))
        mdl.create_connection(mdl.term(cap_a, "p_node"), mdl.term(cap_b, "n_node"), name="delta_conn_1")
        mdl.create_connection(mdl.term(cap_c, "p_node"), mdl.term(cap_b, "p_node"), name="delta_conn_2")
        mdl.create_connection(junc, B1, name="b1_conn")
        c1_conn = mdl.get_item('c1_conn', parent=comp_handle, item_type="connection")
        if not c1_conn:
            mdl.create_connection(C1, mdl.term(cap_c, "p_node"), name="c1_conn")

    elif tp_connection == "Y" or tp_connection == "Y-grounded":
        if delta_conn_1:
            mdl.delete_item(delta_conn_1)
        if delta_conn_2:
            mdl.delete_item(delta_conn_2)
        if c1_conn:
            mdl.delete_item(c1_conn)

        if phases == "1":
            mdl.create_connection(junc, mdl.term(cap_a, "n_node"))
        else:
            mdl.create_connection(junc, mdl.term(cap_a, "n_node"))
            mdl.create_connection(junc, mdl.term(cap_b, "n_node"))
            mdl.create_connection(junc, mdl.term(cap_c, "n_node"))
            mdl.create_connection(B1, mdl.term(cap_b, "p_node"), name="b1_conn")
            mdl.create_connection(C1, mdl.term(cap_c, "p_node"), name="c1_conn")

    if phases == "1":
        if tp_connection == "Y-grounded":
            gndc = mdl.get_item("gndc", parent=comp_handle)
            if not gndc:
                gndc = mdl.create_component("src_ground", parent=comp_handle, name="gndc", position=(7923, 8265))
            gndc_conn = mdl.get_item('gndc_conn', parent=comp_handle, item_type="connection")
            if not gndc_conn:
                mdl.create_connection(junc, mdl.term(gndc, "node"), name="gndc_conn")
        elif tp_connection == "Y":
            gnd = mdl.get_item('N1', parent=comp_handle, item_type="port")
            mdl.create_connection(junc, gnd)
    elif phases == "3":
        if tp_connection == "Y-grounded":
            gnd = mdl.get_item('N1', parent=comp_handle, item_type="port")
            mdl.create_connection(junc, gnd)


def redo_connections(mdl, mask_handle):
    comp_handle = mdl.get_parent(mask_handle)

    cap_a = mdl.get_item('Ca', parent=comp_handle)

    tp_connection_prop = mdl.prop(comp_handle, "tp_connection")
    tp_connection = mdl.get_property_disp_value(tp_connection_prop)

    phases_prop = mdl.prop(comp_handle, "phases")
    phases = mdl.get_property_disp_value(phases_prop)

    # delete_ports(mdl, comp_handle)
    gndc = mdl.get_item("gndc", parent=comp_handle)
    j = mdl.get_item('j', parent=comp_handle, item_type="junction")
    if j:
        mdl.delete_item(j)

    if gndc:
        mdl.delete_item(gndc)

    # redo_ports_primary(mdl, comp_handle)
    recreate_capacitors(mdl, comp_handle)

    if tp_connection == "Series":

        delta_conn_1 = mdl.get_item('delta_conn_1', parent=comp_handle, item_type="connection")
        delta_conn_2 = mdl.get_item('delta_conn_2', parent=comp_handle, item_type="connection")

        if delta_conn_1:
            mdl.delete_item(delta_conn_1)
        if delta_conn_2:
            mdl.delete_item(delta_conn_2)

        # create_bottom_ports(mdl, comp_handle)

        if phases == "1":
            A2 = mdl.get_item('A2', parent=comp_handle, item_type="port")
            mdl.create_connection(A2, mdl.term(cap_a, "n_node"))
        elif phases == "2":
            A2 = mdl.get_item('A2', parent=comp_handle, item_type="port")
            B2 = mdl.get_item('B2', parent=comp_handle, item_type="port")
            B1 = mdl.get_item('B1', parent=comp_handle, item_type="port")
            cap_b = mdl.get_item('Cb', parent=comp_handle)
            b1_conn = mdl.get_item('b1_conn', parent=comp_handle, item_type="connection")
            if not b1_conn:
                mdl.create_connection(B1, mdl.term(cap_b, "p_node"), name="b1_conn")

            mdl.create_connection(A2, mdl.term(cap_a, "n_node"))
            mdl.create_connection(B2, mdl.term(cap_b, "n_node"))
        else:
            A2 = mdl.get_item('A2', parent=comp_handle, item_type="port")
            B2 = mdl.get_item('B2', parent=comp_handle, item_type="port")
            C2 = mdl.get_item('C2', parent=comp_handle, item_type="port")
            B1 = mdl.get_item('B1', parent=comp_handle, item_type="port")
            C1 = mdl.get_item('C1', parent=comp_handle, item_type="port")
            cap_b = mdl.get_item('Cb', parent=comp_handle)
            cap_c = mdl.get_item('Cc', parent=comp_handle)
            b1_conn = mdl.get_item('b1_conn', parent=comp_handle, item_type="connection")
            if not b1_conn:
                mdl.create_connection(B1, mdl.term(cap_b, "p_node"), name="b1_conn")

            c1_conn = mdl.get_item('c1_conn', parent=comp_handle, item_type="connection")
            if not c1_conn:
                mdl.create_connection(C1, mdl.term(cap_c, "p_node"), name="c1_conn")

            mdl.create_connection(A2, mdl.term(cap_a, "n_node"))
            mdl.create_connection(B2, mdl.term(cap_b, "n_node"))
            mdl.create_connection(C2, mdl.term(cap_c, "n_node"))


    else:
        y_delta_connection(mdl, comp_handle, tp_connection, phases)


def toggle_frequency_prop(mdl, mask_handle):
    frequency_prop = mdl.prop(mask_handle, "BaseFreq")
    global_frequency_prop = mdl.prop(mask_handle, "global_basefreq")
    use_global = mdl.get_property_disp_value(global_frequency_prop)

    if use_global:
        if "simdss_basefreq" in mdl.get_ns_vars():
            mdl.set_property_value(frequency_prop, mdl.get_ns_var("simdss_basefreq"))
            mdl.hide_property(frequency_prop)
        else:
            mdl.set_property_disp_value(global_frequency_prop, False)
            mdl.info("Add a SimDSS component to define the global frequency value.")
    else:
        mdl.show_property(frequency_prop)


def update_frequency_property(mdl, mask_handle, init=False):

    frequency_prop = mdl.prop(mask_handle, "BaseFreq")
    global_frequency_prop = mdl.prop(mask_handle, "global_basefreq")
    use_global = mdl.get_property_value(global_frequency_prop)

    if init:
        mdl.hide_property(frequency_prop)
    else:
        if use_global:
            if "simdss_basefreq" in mdl.get_ns_vars():
                mdl.set_property_value(frequency_prop, mdl.get_ns_var("simdss_basefreq"))
            else:
                mdl.set_property_value(global_frequency_prop, False)
        toggle_frequency_prop(mdl, mask_handle)


def port_dynamics(mdl, mask_handle, caller_prop_handle=None, init=False):
    comp_handle = mdl.get_parent(mask_handle)
    deleted_ports = []
    created_ports = {}

    # Delete ports

    A2 = mdl.get_item('A2', parent=comp_handle, item_type="port")
    B2 = mdl.get_item('B2', parent=comp_handle, item_type="port")
    C2 = mdl.get_item('C2', parent=comp_handle, item_type="port")
    gnd = mdl.get_item('N1', parent=comp_handle, item_type="port")

    if A2:
        deleted_ports.append(mdl.get_name(A2))
        mdl.delete_item(A2)
    if B2:
        deleted_ports.append(mdl.get_name(B2))
        mdl.delete_item(B2)
    if C2:
        deleted_ports.append(mdl.get_name(C2))
        mdl.delete_item(C2)
    if gnd:
        deleted_ports.append(mdl.get_name(gnd))
        mdl.delete_item(gnd)

    # Redo ports primary

    phases_prop = mdl.prop(comp_handle, "phases")
    phases = mdl.get_property_disp_value(phases_prop)
    B1 = mdl.get_item('B1', parent=comp_handle, item_type="port")
    C1 = mdl.get_item('C1', parent=comp_handle, item_type="port")

    if phases == "3":
        if not B1:
            B1 = mdl.create_port(
                name="B1",
                parent=comp_handle,
                kind="pe",
                terminal_position=("top", "center"),
                position=(x0 + 200, y0),
                rotation="down"
            )
            created_ports.update({"B1": B1})
        if not C1:
            C1 = mdl.create_port(
                name="C1",
                parent=comp_handle,
                kind="pe",
                terminal_position=("top", "right"),
                position=(x0 + 200, y0 + 100),
                rotation="down"
            )
            created_ports.update({"C1": C1})
    elif phases == "2":
        if not B1:
            B1 = mdl.create_port(
                name="B1",
                parent=comp_handle,
                kind="pe",
                terminal_position=("top", "center"),
                position=(x0 + 200, y0),
                rotation="down"
            )
            created_ports.update({"B1": B1})
        if C1:
            deleted_ports.append(mdl.get_name(C1))
            mdl.delete_item(C1)
    elif phases == "1":
        if B1:
            deleted_ports.append(mdl.get_name(B1))
            mdl.delete_item(B1)
        if C1:
            deleted_ports.append(mdl.get_name(C1))
            mdl.delete_item(C1)

    tp_connection_prop = mdl.prop(comp_handle, "tp_connection")
    tp_connection = mdl.get_property_disp_value(tp_connection_prop)

    if tp_connection == "Y" and phases == "1":
        gnd = mdl.create_port(
            name="N1",
            parent=comp_handle,
            kind="pe",
            terminal_position=("bottom", "center"),
            position=(x0 - 300, y0),
            rotation="up"
        )
        created_ports.update({"N1": gnd})
    if (tp_connection == "Y" and phases == "1") or (tp_connection == "Y-grounded" and phases == "3"):
        gnd = mdl.create_port(
            name="N1",
            parent=comp_handle,
            kind="pe",
            terminal_position=("bottom", "center"),
            position=(x0 - 300, y0),
            rotation="up"
        )
        created_ports.update({"N1": gnd})
    elif tp_connection == "Series":  # Create bottom ports
        phases_prop = mdl.prop(comp_handle, "phases")
        phase_num = mdl.get_property_disp_value(phases_prop)

        A2 = mdl.create_port(
            name="A2",
            parent=comp_handle,
            kind="pe",
            terminal_position=(-32, 32),
            position=(x0 - 200, y0 - 100),
            rotation="up"
        )
        created_ports.update({"A2": A2})
        if phase_num == "3":
            B2 = mdl.create_port(
                name="B2",
                parent=comp_handle,
                kind="pe",
                terminal_position=("bottom", "center"),
                position=(x0 - 200, y0),
                rotation="up"
            )
            created_ports.update({"B2": B2})
            C2 = mdl.create_port(
                name="C2",
                parent=comp_handle,
                kind="pe",
                terminal_position=(32, 32),
                position=(x0 - 200, y0 + 100),
                rotation="up"
            )
            created_ports.update({"C2": C2})

        elif phase_num == "2":
            B2 = mdl.create_port(
                name="B2",
                parent=comp_handle,
                kind="pe",
                terminal_position=("bottom", "center"),
                position=(x0 - 200, y0),
                rotation="up"
            )
            created_ports.update({"B2": B2})

    A1 = mdl.get_item('A1', parent=comp_handle, item_type="port")
    B1 = mdl.get_item('B1', parent=comp_handle, item_type="port")
    C1 = mdl.get_item('C1', parent=comp_handle, item_type="port")
    A2 = mdl.get_item('A2', parent=comp_handle, item_type="port")
    B2 = mdl.get_item('B2', parent=comp_handle, item_type="port")
    C2 = mdl.get_item('C2', parent=comp_handle, item_type="port")
    gnd = mdl.get_item('N1', parent=comp_handle, item_type="port")

    if phases == "1":
        if A1:
            mdl.set_port_properties(A1, terminal_position=(0, -32))
        if A2:
            mdl.set_port_properties(A2, terminal_position=(0, 32))
        if gnd:
            mdl.set_port_properties(gnd, terminal_position=(0, 32))
    elif phases == "2":
        if A1:
            mdl.set_port_properties(A1, terminal_position=(-16, -32))
        if A2:
            mdl.set_port_properties(A2, terminal_position=(-16, 32))
        if B1:
            mdl.set_port_properties(B1, terminal_position=(16, -32))
        if B2:
            mdl.set_port_properties(B2, terminal_position=(16, 32))
    else:
        if A1:
            mdl.set_port_properties(A1, terminal_position=(-32, -32))
        if A2:
            mdl.set_port_properties(A2, terminal_position=(-32, 32))
        if B1:
            mdl.set_port_properties(B1, terminal_position=(0, -32))
        if B2:
            mdl.set_port_properties(B2, terminal_position=(0, 32))
        if C1:
            mdl.set_port_properties(C1, terminal_position=(32, -32))
        if C2:
            mdl.set_port_properties(C2, terminal_position=(32, 32))
        if gnd:
            mdl.set_port_properties(gnd, terminal_position=(0, 32))

    return created_ports, deleted_ports


def mask_dialog_dynamics(mdl, mask_handle, caller_prop_handle=None, init=False):

    if caller_prop_handle:

        new_value = mdl.get_property_disp_value(caller_prop_handle)

        if mdl.get_name(caller_prop_handle) == "phases":
            if new_value == "2":
                mdl.set_property_disp_value(mdl.prop(mask_handle, 'tp_connection'), "Series")
        elif mdl.get_name(caller_prop_handle) == "global_basefreq":
            toggle_frequency_prop(mdl, mask_handle)
        elif mdl.get_name(caller_prop_handle) == "tp_connection":
            if new_value == "Δ":
                mdl.set_property_disp_value(mdl.prop(mask_handle, 'phases'), "3")
                mdl.disable_property(mdl.prop(mask_handle, "phases"))
            else:
                mdl.enable_property(mdl.prop(mask_handle, "phases"))

            phases_num = mdl.get_property_disp_value(mdl.prop(mask_handle, "phases"))

            if phases_num == "2":
                if not new_value == "Series":
                    mdl.set_property_disp_value(mdl.prop(mask_handle, 'phases'), "3")


def define_icon(mdl, mask_handle):

    tp_connection_prop = mdl.prop(mask_handle, "tp_connection")
    tp_connection = mdl.get_property_disp_value(tp_connection_prop)
    phases_prop = mdl.prop(mask_handle, "phases")
    phases = mdl.get_property_disp_value(phases_prop)

    filenames = {"1": {"Series": "cap_1S", "Y-grounded": "cap_1Yg", "Y": "cap_1S"},
                 "2": {"Series": "cap_2S"},
                 "3": {"Series": "cap_3S", "Y-grounded": "cap_3Yg", "Y": "cap_3Y", "Δ": "cap_3D"},
                 }

    mdl.set_component_icon_image(mask_handle, f'images/{filenames[phases][tp_connection]}.svg')

