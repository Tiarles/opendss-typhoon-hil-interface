from PyQt5 import QtCore, QtGui, QtWidgets
import string, os, sys
import math

# OpenDSS converter path
try:
    opendss_converter_path = os.environ['TYPHOON_OPENDSS_INTERFACE']
except:
    raise Exception("The TYPHOON_OPENDSS_INTERFACE system environment variable could not be found. " \
                    "Make sure Control Center is restarted after running install.bat in the opendss_integration folder.")

if not opendss_converter_path in sys.path:
    sys.path.append(opendss_converter_path)
    sys.path.append(opendss_converter_path + r'\dss_conv')

import dss_conv.schematic_converter.dss_parser as dss_parser

class Ui_objects(object):
    def setupUi(self, objects):
        objects.setObjectName("objects")
        objects.resize(589, 549)
        objects.setMinimumSize(QtCore.QSize(589, 549))
        objects.setMaximumSize(QtCore.QSize(589, 549))
        self.tabWidget = QtWidgets.QTabWidget(objects)
        self.tabWidget.setGeometry(QtCore.QRect(10, 10, 571, 471))
        self.tabWidget.setObjectName("tabWidget")
        self.tab_linecode = QtWidgets.QWidget()
        self.tab_linecode.setObjectName("tab_linecode")
        self.label_linecodes = QtWidgets.QLabel(self.tab_linecode)
        self.label_linecodes.setGeometry(QtCore.QRect(10, 40, 61, 16))
        self.label_linecodes.setObjectName("label_linecodes")
        self.group_parameters = QtWidgets.QGroupBox(self.tab_linecode)
        self.group_parameters.setGeometry(QtCore.QRect(150, 40, 401, 311))
        self.group_parameters.setObjectName("group_parameters")
        self.edit_r1 = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_r1.setGeometry(QtCore.QRect(50, 70, 91, 20))
        self.edit_r1.setObjectName("edit_r1")
        self.label_r1 = QtWidgets.QLabel(self.group_parameters)
        self.label_r1.setGeometry(QtCore.QRect(20, 70, 31, 16))
        self.label_r1.setObjectName("label_r1")
        self.label_r1_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_r1_unit.setGeometry(QtCore.QRect(150, 70, 31, 16))
        self.label_r1_unit.setObjectName("label_r1_unit")
        self.label_r0_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_r0_unit.setGeometry(QtCore.QRect(150, 100, 31, 16))
        self.label_r0_unit.setObjectName("label_r0_unit")
        self.edit_r0 = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_r0.setGeometry(QtCore.QRect(50, 100, 91, 20))
        self.edit_r0.setObjectName("edit_r0")
        self.label_r0 = QtWidgets.QLabel(self.group_parameters)
        self.label_r0.setGeometry(QtCore.QRect(20, 100, 31, 16))
        self.label_r0.setObjectName("label_r0")
        self.label_x1_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_x1_unit.setGeometry(QtCore.QRect(150, 130, 31, 16))
        self.label_x1_unit.setObjectName("label_x1_unit")
        self.edit_x1 = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_x1.setGeometry(QtCore.QRect(50, 130, 91, 20))
        self.edit_x1.setObjectName("edit_x1")
        self.label_x1 = QtWidgets.QLabel(self.group_parameters)
        self.label_x1.setGeometry(QtCore.QRect(20, 130, 31, 16))
        self.label_x1.setObjectName("label_x1")
        self.label_x0_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_x0_unit.setGeometry(QtCore.QRect(150, 160, 31, 16))
        self.label_x0_unit.setObjectName("label_x0_unit")
        self.edit_x0 = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_x0.setGeometry(QtCore.QRect(50, 160, 91, 20))
        self.edit_x0.setObjectName("edit_x0")
        self.label_x0 = QtWidgets.QLabel(self.group_parameters)
        self.label_x0.setGeometry(QtCore.QRect(20, 160, 31, 16))
        self.label_x0.setObjectName("label_x0")
        self.label_c1_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_c1_unit.setGeometry(QtCore.QRect(150, 190, 31, 16))
        self.label_c1_unit.setObjectName("label_c1_unit")
        self.edit_c1 = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_c1.setGeometry(QtCore.QRect(50, 190, 91, 20))
        self.edit_c1.setObjectName("edit_c1")
        self.label_c1 = QtWidgets.QLabel(self.group_parameters)
        self.label_c1.setGeometry(QtCore.QRect(20, 190, 31, 16))
        self.label_c1.setObjectName("label_c1")
        self.label_c0_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_c0_unit.setGeometry(QtCore.QRect(150, 220, 31, 16))
        self.label_c0_unit.setObjectName("label_c0_unit")
        self.edit_c0 = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_c0.setGeometry(QtCore.QRect(50, 220, 91, 20))
        self.edit_c0.setObjectName("edit_c0")
        self.label_c0 = QtWidgets.QLabel(self.group_parameters)
        self.label_c0.setGeometry(QtCore.QRect(20, 220, 31, 16))
        self.label_c0.setObjectName("label_c0")
        self.button_linecode_save = QtWidgets.QPushButton(self.group_parameters)
        self.button_linecode_save.setGeometry(QtCore.QRect(150, 270, 75, 23))
        self.button_linecode_save.setObjectName("button_linecode_save")
        self.label_rmatrix = QtWidgets.QLabel(self.group_parameters)
        self.label_rmatrix.setGeometry(QtCore.QRect(210, 70, 41, 16))
        self.label_rmatrix.setObjectName("label_rmatrix")
        self.label_rmatrix_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_rmatrix_unit.setGeometry(QtCore.QRect(360, 70, 31, 16))
        self.label_rmatrix_unit.setObjectName("label_rmatrix_unit")
        self.edit_rmatrix = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_rmatrix.setGeometry(QtCore.QRect(260, 70, 91, 20))
        self.edit_rmatrix.setObjectName("edit_rmatrix")
        self.label_xmatrix = QtWidgets.QLabel(self.group_parameters)
        self.label_xmatrix.setGeometry(QtCore.QRect(210, 100, 41, 16))
        self.label_xmatrix.setObjectName("label_xmatrix")
        self.label_xmatrix_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_xmatrix_unit.setGeometry(QtCore.QRect(360, 100, 31, 16))
        self.label_xmatrix_unit.setObjectName("label_xmatrix_unit")
        self.edit_xmatrix = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_xmatrix.setGeometry(QtCore.QRect(260, 100, 91, 20))
        self.edit_xmatrix.setObjectName("edit_xmatrix")
        self.label_cmatrix = QtWidgets.QLabel(self.group_parameters)
        self.label_cmatrix.setGeometry(QtCore.QRect(210, 130, 41, 16))
        self.label_cmatrix.setObjectName("label_cmatrix")
        self.label_cmatrix_unit = QtWidgets.QLabel(self.group_parameters)
        self.label_cmatrix_unit.setGeometry(QtCore.QRect(360, 130, 31, 16))
        self.label_cmatrix_unit.setObjectName("label_cmatrix_unit")
        self.edit_cmatrix = QtWidgets.QLineEdit(self.group_parameters)
        self.edit_cmatrix.setGeometry(QtCore.QRect(260, 130, 91, 20))
        self.edit_cmatrix.setObjectName("edit_cmatrix")
        self.radio_symmetrical = QtWidgets.QRadioButton(self.group_parameters)
        self.radio_symmetrical.setGeometry(QtCore.QRect(100, 30, 82, 17))
        self.radio_symmetrical.setChecked(True)
        self.radio_symmetrical.setObjectName("radio_symmetrical")
        self.radio_matrix = QtWidgets.QRadioButton(self.group_parameters)
        self.radio_matrix.setGeometry(QtCore.QRect(210, 30, 82, 17))
        self.radio_matrix.setObjectName("radio_matrix")
        self.list_linecodes = QtWidgets.QListWidget(self.tab_linecode)
        self.list_linecodes.setGeometry(QtCore.QRect(10, 60, 121, 271))
        self.list_linecodes.setObjectName("list_linecodes")
        self.button_newlinecode = QtWidgets.QPushButton(self.tab_linecode)
        self.button_newlinecode.setGeometry(QtCore.QRect(10, 340, 121, 23))
        self.button_newlinecode.setObjectName("button_newlinecode")
        self.button_copylinecode = QtWidgets.QPushButton(self.tab_linecode)
        self.button_copylinecode.setGeometry(QtCore.QRect(10, 370, 121, 23))
        self.button_copylinecode.setObjectName("button_copylinecode")
        self.button_linecodesfromdss = QtWidgets.QPushButton(self.tab_linecode)
        self.button_linecodesfromdss.setGeometry(QtCore.QRect(10, 10, 121, 23))
        self.button_linecodesfromdss.setObjectName("button_linecodesfromdss")
        self.tabWidget.addTab(self.tab_linecode, "")
        self.tab_wiredata = QtWidgets.QWidget()
        self.tab_wiredata.setObjectName("tab_wiredata")
        self.tabWidget.addTab(self.tab_wiredata, "")
        self.tab_linespacing = QtWidgets.QWidget()
        self.tab_linespacing.setObjectName("tab_linespacing")
        self.tabWidget.addTab(self.tab_linespacing, "")
        self.tab_linegeometry = QtWidgets.QWidget()
        self.tab_linegeometry.setObjectName("tab_linegeometry")
        self.tabWidget.addTab(self.tab_linegeometry, "")
        self.tab_loadshape = QtWidgets.QWidget()
        self.tab_loadshape.setObjectName("tab_loadshape")
        self.group_loadshape_parameters = QtWidgets.QGroupBox(self.tab_loadshape)
        self.group_loadshape_parameters.setGeometry(QtCore.QRect(150, 40, 401, 351))
        self.group_loadshape_parameters.setObjectName("group_loadshape_parameters")
        self.button_loadshape_save = QtWidgets.QPushButton(self.group_loadshape_parameters)
        self.button_loadshape_save.setGeometry(QtCore.QRect(163, 320, 75, 23))
        self.button_loadshape_save.setObjectName("button_loadshape_save")
        self.label_npts = QtWidgets.QLabel(self.group_loadshape_parameters)
        self.label_npts.setGeometry(QtCore.QRect(40, 30, 41, 20))
        self.label_npts.setObjectName("label_npts")
        self.label_npts_unit = QtWidgets.QLabel(self.group_loadshape_parameters)
        self.label_npts_unit.setGeometry(QtCore.QRect(130, 30, 31, 20))
        self.label_npts_unit.setObjectName("label_npts_unit")
        self.edit_npts = QtWidgets.QLineEdit(self.group_loadshape_parameters)
        self.edit_npts.setGeometry(QtCore.QRect(70, 30, 51, 20))
        self.edit_npts.setObjectName("edit_npts")
        self.edit_interval = QtWidgets.QLineEdit(self.group_loadshape_parameters)
        self.edit_interval.setGeometry(QtCore.QRect(280, 30, 51, 20))
        self.edit_interval.setObjectName("edit_interval")
        self.label_interval = QtWidgets.QLabel(self.group_loadshape_parameters)
        self.label_interval.setGeometry(QtCore.QRect(235, 30, 41, 20))
        self.label_interval.setObjectName("label_interval")
        self.edit_mult = QtWidgets.QLineEdit(self.group_loadshape_parameters)
        self.edit_mult.setGeometry(QtCore.QRect(70, 60, 261, 20))
        self.edit_mult.setObjectName("edit_mult")
        self.label_mult = QtWidgets.QLabel(self.group_loadshape_parameters)
        self.label_mult.setGeometry(QtCore.QRect(40, 60, 41, 20))
        self.label_mult.setObjectName("label_mult")
        self.edit_hour = QtWidgets.QLineEdit(self.group_loadshape_parameters)
        self.edit_hour.setGeometry(QtCore.QRect(70, 90, 261, 20))
        self.edit_hour.setObjectName("edit_hour")
        self.label_hour = QtWidgets.QLabel(self.group_loadshape_parameters)
        self.label_hour.setGeometry(QtCore.QRect(40, 90, 41, 20))
        self.label_hour.setObjectName("label_hour")
        self.loadshape_plot = QtWidgets.QWidget(self.group_loadshape_parameters)
        self.loadshape_plot.setGeometry(QtCore.QRect(20, 130, 381, 181))
        self.loadshape_plot.setObjectName("loadshape_plot")
        self.combo_interval = QtWidgets.QComboBox(self.group_loadshape_parameters)
        self.combo_interval.setGeometry(QtCore.QRect(335, 30, 51, 20))
        self.combo_interval.setObjectName("combo_interval")
        self.combo_interval.addItem("")
        self.combo_interval.addItem("")
        self.combo_interval.addItem("")
        self.label_loadshapes = QtWidgets.QLabel(self.tab_loadshape)
        self.label_loadshapes.setGeometry(QtCore.QRect(10, 40, 61, 16))
        self.label_loadshapes.setObjectName("label_loadshapes")
        self.button_newloadshape = QtWidgets.QPushButton(self.tab_loadshape)
        self.button_newloadshape.setGeometry(QtCore.QRect(10, 340, 121, 23))
        self.button_newloadshape.setObjectName("button_newloadshape")
        self.button_loadshapesfromdss = QtWidgets.QPushButton(self.tab_loadshape)
        self.button_loadshapesfromdss.setGeometry(QtCore.QRect(10, 10, 121, 23))
        self.button_loadshapesfromdss.setObjectName("button_loadshapesfromdss")
        self.button_copyloadshape = QtWidgets.QPushButton(self.tab_loadshape)
        self.button_copyloadshape.setGeometry(QtCore.QRect(10, 370, 121, 23))
        self.button_copyloadshape.setObjectName("button_copyloadshape")
        self.list_loadshapes = QtWidgets.QListWidget(self.tab_loadshape)
        self.list_loadshapes.setGeometry(QtCore.QRect(10, 60, 121, 271))
        self.list_loadshapes.setObjectName("list_loadshapes")
        self.tabWidget.addTab(self.tab_loadshape, "")
        self.button_ok = QtWidgets.QPushButton(objects)
        self.button_ok.setGeometry(QtCore.QRect(190, 520, 75, 23))
        self.button_ok.setObjectName("button_ok")
        self.button_cancel = QtWidgets.QPushButton(objects)
        self.button_cancel.setGeometry(QtCore.QRect(310, 520, 75, 23))
        self.button_cancel.setObjectName("button_cancel")
        self.label_savewarning = QtWidgets.QLabel(objects)
        self.label_savewarning.setGeometry(QtCore.QRect(60, 490, 481, 16))
        self.label_savewarning.setObjectName("label_savewarning")

        self.retranslateUi(objects)
        self.tabWidget.setCurrentIndex(4)
        QtCore.QMetaObject.connectSlotsByName(objects)

    def retranslateUi(self, objects):
        _translate = QtCore.QCoreApplication.translate
        objects.setWindowTitle(_translate("objects", "General objects"))
        self.label_linecodes.setText(_translate("objects", "LineCodes"))
        self.group_parameters.setTitle(_translate("objects", "Parameters"))
        self.label_r1.setText(_translate("objects", "R1"))
        self.label_r1_unit.setText(_translate("objects", "Ω/km"))
        self.label_r0_unit.setText(_translate("objects", "Ω/km"))
        self.label_r0.setText(_translate("objects", "R0"))
        self.label_x1_unit.setText(_translate("objects", "Ω/km"))
        self.label_x1.setText(_translate("objects", "X1"))
        self.label_x0_unit.setText(_translate("objects", "Ω/km"))
        self.label_x0.setText(_translate("objects", "X0"))
        self.label_c1_unit.setText(_translate("objects", "nF/km"))
        self.label_c1.setText(_translate("objects", "C1"))
        self.label_c0_unit.setText(_translate("objects", "nF/km"))
        self.label_c0.setText(_translate("objects", "C0"))
        self.button_linecode_save.setText(_translate("objects", "Save"))
        self.label_rmatrix.setText(_translate("objects", "rmatrix"))
        self.label_rmatrix_unit.setText(_translate("objects", "Ω/km"))
        self.label_xmatrix.setText(_translate("objects", "xmatrix"))
        self.label_xmatrix_unit.setText(_translate("objects", "Ω/km"))
        self.label_cmatrix.setText(_translate("objects", "cmatrix"))
        self.label_cmatrix_unit.setText(_translate("objects", "nF/km"))
        self.radio_symmetrical.setText(_translate("objects", "Symmetrical"))
        self.radio_matrix.setText(_translate("objects", "Matrix"))
        self.button_newlinecode.setText(_translate("objects", "New"))
        self.button_copylinecode.setText(_translate("objects", "Copy selected"))
        self.button_linecodesfromdss.setText(_translate("objects", "Add from .dss file"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_linecode), _translate("objects", "LineCode"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_wiredata), _translate("objects", "WireData"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_linespacing), _translate("objects", "LineSpacing"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_linegeometry), _translate("objects", "LineGeometry"))
        self.group_loadshape_parameters.setTitle(_translate("objects", "Parameters"))
        self.button_loadshape_save.setText(_translate("objects", "Save"))
        self.label_npts.setText(_translate("objects", "npts"))
        self.label_npts_unit.setText(_translate("objects", "points"))
        self.label_interval.setText(_translate("objects", "interval"))
        self.label_mult.setText(_translate("objects", "mult"))
        self.label_hour.setText(_translate("objects", "hour"))
        self.combo_interval.setItemText(0, _translate("objects", "h"))
        self.combo_interval.setItemText(1, _translate("objects", "min"))
        self.combo_interval.setItemText(2, _translate("objects", "s"))
        self.label_loadshapes.setText(_translate("objects", "LoadShapes"))
        self.button_newloadshape.setText(_translate("objects", "New"))
        self.button_loadshapesfromdss.setText(_translate("objects", "Add from file"))
        self.button_copyloadshape.setText(_translate("objects", "Copy selected"))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.tab_loadshape), _translate("objects", "LoadShape"))
        self.button_ok.setText(_translate("objects", "Save"))
        self.button_cancel.setText(_translate("objects", "Cancel"))
        self.label_savewarning.setText(_translate("objects", "Warning: changes are independent from the schematic model and cannot be restored once saved."))
        self.edited()

    def edited(self):
        self.edit_mult.setMaxLength(200000)
        self.linecode_pars = {
            "symmetrical":
                {"r1": self.edit_r1,
                 "r0": self.edit_r0,
                 "x1": self.edit_x1,
                 "x0": self.edit_x0,
                 "c1": self.edit_c1,
                 "c0": self.edit_c0},
            "matrix":
                {"rmatrix": self.edit_rmatrix,
                 "xmatrix": self.edit_xmatrix,
                 "cmatrix": self.edit_cmatrix,
                }
        }

        self.loadshape_pars = {
            "npts": self.edit_npts,
            "interval": self.edit_interval,
            "mult": self.edit_mult,
            "hour": self.edit_hour,
            "interval_unit": self.combo_interval
            }

        self.double_validator = QtGui.QDoubleValidator()
        self.int_validator = QtGui.QIntValidator()
        self.edit_r0.setValidator(self.double_validator)
        self.edit_c0.setValidator(self.double_validator)
        self.edit_c1.setValidator(self.double_validator)
        self.edit_r1.setValidator(self.double_validator)
        self.edit_x0.setValidator(self.double_validator)
        self.edit_x1.setValidator(self.double_validator)
        self.edit_npts.setValidator(self.int_validator)
        self.edit_interval.setValidator(self.double_validator)

        self.button_linecode_save.setDisabled(True)
        self.button_loadshape_save.setDisabled(True)

        # Hide all tabs
        self.tabWidget.clear()


    def create_loadshape_plot(self):
        from matplotlib import rc
        import matplotlib.figure
        from matplotlib.backends.backend_qt5agg import FigureCanvas, NavigationToolbar2QT

        # Font
        rc('font', **{'size': 8})

        self.loadshape_plot_grid = QtWidgets.QGridLayout()
        self.loadshape_plot.setLayout(self.loadshape_plot_grid)

        # Add widgets from the matplotlib backend
        self.figure_loadshape = matplotlib.figure.Figure()
        self.canvas_loadshape = FigureCanvas(self.figure_loadshape)
        self.loadshape_plot_grid.addWidget(self.canvas_loadshape)

        # self.addToolBar(QtCore.Qt.BottomToolBarArea, self.toolbar)

        self.loadshape_subplot = self.figure_loadshape.add_subplot(111, position=[0.12, 0.2, 0.76, 0.7])
        self.loadshape_subplot.set_xlim([0, 4])
        self.loadshape_subplot.set_ylim([0, 4])
        self.loadshape_subplot.grid(which="both")

    def return_list_of_floats(self, str_input):
        try:
            import ast
            evaluated_input = ast.literal_eval(str_input)
            return_list = []
            if type(evaluated_input) == list:
                for elem in evaluated_input:
                    f_val = float(elem)
                    return_list.append(f_val)
                return return_list
        except ValueError:
            return None
        except SyntaxError:
            # May be using spaces instead of commas to separate values
            return None


class GeneralObjects(QtWidgets.QDialog, Ui_objects):

    def __init__(self, obj_type, obj_dicts={}):
        super().__init__()
        self.setupUi(self)

        self.obj_dicts = obj_dicts
        self.obj_type = obj_type.lower()

        self.linecodes_dict = {}
        self.loadshape_dict = {}
        self.linespacing_dict = {}
        self.wiredata_dict = {}
        self.linegeometry_dict = {}

        if self.obj_type == "linecode":
            self.tabWidget.addTab(self.tab_linecode, "LineCode")
        elif self.obj_type == "wiredata":
            self.tabWidget.addTab(self.tab_wiredata, "WireData")
        elif self.obj_type == "linespacing":
            self.tabWidget.addTab(self.tab_linespacing, "LineSpacing")
        elif self.obj_type == "linegeometry":
            self.tabWidget.addTab(self.tab_linegeometry, "LineGeometry")
        elif self.obj_type == "loadshape":
            self.tabWidget.addTab(self.tab_loadshape, "LoadShape")

        # Auxiliary vars
        self.old_listitem_name = ""
        self.valid_characters = list(string.ascii_lowercase + string.ascii_uppercase + string.digits + "_<>:-")

        ## Signals

        # Lists
        self.list_linecodes.itemDoubleClicked.connect(self.rename_object_step1)
        self.list_linecodes.itemDelegate().commitData.connect(lambda txt: self.rename_object_step2(txt, "linecode"))
        self.list_linecodes.itemSelectionChanged.connect(lambda: self.update_parameters_from_dict(self.list_linecodes))

        self.list_loadshapes.itemDoubleClicked.connect(self.rename_object_step1)
        self.list_loadshapes.itemDelegate().commitData.connect(lambda txt: self.rename_object_step2(txt, "loadshape"))
        self.list_loadshapes.itemSelectionChanged.connect(lambda: self.update_parameters_from_dict(self.list_loadshapes))

        # Keyboard shortcuts
        self.delete_shortcut = QtWidgets.QShortcut("Delete", self.list_linecodes)
        self.delete_shortcut.activated.connect(lambda: self.delete_object(self.list_linecodes))

        # Buttons
        self.button_newlinecode.clicked.connect(lambda: self.new_object("linecode"))
        self.button_copylinecode.clicked.connect(lambda: self.copy_object("linecode"))
        self.button_linecode_save.clicked.connect(lambda: self.save_parameters("linecode"))
        self.button_linecodesfromdss.clicked.connect(lambda: self.add_from_file("linecode"))

        self.button_newloadshape.clicked.connect(lambda: self.new_object("loadshape"))
        self.button_copyloadshape.clicked.connect(lambda: self.copy_object("loadshape"))
        self.button_loadshape_save.clicked.connect(lambda: self.save_parameters("loadshape"))
        self.button_loadshapesfromdss.clicked.connect(lambda: self.add_from_file("loadshape"))

        self.button_ok.clicked.connect(self.return_updated_dict)
        self.button_cancel.clicked.connect(self.reject)

        # Radio buttons
        self.radio_symmetrical.toggled.connect(lambda: self.radio_button_status("linecode"))
        self.radio_matrix.toggled.connect(lambda: self.radio_button_status("linecode"))

        # Highlight parameters changed but not saved
        # LineCode
        for param, widget in self.linecode_pars.get("symmetrical").items():
            widget.textEdited.connect(lambda txt: self.parameter_pending_save(txt, self.list_linecodes))
        for param, widget in self.linecode_pars.get("matrix").items():
            widget.textEdited.connect(lambda txt: self.parameter_pending_save(txt, self.list_linecodes))
        # LoadShape
        for param, widget in self.loadshape_pars.items():
            if not widget == self.combo_interval:
                widget.textEdited.connect(lambda txt: self.parameter_pending_save(txt, self.list_loadshapes))
                widget.textEdited.connect(lambda txt: self.update_plot(self.loadshape_subplot))
            else:
                widget.currentIndexChanged.connect(lambda txt: self.parameter_pending_save(txt, self.list_loadshapes))


        # Initialize dictionaries
        self.get_object_dicts()

        # Initialize parameters
        self.radio_button_status("linecode")

        # Initialize list widgets
        self.update_lists_with_names(start=True)

        # Plots
        self.create_loadshape_plot()
        self.update_plot(self.loadshape_subplot)

    def get_obj_defaults(self, obj_type):

        if obj_type == "linecode":
            linecode_def = {
                "mode": "symmetrical",
                "r1": "0.01273",
                "r0": "0.3864",
                "x1": "0.9337e-3",
                "x0": "4.1264e-3",
                "c1": "12.74e-9",
                "c0": "7.751e-9",
            }

            return linecode_def

        elif obj_type == "loadshape":
            loadshape_def = {
                "npts": "5",
                "mult": "[0.5, 0.8, 0, -0.8, 0.5]",
                "interval": "1",
                "hour": "",
            }

            return loadshape_def

    def update_plot(self, plot_object):

        mult_values = self.return_list_of_floats(self.edit_mult.text())
        hour_values = self.return_list_of_floats(self.edit_hour.text())
        interval = self.edit_interval.text()
        npts = self.edit_npts.text()

        if npts and not npts == '-' and interval and not interval == '-':
            npts = int(npts)
            interval = float(interval)


            if mult_values and npts > 1 and interval >= 0:
                if interval == 0:
                    if hour_values:
                        xdata = hour_values[:npts]
                        ydata = mult_values[:len(xdata)]
                        ydata.extend([0] * (len(xdata) - len(ydata))) # Zero padding
                    else:
                        xdata = None
                else:
                    xdata = [0] + [n*interval for n in list(range(1, npts))]
                    ydata = mult_values[:len(xdata)]
                    ydata.extend([0] * (len(xdata) - len(ydata))) # Zero padding

                plot_object.cla()
                if xdata and ydata:
                    self.loadshape_subplot.set_xlim([min(xdata), max(xdata)])
                    min_y = math.floor(min(ydata))
                    max_y = math.ceil(max(ydata))
                    y_tick_num = (max_y - min_y) / 4
                    self.loadshape_subplot.set_ylim([min_y-(y_tick_num*0.2), max_y+(y_tick_num*0.2)])
                    self.loadshape_subplot.set_yticks([min_y + y_tick_num * n for n in range(5)])
                    min_x = min(xdata)
                    max_x = max(xdata)
                    x_tick_num = (max_x - min_x) / 4
                    self.loadshape_subplot.set_xticks([min_x + x_tick_num * n for n in range(5)])
                    plot_object.plot(xdata, ydata, 'r')
                    plot_object.grid(which="both")
                self.canvas_loadshape.draw()

            else:
                plot_object.cla()
                self.loadshape_subplot.set_xlim([0, 4])
                self.loadshape_subplot.set_ylim([0, 4])
                self.loadshape_subplot.grid(which="both")
                self.canvas_loadshape.draw()
        else:
            plot_object.cla()
            self.loadshape_subplot.set_xlim([0, 4])
            self.loadshape_subplot.set_ylim([0, 4])
            self.loadshape_subplot.grid(which="both")
            self.canvas_loadshape.draw()

    def get_object_dicts(self):

        linecode_def = {"Default": self.get_obj_defaults("linecode")}
        loadshape_def = {"Default": self.get_obj_defaults("loadshape")}

        if self.obj_dicts:
            if self.obj_dicts.get("linecodes"):
                self.linecodes_dict.update(self.obj_dicts.get("linecodes"))
            else:
                self.linecodes_dict.update(linecode_def)
            if self.obj_dicts.get("loadshapes"):
                self.loadshape_dict.update(self.obj_dicts.get("loadshapes"))
            else:
                self.loadshape_dict.update(loadshape_def)
        else:
            self.linecodes_dict.update(linecode_def)
            self.loadshape_dict.update(loadshape_def)

    def update_lists_with_names(self, start=False):

        #LineCodes
        self.list_linecodes.clear()
        linecode_names = list(self.linecodes_dict.keys())

        if linecode_names:
            linecode_names.sort()

            self.list_linecodes.addItems(linecode_names)
            for idx in range(self.list_linecodes.count()):
                item = self.list_linecodes.item(idx)
                item.setFlags(item.flags() | QtCore.Qt.ItemIsEditable)
        if start:
            self.list_linecodes.setCurrentRow(0)

        #LoadShapes
        self.list_loadshapes.clear()
        loadshape_names = list(self.loadshape_dict.keys())

        if loadshape_names:
            loadshape_names.sort()

            self.list_loadshapes.addItems(loadshape_names)
            for idx in range(self.list_loadshapes.count()):
                item = self.list_loadshapes.item(idx)
                item.setFlags(item.flags() | QtCore.Qt.ItemIsEditable)
        if start:
            self.list_loadshapes.setCurrentRow(0)


    def update_parameters_from_dict(self, obj_list):

        # Linecode
        if obj_list == self.list_linecodes:
            self.radio_button_status("linecode")

            if obj_list.currentItem():
                linecode_name = obj_list.currentItem().text()

                if self.linecodes_dict.get(linecode_name).get("mode") == "symmetrical":
                    self.radio_symmetrical.setChecked(True)
                elif self.linecodes_dict.get(linecode_name).get("mode") == "matrix":
                    self.radio_matrix.setChecked(True)

                mode = "symmetrical" if self.radio_symmetrical.isChecked() else "matrix"

                # Process linecode parameters
                for par in self.linecode_pars.get(mode):
                    par_value = self.linecodes_dict.get(linecode_name).get(par)
                    if par_value:
                        if isinstance(self.linecode_pars.get(mode).get(par), QtWidgets.QLineEdit):
                            self.linecode_pars.get(mode).get(par).setText(f"{par_value}")
                            self.linecode_pars.get(mode).get(par).setStyleSheet("color: black;")
            else:
                # Blank out the parameters
                mode = "symmetrical" if self.radio_symmetrical.isChecked() else "matrix"
                for par in self.linecode_pars.get(mode):
                    self.linecode_pars.get(mode).get(par).setText(f"")

        # LoadShape
        elif obj_list == self.list_loadshapes:

            if obj_list.currentItem():
                loadshape_name = obj_list.currentItem().text()

                # Process loadshape parameters
                for par in self.loadshape_pars:
                    par_value = self.loadshape_dict.get(loadshape_name).get(par)
                    if par_value:
                        if isinstance(self.loadshape_pars.get(par), QtWidgets.QLineEdit):
                            self.loadshape_pars.get(par).setText(f"{par_value}")
                            self.loadshape_pars.get(par).setStyleSheet("color: black;")
                        elif isinstance(self.loadshape_pars.get(par), QtWidgets.QComboBox):
                            idx_dict = {"h": 0, "min": 1, "s": 2}
                            self.loadshape_pars.get(par).setCurrentIndex(idx_dict.get(par_value))
                            self.loadshape_pars.get(par).setStyleSheet("color: black;")
            else:
                for par in self.loadshape_pars:
                    self.loadshape_pars.get(par).setText(f"")

            if hasattr(self, 'loadshape_subplot'):
                self.update_plot(self.loadshape_subplot)

    def radio_button_status(self, obj_type):

        if obj_type == "linecode":
            if self.radio_matrix.isChecked():
                for param_editbox in self.linecode_pars.get("symmetrical").values():
                    param_editbox.setEnabled(False)
                for param_editbox in self.linecode_pars.get("matrix").values():
                    param_editbox.setEnabled(True)
            elif self.radio_symmetrical.isChecked():
                for param_editbox in self.linecode_pars.get("symmetrical").values():
                    param_editbox.setEnabled(True)
                for param_editbox in self.linecode_pars.get("matrix").values():
                    param_editbox.setEnabled(False)

    def parameter_pending_save(self, _, list_widget):

        if list_widget == self.list_linecodes:
            mode = "symmetrical" if self.radio_symmetrical.isChecked() else "matrix"
            pending = []
            for param, widget in self.linecode_pars.get(mode).items():
                current_value = self.linecodes_dict.get(list_widget.currentItem().text()).get(param)
                if not widget.text() == current_value:
                    widget.setStyleSheet("color: red;")
                    pending.append(True)
                else:
                    widget.setStyleSheet("color: black;")
                    pending.append(False)
            if any(pending):
                self.button_linecode_save.setEnabled(True)
            else:
                self.button_linecode_save.setEnabled(False)

        elif list_widget == self.list_loadshapes:
            pending = []
            for param, widget in self.loadshape_pars.items():

                current_value = self.loadshape_dict.get(list_widget.currentItem().text()).get(param)
                if not widget == self.combo_interval:
                    current_text = widget.text()
                else:
                    current_text = widget.currentText()

                if not current_text == current_value:
                    widget.setStyleSheet("color: red;")
                    pending.append(True)
                else:
                    widget.setStyleSheet("color: black;")
                    pending.append(False)

            if any(pending):
                self.button_loadshape_save.setEnabled(True)
            else:
                self.button_loadshape_save.setEnabled(False)


    def new_object(self, obj_type):

        for k in range(10000):
            if k == 0:
                new_name = "Default"
            else:
                new_name = "Default" + str(k)

            if obj_type == "linecode":
                if self.list_linecodes.findItems(new_name, QtCore.Qt.MatchExactly):
                    # If the new name already exists, count k + 1
                    pass
                else:
                    self.linecodes_dict.update({new_name: self.get_obj_defaults("linecode")})
                    self.update_lists_with_names()
                    self.list_linecodes.setCurrentItem(self.list_linecodes.findItems(new_name, QtCore.Qt.MatchExactly)[0])
                    break
            elif obj_type == "loadshape":
                if self.list_loadshapes.findItems(new_name, QtCore.Qt.MatchExactly):
                    # If the new name already exists, count k + 1
                    pass
                else:
                    self.loadshape_dict.update({new_name: self.get_obj_defaults("loadshape")})
                    self.update_lists_with_names()
                    self.list_loadshapes.setCurrentItem(self.list_loadshapes.findItems(new_name, QtCore.Qt.MatchExactly)[0])
                    break

    def copy_object(self, obj_type):

        if obj_type == "linecode":
            if self.list_linecodes.currentItem():
                selected_object = self.list_linecodes.currentItem()
        elif obj_type == "loadshape":
            if self.list_loadshapes.currentItem():
                selected_object = self.list_loadshapes.currentItem()
        for k in range(10000):
            if k == 0:
                new_name = selected_object.text()
            else:
                new_name = selected_object.text() + str(k)

            if obj_type == "linecode":
                if self.list_linecodes.findItems(new_name, QtCore.Qt.MatchExactly):
                    # If the new name already exists, count k + 1
                    pass
                else:
                    self.linecodes_dict.update({new_name: self.linecodes_dict.get(selected_object.text())})
                    self.update_lists_with_names()
                    self.list_linecodes.setCurrentItem(self.list_linecodes.findItems(new_name, QtCore.Qt.MatchExactly)[0])
                    break
            elif obj_type == "loadshape":
                if self.list_loadshapes.findItems(new_name, QtCore.Qt.MatchExactly):
                    # If the new name already exists, count k + 1
                    pass
                else:
                    self.loadshape_dict.update({new_name: self.loadshape_dict.get(selected_object.text())})
                    self.update_lists_with_names()
                    self.list_loadshapes.setCurrentItem(self.list_loadshapes.findItems(new_name, QtCore.Qt.MatchExactly)[0])
                    break

    def rename_object_step1(self, list_item):
        self.old_listitem_name = list_item.text()
        self.changing_listitem = list_item

    def rename_object_step2(self, list_item, obj_type):
        for c in list_item.text():
            if c not in self.valid_characters:
                self.changing_listitem.setText(self.old_listitem_name)
                msgbox = QtWidgets.QMessageBox
                msgbox.warning(self, "Invalid name", "The object name contains invalid characters")
                return

        if obj_type == "linecode":
            self.linecodes_dict.update({list_item.text(): self.linecodes_dict.pop(self.old_listitem_name)})
        elif obj_type == "loadshape":
            self.loadshape_dict.update({list_item.text(): self.loadshape_dict.pop(self.old_listitem_name)})

    def delete_object(self, list_widget):
        msgbox = QtWidgets.QMessageBox()
        ans = msgbox.question(self, 'Remove', f"Are you sure you want to remove {list_widget.currentItem().text()}?", msgbox.Yes | msgbox.No)
        if ans == msgbox.Yes:
            deleted_object = list_widget.takeItem(list_widget.row(list_widget.currentItem())).text()
            self.linecodes_dict.pop(deleted_object)

    def save_parameters(self, obj_type):

        new_param_values = {}

        if obj_type == "linecode":

            mode = "symmetrical" if self.radio_symmetrical.isChecked() else "matrix"
            for param_name, param_widget in self.linecode_pars.get(mode).items():
                new_param_values.update({param_name: param_widget.text()})
            new_param_values.update({"mode": mode})

            self.linecodes_dict.update({self.list_linecodes.currentItem().text(): new_param_values})

            for param, widget in self.linecode_pars.get("symmetrical").items():
                widget.setStyleSheet("color: black;")
            for param, widget in self.linecode_pars.get("matrix").items():
                widget.setStyleSheet("color: black;")
            self.button_linecode_save.setDisabled(True)

        if obj_type == "loadshape":

            for param_name, param_widget in self.loadshape_pars.items():
                if isinstance(param_widget, QtWidgets.QComboBox):
                    pass
                else:
                    new_param_values.update({param_name: param_widget.text()})

            self.loadshape_dict.update({self.list_loadshapes.currentItem().text(): new_param_values})

            for param, widget in self.loadshape_pars.items():
                widget.setStyleSheet("color: black;")
            self.button_loadshape_save.setDisabled(True)


    def return_updated_dict(self):
        msgbox = QtWidgets.QMessageBox()
        ans = msgbox.question(self, 'Save changes',
                              f"Are you sure you want to save the new parameters? Changes cannot be undone.",
                              msgbox.Yes | msgbox.No)

        if ans == msgbox.Yes:
            self.obj_dicts.update({
                "linecodes": self.linecodes_dict,
                "loadshapes": self.loadshape_dict,
            })
            self.accept()

    def add_from_file(self, obj_type):

        if obj_type == "linecode" or obj_type == "loadshape":
            filter = "(*.csv *.dss);"
            file_name = QtWidgets.QFileDialog()
            file_name.setFileMode(QtWidgets.QFileDialog.ExistingFile)
            located_file = file_name.getOpenFileName(self, "Select a file", "C:\Program Files\OpenDSS\Examples",
                                                       filter)
            if located_file[0]:

                duplicate = False
                csv_loaded = False
                if obj_type == "linecode":
                    obj_dict = self.linecodes_dict
                    obj_list = self.list_linecodes
                    added_items = dss_parser.parse_linecodes(located_file[0])
                    if added_items:
                        for linecode in list(added_items.keys()):
                            if self.list_linecodes.findItems(linecode, QtCore.Qt.MatchExactly):
                                duplicate = True
                elif obj_type == "loadshape":
                    obj_dict = self.loadshape_dict
                    obj_list = self.list_loadshapes
                    if located_file[0][-3:].lower() == "dss":
                        added_items = dss_parser.parse_loadshapes(located_file[0])
                    elif located_file[0][-3:].lower() == "csv":
                        added_items = None
                        csv_loaded = True
                    if added_items:
                        for loadshape in list(added_items.keys()):
                            if self.list_loadshapes.findItems(loadshape, QtCore.Qt.MatchExactly):
                                duplicate = True

                if added_items:
                    if duplicate:
                        msgbox = QtWidgets.QMessageBox()
                        msgbox.setIcon(QtWidgets.QMessageBox.Question)
                        msgbox.setText("The selected file contains LineCodes with names matching existing ones.\n\n"
                                       "Select Replace to update the parameter values from the selected file.\n\n"
                                       "Select Keep to add the new LineCodes with a different name.")
                        msgbox.setWindowTitle('Duplicate names detected')
                        replace_btn = msgbox.addButton('Replace', QtWidgets.QMessageBox.YesRole)
                        keep_btn = msgbox.addButton('Keep', QtWidgets.QMessageBox.NoRole)
                        cancel_btn = msgbox.addButton('Cancel', QtWidgets.QMessageBox.RejectRole)

                        msgbox.exec()

                        if msgbox.clickedButton() == replace_btn:
                            obj_dict.update(added_items)
                            self.update_lists_with_names()
                        elif msgbox.clickedButton() == keep_btn:
                            for item in list(added_items.keys()):
                                for k in range(10000):
                                    if k == 0:
                                        new_name = item
                                    else:
                                        new_name = item + '-' + str(k)
                                    if obj_list.findItems(new_name, QtCore.Qt.MatchExactly):
                                        # If the new name already exists, count k + 1
                                        pass
                                    else:
                                        obj_dict.update({new_name: added_items[item]})
                                        break
                            self.update_lists_with_names()
                        elif msgbox.clickedButton() == cancel_btn:
                            print("Cancel")
                    else:
                        if obj_type == "linecode":
                            self.linecodes_dict.update(added_items)
                        elif obj_type == "loadshape":
                            self.loadshape_dict.update(added_items)
                        self.update_lists_with_names()
                elif csv_loaded:
                    from pathlib import Path
                    with open(located_file[0]) as f:
                        all_lines = f.readlines()
                        mult_list = []
                        for entry in all_lines:
                            try:
                                mult_list.append(float(entry.split(",")[0]))
                            except ValueError:
                                pass
                        for k in range(10000):
                            if k == 0:
                                new_name = f"{Path(located_file[0]).stem}"
                            else:
                                new_name = f'{Path(located_file[0]).stem}-' + str(k)
                            if obj_list.findItems(new_name, QtCore.Qt.MatchExactly):
                                # If the new name already exists, count k + 1
                                pass
                            else:
                                obj_dict.update({new_name: {"mult": str(mult_list),
                                                            "interval": "1",
                                                            "npts": str(len(all_lines)),
                                                            "hour": "",
                                                            "interval_unit": "h"}})
                                break

                    self.update_lists_with_names()


                else:
                    msgbox = QtWidgets.QMessageBox()
                    msgbox.setIcon(QtWidgets.QMessageBox.Question)
                    msgbox.setText(f"Couldn't parse any {obj_type}s from the selected file.")
                    msgbox.setWindowTitle('No items found,')
                    ok_btn = msgbox.addButton('OK', QtWidgets.QMessageBox.YesRole)

                    msgbox.exec()

if __name__ == "__main__":
    import sys
    import traceback

    # Show tracebacks #
    if QtCore.QT_VERSION >= 0x50501:
        def excepthook(type_, value, traceback_):
            traceback.print_exception(type_, value, traceback_)
            QtCore.qFatal('')
    sys.excepthook = excepthook


    app = QtWidgets.QApplication(sys.argv)
    bla = {"linecodes": {"aaa": {
                "mode": "symmetrical",
                "r1": "0.01273",
                "r0": "0.3864",
                "x1": "0.9337e-3",
                "x0": "4.1264e-3",
                "c1": "12.74e-9",
                "c0": "7.751e-9",
            }}}

    mainwindow = GeneralObjects("loadshape", bla)
    mainwindow.show()
    app.exec()
