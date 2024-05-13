/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_mmpersec_value;
    QLabel *label_21;
    QLabel *label_port;
    QLabel *label_18;
    QComboBox *cmb_axis_measuring;
    QPushButton *pushButton_constant_component_write;
    QPushButton *pushButton_dynamic_range_write;
    QLabel *label_34;
    QSpinBox *lineEdit_UL_value;
    QPushButton *pushButton_default_settings_set;
    QLineEdit *lineEdit_thermo_lowTemperature_constant;
    QLineEdit *lineEdit_thermoslope;
    QLabel *label_24;
    QLineEdit *lineEdit_thermointercept;
    QPushButton *pushButton_thermoslope_write;
    QLabel *label_20;
    QPushButton *pushButton_COM_connect;
    QPushButton *pushButton_thermohelp;
    QLabel *label_32;
    QFrame *line_2;
    QLabel *label_26;
    QLabel *label_19;
    QPushButton *pushButton_userCommand;
    QLabel *label_33;
    QPushButton *pushButton_mmpersec_write;
    QLabel *label_17;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_RMS_V_xyz;
    QLineEdit *lineEdit_y_mg;
    QLineEdit *lineEdit_RMS_V_x;
    QLabel *label_10;
    QLineEdit *lineEdit_RMS_V_y;
    QLabel *label_8;
    QLineEdit *lineEdit_RMS_A_xyz;
    QLabel *label_5;
    QLineEdit *lineEdit_current_buffer;
    QLineEdit *lineEdit_RMS_T;
    QLabel *label_7;
    QLineEdit *lineEdit_RMS_A_x;
    QLineEdit *lineEdit_RMS_V_z;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_samples_reserve;
    QLabel *label_2;
    QLabel *label_22;
    QLabel *label_3;
    QLineEdit *lineEdit_x_mg;
    QLineEdit *lineEdit_RMS_A_z;
    QLabel *label_13;
    QLineEdit *lineEdit_PWM_value;
    QLineEdit *lineEdit_z_mg;
    QLabel *label;
    QLineEdit *lineEdit_RMS_A_y;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_6;
    QLabel *label_15;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_DL_write;
    QLabel *label_31;
    QFrame *line_5;
    QFrame *line_8;
    QPushButton *pushButton_thermointercept_write;
    QComboBox *cmb_measuring_parameter;
    QPushButton *pushButton_measuring_parameter_write;
    QPushButton *pushButton_UL_write;
    QPushButton *pushButton_get_config;
    QFrame *line;
    QComboBox *cmb_constant_component;
    QSpinBox *lineEdit_DL_value;
    QComboBox *cmb_dynamic_ranges;
    QLabel *label_23;
    QPushButton *pushButton_thermo_lowTemperature_constant_write;
    QPushButton *pushButton_axis_write;
    QPushButton *pushButton_settings;
    QLabel *label_29;
    QFrame *line_6;
    QComboBox *cmb_axis;
    QFrame *line_3;
    QLabel *label_28;
    QLabel *label_30;
    QLineEdit *lineEdit_constant_value;
    QLabel *label_27;
    QPushButton *pushButton_constant_value_write;
    QPushButton *pushButton_manual;
    QPushButton *pushButton_measuring_axis_write;
    QComboBox *comboBox_port;
    QPushButton *menuClear;
    QLabel *label_25;
    QTextEdit *UART_output;
    QVBoxLayout *verticalLayout_4;
    QComboBox *cmb_graph_selector;
    QHBoxLayout *horizontalLayout;
    QCustomPlot *canvas_A;
    QCustomPlot *canvas_V;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1392, 884);
        MainWindow->setDocumentMode(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_mmpersec_value = new QLineEdit(centralWidget);
        lineEdit_mmpersec_value->setObjectName(QString::fromUtf8("lineEdit_mmpersec_value"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_mmpersec_value->sizePolicy().hasHeightForWidth());
        lineEdit_mmpersec_value->setSizePolicy(sizePolicy);
        lineEdit_mmpersec_value->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_mmpersec_value->setMaxLength(10);
        lineEdit_mmpersec_value->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_mmpersec_value, 14, 2, 1, 1);

        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_21, 22, 0, 1, 5);

        label_port = new QLabel(centralWidget);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_port->sizePolicy().hasHeightForWidth());
        label_port->setSizePolicy(sizePolicy1);
        label_port->setMaximumSize(QSize(16777215, 16777215));
        label_port->setFont(font);
        label_port->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_port, 0, 0, 1, 1);

        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_18, 13, 0, 1, 5);

        cmb_axis_measuring = new QComboBox(centralWidget);
        cmb_axis_measuring->addItem(QString());
        cmb_axis_measuring->addItem(QString());
        cmb_axis_measuring->addItem(QString());
        cmb_axis_measuring->addItem(QString());
        cmb_axis_measuring->setObjectName(QString::fromUtf8("cmb_axis_measuring"));
        sizePolicy.setHeightForWidth(cmb_axis_measuring->sizePolicy().hasHeightForWidth());
        cmb_axis_measuring->setSizePolicy(sizePolicy);
        cmb_axis_measuring->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(cmb_axis_measuring, 11, 2, 1, 1);

        pushButton_constant_component_write = new QPushButton(centralWidget);
        pushButton_constant_component_write->setObjectName(QString::fromUtf8("pushButton_constant_component_write"));
        sizePolicy.setHeightForWidth(pushButton_constant_component_write->sizePolicy().hasHeightForWidth());
        pushButton_constant_component_write->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_constant_component_write, 24, 3, 1, 2);

        pushButton_dynamic_range_write = new QPushButton(centralWidget);
        pushButton_dynamic_range_write->setObjectName(QString::fromUtf8("pushButton_dynamic_range_write"));
        pushButton_dynamic_range_write->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_dynamic_range_write->sizePolicy().hasHeightForWidth());
        pushButton_dynamic_range_write->setSizePolicy(sizePolicy);
        pushButton_dynamic_range_write->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(pushButton_dynamic_range_write, 15, 3, 1, 2);

        label_34 = new QLabel(centralWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout->addWidget(label_34, 27, 0, 1, 2);

        lineEdit_UL_value = new QSpinBox(centralWidget);
        lineEdit_UL_value->setObjectName(QString::fromUtf8("lineEdit_UL_value"));
        lineEdit_UL_value->setEnabled(true);
        lineEdit_UL_value->setAlignment(Qt::AlignCenter);
        lineEdit_UL_value->setMaximum(9999);
        lineEdit_UL_value->setValue(0);

        gridLayout->addWidget(lineEdit_UL_value, 9, 2, 1, 1);

        pushButton_default_settings_set = new QPushButton(centralWidget);
        pushButton_default_settings_set->setObjectName(QString::fromUtf8("pushButton_default_settings_set"));
        pushButton_default_settings_set->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_default_settings_set->sizePolicy().hasHeightForWidth());
        pushButton_default_settings_set->setSizePolicy(sizePolicy);
        pushButton_default_settings_set->setMinimumSize(QSize(0, 20));
        pushButton_default_settings_set->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border: 1px solid gray;\n"
"  background-color:rgba(122, 0, 0, 20);\n"
"  border-radius:1px;\n"
"} \n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgba(255, 0, 0, 30);\n"
"   border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(pushButton_default_settings_set, 1, 3, 1, 2);

        lineEdit_thermo_lowTemperature_constant = new QLineEdit(centralWidget);
        lineEdit_thermo_lowTemperature_constant->setObjectName(QString::fromUtf8("lineEdit_thermo_lowTemperature_constant"));
        lineEdit_thermo_lowTemperature_constant->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEdit_thermo_lowTemperature_constant->sizePolicy().hasHeightForWidth());
        lineEdit_thermo_lowTemperature_constant->setSizePolicy(sizePolicy);
        lineEdit_thermo_lowTemperature_constant->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_thermo_lowTemperature_constant->setMaxLength(10);
        lineEdit_thermo_lowTemperature_constant->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_thermo_lowTemperature_constant, 20, 2, 1, 1);

        lineEdit_thermoslope = new QLineEdit(centralWidget);
        lineEdit_thermoslope->setObjectName(QString::fromUtf8("lineEdit_thermoslope"));
        lineEdit_thermoslope->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEdit_thermoslope->sizePolicy().hasHeightForWidth());
        lineEdit_thermoslope->setSizePolicy(sizePolicy);
        lineEdit_thermoslope->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_thermoslope->setMaxLength(10);
        lineEdit_thermoslope->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_thermoslope, 18, 2, 1, 1);

        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout->addWidget(label_24, 9, 0, 1, 2);

        lineEdit_thermointercept = new QLineEdit(centralWidget);
        lineEdit_thermointercept->setObjectName(QString::fromUtf8("lineEdit_thermointercept"));
        lineEdit_thermointercept->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEdit_thermointercept->sizePolicy().hasHeightForWidth());
        lineEdit_thermointercept->setSizePolicy(sizePolicy);
        lineEdit_thermointercept->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_thermointercept->setMaxLength(10);
        lineEdit_thermointercept->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_thermointercept, 19, 2, 1, 1);

        pushButton_thermoslope_write = new QPushButton(centralWidget);
        pushButton_thermoslope_write->setObjectName(QString::fromUtf8("pushButton_thermoslope_write"));
        pushButton_thermoslope_write->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_thermoslope_write->sizePolicy().hasHeightForWidth());
        pushButton_thermoslope_write->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_thermoslope_write, 18, 3, 1, 2);

        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_20, 26, 0, 1, 5);

        pushButton_COM_connect = new QPushButton(centralWidget);
        pushButton_COM_connect->setObjectName(QString::fromUtf8("pushButton_COM_connect"));
        sizePolicy.setHeightForWidth(pushButton_COM_connect->sizePolicy().hasHeightForWidth());
        pushButton_COM_connect->setSizePolicy(sizePolicy);
        pushButton_COM_connect->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(pushButton_COM_connect, 0, 3, 1, 2);

        pushButton_thermohelp = new QPushButton(centralWidget);
        pushButton_thermohelp->setObjectName(QString::fromUtf8("pushButton_thermohelp"));

        gridLayout->addWidget(pushButton_thermohelp, 30, 7, 1, 1);

        label_32 = new QLabel(centralWidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout->addWidget(label_32, 23, 0, 1, 2);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 25, 0, 1, 5);

        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout->addWidget(label_26, 11, 0, 1, 2);

        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_19, 17, 0, 1, 5);

        pushButton_userCommand = new QPushButton(centralWidget);
        pushButton_userCommand->setObjectName(QString::fromUtf8("pushButton_userCommand"));
        sizePolicy.setHeightForWidth(pushButton_userCommand->sizePolicy().hasHeightForWidth());
        pushButton_userCommand->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_userCommand, 1, 0, 1, 2);

        label_33 = new QLabel(centralWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout->addWidget(label_33, 24, 0, 1, 2);

        pushButton_mmpersec_write = new QPushButton(centralWidget);
        pushButton_mmpersec_write->setObjectName(QString::fromUtf8("pushButton_mmpersec_write"));
        pushButton_mmpersec_write->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_mmpersec_write->sizePolicy().hasHeightForWidth());
        pushButton_mmpersec_write->setSizePolicy(sizePolicy);
        pushButton_mmpersec_write->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(pushButton_mmpersec_write, 14, 3, 1, 2);

        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_17, 7, 0, 1, 5);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        lineEdit_RMS_V_xyz = new QLineEdit(centralWidget);
        lineEdit_RMS_V_xyz->setObjectName(QString::fromUtf8("lineEdit_RMS_V_xyz"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_V_xyz->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_V_xyz->setSizePolicy(sizePolicy);
        lineEdit_RMS_V_xyz->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_RMS_V_xyz, 10, 2, 1, 1);

        lineEdit_y_mg = new QLineEdit(centralWidget);
        lineEdit_y_mg->setObjectName(QString::fromUtf8("lineEdit_y_mg"));
        sizePolicy.setHeightForWidth(lineEdit_y_mg->sizePolicy().hasHeightForWidth());
        lineEdit_y_mg->setSizePolicy(sizePolicy);
        lineEdit_y_mg->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_y_mg->setAlignment(Qt::AlignCenter);
        lineEdit_y_mg->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_y_mg, 1, 2, 1, 1);

        lineEdit_RMS_V_x = new QLineEdit(centralWidget);
        lineEdit_RMS_V_x->setObjectName(QString::fromUtf8("lineEdit_RMS_V_x"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_V_x->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_V_x->setSizePolicy(sizePolicy);
        lineEdit_RMS_V_x->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_RMS_V_x->setAlignment(Qt::AlignCenter);
        lineEdit_RMS_V_x->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_RMS_V_x, 7, 2, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font1;
        font1.setPointSize(10);
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 3, 2, 1, 1);

        lineEdit_RMS_V_y = new QLineEdit(centralWidget);
        lineEdit_RMS_V_y->setObjectName(QString::fromUtf8("lineEdit_RMS_V_y"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_V_y->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_V_y->setSizePolicy(sizePolicy);
        lineEdit_RMS_V_y->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_RMS_V_y, 8, 2, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 2, 1, 1);

        lineEdit_RMS_A_xyz = new QLineEdit(centralWidget);
        lineEdit_RMS_A_xyz->setObjectName(QString::fromUtf8("lineEdit_RMS_A_xyz"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_A_xyz->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_A_xyz->setSizePolicy(sizePolicy);
        lineEdit_RMS_A_xyz->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_RMS_A_xyz, 10, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 3, 3, 1, 1);

        lineEdit_current_buffer = new QLineEdit(centralWidget);
        lineEdit_current_buffer->setObjectName(QString::fromUtf8("lineEdit_current_buffer"));
        sizePolicy.setHeightForWidth(lineEdit_current_buffer->sizePolicy().hasHeightForWidth());
        lineEdit_current_buffer->setSizePolicy(sizePolicy);
        lineEdit_current_buffer->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_current_buffer, 4, 1, 1, 1);

        lineEdit_RMS_T = new QLineEdit(centralWidget);
        lineEdit_RMS_T->setObjectName(QString::fromUtf8("lineEdit_RMS_T"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_T->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_T->setSizePolicy(sizePolicy);
        lineEdit_RMS_T->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_RMS_T->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_RMS_T, 4, 3, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 0, 1, 1, 1);

        lineEdit_RMS_A_x = new QLineEdit(centralWidget);
        lineEdit_RMS_A_x->setObjectName(QString::fromUtf8("lineEdit_RMS_A_x"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_A_x->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_A_x->setSizePolicy(sizePolicy);
        lineEdit_RMS_A_x->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_RMS_A_x->setAlignment(Qt::AlignCenter);
        lineEdit_RMS_A_x->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_RMS_A_x, 7, 1, 1, 1);

        lineEdit_RMS_V_z = new QLineEdit(centralWidget);
        lineEdit_RMS_V_z->setObjectName(QString::fromUtf8("lineEdit_RMS_V_z"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_V_z->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_V_z->setSizePolicy(sizePolicy);
        lineEdit_RMS_V_z->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_RMS_V_z, 9, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 11, 0, 1, 1);

        lineEdit_samples_reserve = new QLineEdit(centralWidget);
        lineEdit_samples_reserve->setObjectName(QString::fromUtf8("lineEdit_samples_reserve"));
        sizePolicy.setHeightForWidth(lineEdit_samples_reserve->sizePolicy().hasHeightForWidth());
        lineEdit_samples_reserve->setSizePolicy(sizePolicy);
        lineEdit_samples_reserve->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_samples_reserve, 4, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 6, 2, 1, 1);

        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_22, 6, 3, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 7, 0, 1, 1);

        lineEdit_x_mg = new QLineEdit(centralWidget);
        lineEdit_x_mg->setObjectName(QString::fromUtf8("lineEdit_x_mg"));
        sizePolicy.setHeightForWidth(lineEdit_x_mg->sizePolicy().hasHeightForWidth());
        lineEdit_x_mg->setSizePolicy(sizePolicy);
        lineEdit_x_mg->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_x_mg->setAlignment(Qt::AlignCenter);
        lineEdit_x_mg->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_x_mg, 1, 1, 1, 1);

        lineEdit_RMS_A_z = new QLineEdit(centralWidget);
        lineEdit_RMS_A_z->setObjectName(QString::fromUtf8("lineEdit_RMS_A_z"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_A_z->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_A_z->setSizePolicy(sizePolicy);
        lineEdit_RMS_A_z->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_RMS_A_z, 9, 1, 1, 1);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        lineEdit_PWM_value = new QLineEdit(centralWidget);
        lineEdit_PWM_value->setObjectName(QString::fromUtf8("lineEdit_PWM_value"));
        lineEdit_PWM_value->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_PWM_value, 7, 3, 1, 1);

        lineEdit_z_mg = new QLineEdit(centralWidget);
        lineEdit_z_mg->setObjectName(QString::fromUtf8("lineEdit_z_mg"));
        sizePolicy.setHeightForWidth(lineEdit_z_mg->sizePolicy().hasHeightForWidth());
        lineEdit_z_mg->setSizePolicy(sizePolicy);
        lineEdit_z_mg->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_z_mg->setAlignment(Qt::AlignCenter);
        lineEdit_z_mg->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_z_mg, 1, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 6, 1, 1, 1);

        lineEdit_RMS_A_y = new QLineEdit(centralWidget);
        lineEdit_RMS_A_y->setObjectName(QString::fromUtf8("lineEdit_RMS_A_y"));
        sizePolicy.setHeightForWidth(lineEdit_RMS_A_y->sizePolicy().hasHeightForWidth());
        lineEdit_RMS_A_y->setSizePolicy(sizePolicy);
        lineEdit_RMS_A_y->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_RMS_A_y, 8, 1, 1, 1);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);

        gridLayout_2->addWidget(label_16, 10, 0, 1, 1);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        gridLayout_2->addWidget(label_14, 8, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);

        gridLayout_2->addWidget(label_15, 9, 0, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 3, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 3, 1, 1, 1);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 5, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 29, 0, 1, 5);

        pushButton_DL_write = new QPushButton(centralWidget);
        pushButton_DL_write->setObjectName(QString::fromUtf8("pushButton_DL_write"));
        pushButton_DL_write->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_DL_write->sizePolicy().hasHeightForWidth());
        pushButton_DL_write->setSizePolicy(sizePolicy);
        pushButton_DL_write->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(pushButton_DL_write, 8, 3, 1, 2);

        label_31 = new QLabel(centralWidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout->addWidget(label_31, 20, 0, 1, 2);

        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 4, 0, 3, 5);

        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 21, 0, 1, 5);

        pushButton_thermointercept_write = new QPushButton(centralWidget);
        pushButton_thermointercept_write->setObjectName(QString::fromUtf8("pushButton_thermointercept_write"));
        pushButton_thermointercept_write->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_thermointercept_write->sizePolicy().hasHeightForWidth());
        pushButton_thermointercept_write->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_thermointercept_write, 19, 3, 1, 2);

        cmb_measuring_parameter = new QComboBox(centralWidget);
        cmb_measuring_parameter->addItem(QString());
        cmb_measuring_parameter->addItem(QString());
        cmb_measuring_parameter->setObjectName(QString::fromUtf8("cmb_measuring_parameter"));

        gridLayout->addWidget(cmb_measuring_parameter, 10, 2, 1, 1);

        pushButton_measuring_parameter_write = new QPushButton(centralWidget);
        pushButton_measuring_parameter_write->setObjectName(QString::fromUtf8("pushButton_measuring_parameter_write"));
        sizePolicy.setHeightForWidth(pushButton_measuring_parameter_write->sizePolicy().hasHeightForWidth());
        pushButton_measuring_parameter_write->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measuring_parameter_write, 10, 3, 1, 2);

        pushButton_UL_write = new QPushButton(centralWidget);
        pushButton_UL_write->setObjectName(QString::fromUtf8("pushButton_UL_write"));
        pushButton_UL_write->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_UL_write->sizePolicy().hasHeightForWidth());
        pushButton_UL_write->setSizePolicy(sizePolicy);
        pushButton_UL_write->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(pushButton_UL_write, 9, 3, 1, 2);

        pushButton_get_config = new QPushButton(centralWidget);
        pushButton_get_config->setObjectName(QString::fromUtf8("pushButton_get_config"));

        gridLayout->addWidget(pushButton_get_config, 1, 2, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 16, 0, 1, 5);

        cmb_constant_component = new QComboBox(centralWidget);
        cmb_constant_component->addItem(QString());
        cmb_constant_component->addItem(QString());
        cmb_constant_component->setObjectName(QString::fromUtf8("cmb_constant_component"));
        sizePolicy.setHeightForWidth(cmb_constant_component->sizePolicy().hasHeightForWidth());
        cmb_constant_component->setSizePolicy(sizePolicy);
        cmb_constant_component->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(cmb_constant_component, 24, 2, 1, 1);

        lineEdit_DL_value = new QSpinBox(centralWidget);
        lineEdit_DL_value->setObjectName(QString::fromUtf8("lineEdit_DL_value"));
        lineEdit_DL_value->setEnabled(true);
        lineEdit_DL_value->setAlignment(Qt::AlignCenter);
        lineEdit_DL_value->setMaximum(9999);
        lineEdit_DL_value->setValue(0);

        gridLayout->addWidget(lineEdit_DL_value, 8, 2, 1, 1);

        cmb_dynamic_ranges = new QComboBox(centralWidget);
        cmb_dynamic_ranges->addItem(QString());
        cmb_dynamic_ranges->addItem(QString());
        cmb_dynamic_ranges->addItem(QString());
        cmb_dynamic_ranges->addItem(QString());
        cmb_dynamic_ranges->setObjectName(QString::fromUtf8("cmb_dynamic_ranges"));
        cmb_dynamic_ranges->setEnabled(true);
        sizePolicy.setHeightForWidth(cmb_dynamic_ranges->sizePolicy().hasHeightForWidth());
        cmb_dynamic_ranges->setSizePolicy(sizePolicy);
        cmb_dynamic_ranges->setMaximumSize(QSize(16777215, 16777215));
        cmb_dynamic_ranges->setLayoutDirection(Qt::LeftToRight);
        cmb_dynamic_ranges->setInsertPolicy(QComboBox::InsertAtBottom);
        cmb_dynamic_ranges->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(cmb_dynamic_ranges, 15, 2, 1, 1);

        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout->addWidget(label_23, 8, 0, 1, 2);

        pushButton_thermo_lowTemperature_constant_write = new QPushButton(centralWidget);
        pushButton_thermo_lowTemperature_constant_write->setObjectName(QString::fromUtf8("pushButton_thermo_lowTemperature_constant_write"));
        pushButton_thermo_lowTemperature_constant_write->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_thermo_lowTemperature_constant_write->sizePolicy().hasHeightForWidth());
        pushButton_thermo_lowTemperature_constant_write->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_thermo_lowTemperature_constant_write, 20, 3, 1, 2);

        pushButton_axis_write = new QPushButton(centralWidget);
        pushButton_axis_write->setObjectName(QString::fromUtf8("pushButton_axis_write"));
        sizePolicy.setHeightForWidth(pushButton_axis_write->sizePolicy().hasHeightForWidth());
        pushButton_axis_write->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_axis_write, 27, 3, 1, 2);

        pushButton_settings = new QPushButton(centralWidget);
        pushButton_settings->setObjectName(QString::fromUtf8("pushButton_settings"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_settings->sizePolicy().hasHeightForWidth());
        pushButton_settings->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_settings, 30, 9, 1, 1);

        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout->addWidget(label_29, 18, 0, 1, 2);

        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 12, 0, 1, 5);

        cmb_axis = new QComboBox(centralWidget);
        cmb_axis->addItem(QString());
        cmb_axis->addItem(QString());
        cmb_axis->addItem(QString());
        cmb_axis->addItem(QString());
        cmb_axis->setObjectName(QString::fromUtf8("cmb_axis"));
        sizePolicy.setHeightForWidth(cmb_axis->sizePolicy().hasHeightForWidth());
        cmb_axis->setSizePolicy(sizePolicy);
        cmb_axis->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(cmb_axis, 27, 2, 1, 1);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 28, 0, 1, 5);

        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout->addWidget(label_28, 15, 0, 1, 2);

        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout->addWidget(label_30, 19, 0, 1, 2);

        lineEdit_constant_value = new QLineEdit(centralWidget);
        lineEdit_constant_value->setObjectName(QString::fromUtf8("lineEdit_constant_value"));
        lineEdit_constant_value->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEdit_constant_value->sizePolicy().hasHeightForWidth());
        lineEdit_constant_value->setSizePolicy(sizePolicy);
        lineEdit_constant_value->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_constant_value->setMaxLength(10);
        lineEdit_constant_value->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_constant_value, 23, 2, 1, 1);

        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout->addWidget(label_27, 14, 0, 1, 2);

        pushButton_constant_value_write = new QPushButton(centralWidget);
        pushButton_constant_value_write->setObjectName(QString::fromUtf8("pushButton_constant_value_write"));
        pushButton_constant_value_write->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_constant_value_write->sizePolicy().hasHeightForWidth());
        pushButton_constant_value_write->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_constant_value_write, 23, 3, 1, 2);

        pushButton_manual = new QPushButton(centralWidget);
        pushButton_manual->setObjectName(QString::fromUtf8("pushButton_manual"));
        sizePolicy2.setHeightForWidth(pushButton_manual->sizePolicy().hasHeightForWidth());
        pushButton_manual->setSizePolicy(sizePolicy2);
        pushButton_manual->setMinimumSize(QSize(166, 21));
        pushButton_manual->setMaximumSize(QSize(166, 21));
        pushButton_manual->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border: 1px solid gray;\n"
"  background-color:rgba(0, 0, 255, 20);\n"
"  border-radius: 10px;\n"
"} \n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgba(0, 0, 255, 30);\n"
"   border: 1px solid gray;\n"
"}"));

        gridLayout->addWidget(pushButton_manual, 30, 6, 1, 1);

        pushButton_measuring_axis_write = new QPushButton(centralWidget);
        pushButton_measuring_axis_write->setObjectName(QString::fromUtf8("pushButton_measuring_axis_write"));
        sizePolicy.setHeightForWidth(pushButton_measuring_axis_write->sizePolicy().hasHeightForWidth());
        pushButton_measuring_axis_write->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measuring_axis_write, 11, 3, 1, 2);

        comboBox_port = new QComboBox(centralWidget);
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));
        comboBox_port->setMinimumSize(QSize(240, 0));
        comboBox_port->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(comboBox_port, 0, 1, 1, 2);

        menuClear = new QPushButton(centralWidget);
        menuClear->setObjectName(QString::fromUtf8("menuClear"));
        sizePolicy2.setHeightForWidth(menuClear->sizePolicy().hasHeightForWidth());
        menuClear->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(menuClear, 30, 8, 1, 1);

        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout->addWidget(label_25, 10, 0, 1, 2);

        UART_output = new QTextEdit(centralWidget);
        UART_output->setObjectName(QString::fromUtf8("UART_output"));
        sizePolicy1.setHeightForWidth(UART_output->sizePolicy().hasHeightForWidth());
        UART_output->setSizePolicy(sizePolicy1);
        UART_output->setMinimumSize(QSize(0, 0));
        UART_output->setReadOnly(true);

        gridLayout->addWidget(UART_output, 29, 5, 1, 5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cmb_graph_selector = new QComboBox(centralWidget);
        cmb_graph_selector->addItem(QString());
        cmb_graph_selector->addItem(QString());
        cmb_graph_selector->addItem(QString());
        cmb_graph_selector->setObjectName(QString::fromUtf8("cmb_graph_selector"));
        cmb_graph_selector->setMaximumSize(QSize(120, 16777215));
        cmb_graph_selector->setLayoutDirection(Qt::RightToLeft);
        cmb_graph_selector->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout_4->addWidget(cmb_graph_selector);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        canvas_A = new QCustomPlot(centralWidget);
        canvas_A->setObjectName(QString::fromUtf8("canvas_A"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(canvas_A->sizePolicy().hasHeightForWidth());
        canvas_A->setSizePolicy(sizePolicy3);
        canvas_A->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(canvas_A);

        canvas_V = new QCustomPlot(centralWidget);
        canvas_V->setObjectName(QString::fromUtf8("canvas_V"));
        sizePolicy3.setHeightForWidth(canvas_V->sizePolicy().hasHeightForWidth());
        canvas_V->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(canvas_V);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 0, 6, 28, 4);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        cmb_axis_measuring->setCurrentIndex(-1);
        cmb_measuring_parameter->setCurrentIndex(-1);
        cmb_constant_component->setCurrentIndex(-1);
        cmb_dynamic_ranges->setCurrentIndex(-1);
        cmb_axis->setCurrentIndex(-1);
        cmb_graph_selector->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\222\320\22417-\320\241\320\265\321\200\320\262\320\270\321\201", nullptr));
        lineEdit_mmpersec_value->setText(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\273\320\260\320\264\320\276\321\207\320\275\321\213\320\265 \321\204\321\203\320\275\320\272\321\206\320\270\320\270", nullptr));
        label_port->setText(QCoreApplication::translate("MainWindow", "COM-\320\237\320\276\321\200\321\202", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\264\320\260\321\202\321\207\320\270\320\272\320\260", nullptr));
        cmb_axis_measuring->setItemText(0, QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\321\203\320\273\321\214", nullptr));
        cmb_axis_measuring->setItemText(1, QCoreApplication::translate("MainWindow", "X", nullptr));
        cmb_axis_measuring->setItemText(2, QCoreApplication::translate("MainWindow", "Y", nullptr));
        cmb_axis_measuring->setItemText(3, QCoreApplication::translate("MainWindow", "Z", nullptr));

        pushButton_constant_component_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_dynamic_range_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\270\320\261\321\200\321\203\320\265\320\274\320\260\321\217 \320\276\321\201\321\214", nullptr));
        pushButton_default_settings_set->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\264\320\276 \320\267\320\260\320\262\320\276\320\264\321\201\320\272\320\270\321\205", nullptr));
        lineEdit_thermo_lowTemperature_constant->setText(QString());
        lineEdit_thermoslope->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\205\320\275\320\270\320\271 \320\277\321\200\320\265\320\264\320\265\320\273\320\260 \320\242\320\237 (\320\272\320\276\320\264)", nullptr));
        lineEdit_thermointercept->setText(QString());
        pushButton_thermoslope_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\270\320\261\321\200\320\276\320\262\320\272\320\260 \320\264\320\260\321\202\321\207\320\270\320\272\320\260", nullptr));
        pushButton_COM_connect->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        pushButton_thermohelp->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260 \320\277\320\276 \321\202\320\265\321\200\320\274\320\276\320\272\320\276\320\274\320\277\320\265\320\275\321\201\320\260\321\206\320\270\320\270", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\276\321\217\320\275\320\275\320\260\321\217 \320\262\320\270\320\261\321\200\320\276\321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\321\200\321\217\320\265\320\274\320\260\321\217 \320\276\321\201\321\214 \320\264\320\273\321\217 \320\242\320\237", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\202\320\265\321\200\320\274\320\276\320\272\320\276\320\274\320\277\320\265\320\275\321\201\320\260\321\206\320\270\320\270", nullptr));
        pushButton_userCommand->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\260\321\217 \320\272\320\276\320\274\320\260\320\275\320\264\320\260...", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\277\320\276\321\201\321\202\320\276\321\217\320\275\320\275\320\276\320\271 \321\201\320\276\321\201\321\202\320\260\320\262\320\273\321\217\321\216\321\211\320\265\320\271", nullptr));
        pushButton_mmpersec_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\202\320\276\320\272\320\276\320\262\320\276\320\271 \320\277\320\265\321\202\320\273\320\270", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\260\321\201 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "y (mg)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "t (\302\260C)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "x (mg)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\320\277\320\276\320\274\320\276\320\263\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "V (\320\274\320\274/\321\201)", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\250\320\230\320\234 \320\275\320\260 \320\242\320\237", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 X", nullptr));
        label_13->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\220 (\320\274/\321\201\302\262)", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 XYZ", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 Y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\264\320\260\321\202\321\207\320\270\320\272\320\260", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 Z", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "z (mg)", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \320\261\321\203\321\204\320\265\321\200", nullptr));
        label_12->setText(QString());
        pushButton_DL_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\201\321\202\320\260\320\275\321\202\320\260 (\320\277\321\200\320\270 t < -50 \302\260C)", nullptr));
        pushButton_thermointercept_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        cmb_measuring_parameter->setItemText(0, QCoreApplication::translate("MainWindow", "\320\243\321\201\320\272\320\276\321\200\320\265\320\275\320\270\320\265", nullptr));
        cmb_measuring_parameter->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));

        pushButton_measuring_parameter_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_UL_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_get_config->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\216", nullptr));
        cmb_constant_component->setItemText(0, QCoreApplication::translate("MainWindow", "\320\235\320\265 \320\276\321\202\320\275\320\270\320\274\320\260\321\202\321\214", nullptr));
        cmb_constant_component->setItemText(1, QCoreApplication::translate("MainWindow", "\320\236\321\202\320\275\320\270\320\274\320\260\321\202\321\214", nullptr));

        cmb_dynamic_ranges->setItemText(0, QCoreApplication::translate("MainWindow", "2g", nullptr));
        cmb_dynamic_ranges->setItemText(1, QCoreApplication::translate("MainWindow", "4g", nullptr));
        cmb_dynamic_ranges->setItemText(2, QCoreApplication::translate("MainWindow", "8g", nullptr));
        cmb_dynamic_ranges->setItemText(3, QCoreApplication::translate("MainWindow", "16g", nullptr));

        label_23->setText(QCoreApplication::translate("MainWindow", "\320\235\320\270\320\266\320\275\320\270\320\271 \320\277\321\200\320\265\320\264\320\265\320\273 \320\242\320\237 (\320\272\320\276\320\264)", nullptr));
        pushButton_thermo_lowTemperature_constant_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_axis_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_settings->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\201\320\265\321\200\320\262\320\270\321\201\320\260...", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\272\320\273\320\276\320\275 \321\202\320\265\321\200\320\274\320\276\320\277\321\200\321\217\320\274\320\276\320\271", nullptr));
        cmb_axis->setItemText(0, QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\321\203\320\273\321\214", nullptr));
        cmb_axis->setItemText(1, QCoreApplication::translate("MainWindow", "X", nullptr));
        cmb_axis->setItemText(2, QCoreApplication::translate("MainWindow", "Y", nullptr));
        cmb_axis->setItemText(3, QCoreApplication::translate("MainWindow", "Z", nullptr));

        label_28->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\320\275\320\260\320\274\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \321\202\320\265\321\200\320\274\320\276\320\277\321\200\321\217\320\274\320\276\320\271", nullptr));
        lineEdit_constant_value->setText(QString());
        label_27->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201. \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\270\320\267\320\274\320\265\321\200\321\217\320\265\320\274\320\276\320\263\320\276 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260", nullptr));
        pushButton_constant_value_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_manual->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\217 \320\277\320\276 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\265 \320\222\320\22417", nullptr));
        pushButton_measuring_axis_write->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        menuClear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\321\200\321\217\320\265\320\274\321\213\320\271 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200 \320\264\320\273\321\217 \320\242\320\237", nullptr));
        cmb_graph_selector->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222\320\270\320\261\321\200\320\276\321\203\321\201\320\272\320\276\321\200\320\265\320\275\320\270\320\265", nullptr));
        cmb_graph_selector->setItemText(1, QCoreApplication::translate("MainWindow", "\320\222\320\270\320\261\321\200\320\276\321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        cmb_graph_selector->setItemText(2, QCoreApplication::translate("MainWindow", "\320\236\320\261\320\260", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
