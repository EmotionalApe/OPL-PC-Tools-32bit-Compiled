/********************************************************************************
** Form generated from reading UI file 'GameConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECONFIGWIDGET_H
#define UI_GAMECONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameConfigWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *mp_layout_4;
    QLineEdit *mp_edit_elf;
    QHBoxLayout *mp_layout_5;
    QLabel *mp_label_opl_version;
    QComboBox *mp_combo_opl_version;
    QSpacerItem *mp_spacer_4;
    QLabel *mp_label_game_id;
    QPushButton *mp_btn_id_from_game;
    QLineEdit *mp_edit_game_id;
    QLabel *mp_label_elf;
    QFrame *mp_line;
    QHBoxLayout *mp_layout_2;
    QGroupBox *mp_groupbox_modes;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *mp_checkbox_mode_1;
    QCheckBox *mp_checkbox_mode_2;
    QCheckBox *mp_checkbox_mode_3;
    QCheckBox *mp_checkbox_mode_4;
    QCheckBox *mp_checkbox_mode_5;
    QCheckBox *mp_checkbox_mode_6;
    QCheckBox *mp_checkbox_mode_7;
    QCheckBox *mp_checkbox_mode_8;
    QVBoxLayout *mp_layout_3;
    QGroupBox *mp_groupbox_vmc0;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *mp_combo_vmc0;
    QPushButton *mp_btn_create_vmc0;
    QGroupBox *mp_groupbox_vmc1;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mp_combo_vmc1;
    QPushButton *mp_btn_create_vmc1;
    QSpacerItem *mp_spacer_2;
    QGroupBox *mp_groupbox_gsm;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *mp_layout_6;
    QRadioButton *mp_radio_disable_gsm;
    QRadioButton *mp_radio_enable_gsm;
    QRadioButton *mp_radio_use_global_gsm;
    QSpacerItem *mp_spacer_5;
    QGroupBox *mp_groupbox_gsm_settings;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *mp_layout_7;
    QLabel *mp_label_video_mode;
    QComboBox *mp_combo_video_mode;
    QCheckBox *mp_checkbox_skip_fmv;
    QHBoxLayout *mp_layout_8;
    QLabel *mp_label_hpos;
    QSpinBox *mp_spinbox_hpos;
    QLabel *mp_label_vpos;
    QSpinBox *mp_spinbox_vpos;
    QCheckBox *mp_checkbox_emulate_field_flipping;
    QSpacerItem *mp_spacer;
    QHBoxLayout *mp_layout;
    QSpacerItem *mp_spacer_3;
    QPushButton *mp_btn_delete;
    QPushButton *mp_btn_clear;
    QPushButton *mp_btn_save;

    void setupUi(QWidget *GameConfigWidget)
    {
        if (GameConfigWidget->objectName().isEmpty())
            GameConfigWidget->setObjectName(QString::fromUtf8("GameConfigWidget"));
        GameConfigWidget->resize(935, 655);
        GameConfigWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(GameConfigWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mp_layout_4 = new QGridLayout();
        mp_layout_4->setObjectName(QString::fromUtf8("mp_layout_4"));
        mp_edit_elf = new QLineEdit(GameConfigWidget);
        mp_edit_elf->setObjectName(QString::fromUtf8("mp_edit_elf"));
        mp_edit_elf->setClearButtonEnabled(true);

        mp_layout_4->addWidget(mp_edit_elf, 4, 1, 1, 1);

        mp_layout_5 = new QHBoxLayout();
        mp_layout_5->setObjectName(QString::fromUtf8("mp_layout_5"));
        mp_label_opl_version = new QLabel(GameConfigWidget);
        mp_label_opl_version->setObjectName(QString::fromUtf8("mp_label_opl_version"));

        mp_layout_5->addWidget(mp_label_opl_version);

        mp_combo_opl_version = new QComboBox(GameConfigWidget);
        mp_combo_opl_version->setObjectName(QString::fromUtf8("mp_combo_opl_version"));

        mp_layout_5->addWidget(mp_combo_opl_version);

        mp_spacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mp_layout_5->addItem(mp_spacer_4);


        mp_layout_4->addLayout(mp_layout_5, 0, 0, 1, 3);

        mp_label_game_id = new QLabel(GameConfigWidget);
        mp_label_game_id->setObjectName(QString::fromUtf8("mp_label_game_id"));

        mp_layout_4->addWidget(mp_label_game_id, 3, 0, 1, 1);

        mp_btn_id_from_game = new QPushButton(GameConfigWidget);
        mp_btn_id_from_game->setObjectName(QString::fromUtf8("mp_btn_id_from_game"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/restore"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_id_from_game->setIcon(icon);

        mp_layout_4->addWidget(mp_btn_id_from_game, 3, 2, 1, 1);

        mp_edit_game_id = new QLineEdit(GameConfigWidget);
        mp_edit_game_id->setObjectName(QString::fromUtf8("mp_edit_game_id"));
        mp_edit_game_id->setClearButtonEnabled(true);

        mp_layout_4->addWidget(mp_edit_game_id, 3, 1, 1, 1);

        mp_label_elf = new QLabel(GameConfigWidget);
        mp_label_elf->setObjectName(QString::fromUtf8("mp_label_elf"));

        mp_layout_4->addWidget(mp_label_elf, 4, 0, 1, 1);

        mp_line = new QFrame(GameConfigWidget);
        mp_line->setObjectName(QString::fromUtf8("mp_line"));
        mp_line->setFrameShape(QFrame::HLine);
        mp_line->setFrameShadow(QFrame::Sunken);

        mp_layout_4->addWidget(mp_line, 1, 0, 1, 3);


        verticalLayout->addLayout(mp_layout_4);

        mp_layout_2 = new QHBoxLayout();
        mp_layout_2->setObjectName(QString::fromUtf8("mp_layout_2"));
        mp_groupbox_modes = new QGroupBox(GameConfigWidget);
        mp_groupbox_modes->setObjectName(QString::fromUtf8("mp_groupbox_modes"));
        verticalLayout_3 = new QVBoxLayout(mp_groupbox_modes);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mp_checkbox_mode_1 = new QCheckBox(mp_groupbox_modes);
        mp_checkbox_mode_1->setObjectName(QString::fromUtf8("mp_checkbox_mode_1"));

        verticalLayout_3->addWidget(mp_checkbox_mode_1);

        mp_checkbox_mode_2 = new QCheckBox(mp_groupbox_modes);
        mp_checkbox_mode_2->setObjectName(QString::fromUtf8("mp_checkbox_mode_2"));

        verticalLayout_3->addWidget(mp_checkbox_mode_2);

        mp_checkbox_mode_3 = new QCheckBox(mp_groupbox_modes);
        mp_checkbox_mode_3->setObjectName(QString::fromUtf8("mp_checkbox_mode_3"));

        verticalLayout_3->addWidget(mp_checkbox_mode_3);

        mp_checkbox_mode_4 = new QCheckBox(mp_groupbox_modes);
        mp_checkbox_mode_4->setObjectName(QString::fromUtf8("mp_checkbox_mode_4"));

        verticalLayout_3->addWidget(mp_checkbox_mode_4);

        mp_checkbox_mode_5 = new QCheckBox(mp_groupbox_modes);
        mp_checkbox_mode_5->setObjectName(QString::fromUtf8("mp_checkbox_mode_5"));

        verticalLayout_3->addWidget(mp_checkbox_mode_5);

        mp_checkbox_mode_6 = new QCheckBox(mp_groupbox_modes);
        mp_checkbox_mode_6->setObjectName(QString::fromUtf8("mp_checkbox_mode_6"));

        verticalLayout_3->addWidget(mp_checkbox_mode_6);

        mp_checkbox_mode_7 = new QCheckBox(mp_groupbox_modes);
        mp_checkbox_mode_7->setObjectName(QString::fromUtf8("mp_checkbox_mode_7"));

        verticalLayout_3->addWidget(mp_checkbox_mode_7);

        mp_checkbox_mode_8 = new QCheckBox(mp_groupbox_modes);
        mp_checkbox_mode_8->setObjectName(QString::fromUtf8("mp_checkbox_mode_8"));

        verticalLayout_3->addWidget(mp_checkbox_mode_8);


        mp_layout_2->addWidget(mp_groupbox_modes);

        mp_layout_3 = new QVBoxLayout();
        mp_layout_3->setObjectName(QString::fromUtf8("mp_layout_3"));
        mp_groupbox_vmc0 = new QGroupBox(GameConfigWidget);
        mp_groupbox_vmc0->setObjectName(QString::fromUtf8("mp_groupbox_vmc0"));
        mp_groupbox_vmc0->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(mp_groupbox_vmc0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mp_combo_vmc0 = new QComboBox(mp_groupbox_vmc0);
        mp_combo_vmc0->setObjectName(QString::fromUtf8("mp_combo_vmc0"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_combo_vmc0->sizePolicy().hasHeightForWidth());
        mp_combo_vmc0->setSizePolicy(sizePolicy);
        mp_combo_vmc0->setMinimumSize(QSize(200, 0));
        mp_combo_vmc0->setEditable(true);
        mp_combo_vmc0->setInsertPolicy(QComboBox::InsertAlphabetically);
        mp_combo_vmc0->setDuplicatesEnabled(true);

        horizontalLayout_2->addWidget(mp_combo_vmc0);

        mp_btn_create_vmc0 = new QPushButton(mp_groupbox_vmc0);
        mp_btn_create_vmc0->setObjectName(QString::fromUtf8("mp_btn_create_vmc0"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/add"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_create_vmc0->setIcon(icon1);

        horizontalLayout_2->addWidget(mp_btn_create_vmc0);


        mp_layout_3->addWidget(mp_groupbox_vmc0);

        mp_groupbox_vmc1 = new QGroupBox(GameConfigWidget);
        mp_groupbox_vmc1->setObjectName(QString::fromUtf8("mp_groupbox_vmc1"));
        mp_groupbox_vmc1->setChecked(false);
        horizontalLayout_3 = new QHBoxLayout(mp_groupbox_vmc1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mp_combo_vmc1 = new QComboBox(mp_groupbox_vmc1);
        mp_combo_vmc1->setObjectName(QString::fromUtf8("mp_combo_vmc1"));
        sizePolicy.setHeightForWidth(mp_combo_vmc1->sizePolicy().hasHeightForWidth());
        mp_combo_vmc1->setSizePolicy(sizePolicy);
        mp_combo_vmc1->setMinimumSize(QSize(200, 0));
        mp_combo_vmc1->setEditable(true);
        mp_combo_vmc1->setInsertPolicy(QComboBox::InsertAlphabetically);
        mp_combo_vmc1->setDuplicatesEnabled(true);

        horizontalLayout_3->addWidget(mp_combo_vmc1);

        mp_btn_create_vmc1 = new QPushButton(mp_groupbox_vmc1);
        mp_btn_create_vmc1->setObjectName(QString::fromUtf8("mp_btn_create_vmc1"));
        mp_btn_create_vmc1->setIcon(icon1);

        horizontalLayout_3->addWidget(mp_btn_create_vmc1);


        mp_layout_3->addWidget(mp_groupbox_vmc1);

        mp_spacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mp_layout_3->addItem(mp_spacer_2);


        mp_layout_2->addLayout(mp_layout_3);


        verticalLayout->addLayout(mp_layout_2);

        mp_groupbox_gsm = new QGroupBox(GameConfigWidget);
        mp_groupbox_gsm->setObjectName(QString::fromUtf8("mp_groupbox_gsm"));
        horizontalLayout_6 = new QHBoxLayout(mp_groupbox_gsm);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mp_layout_6 = new QVBoxLayout();
        mp_layout_6->setObjectName(QString::fromUtf8("mp_layout_6"));
        mp_radio_disable_gsm = new QRadioButton(mp_groupbox_gsm);
        mp_radio_disable_gsm->setObjectName(QString::fromUtf8("mp_radio_disable_gsm"));

        mp_layout_6->addWidget(mp_radio_disable_gsm);

        mp_radio_enable_gsm = new QRadioButton(mp_groupbox_gsm);
        mp_radio_enable_gsm->setObjectName(QString::fromUtf8("mp_radio_enable_gsm"));

        mp_layout_6->addWidget(mp_radio_enable_gsm);

        mp_radio_use_global_gsm = new QRadioButton(mp_groupbox_gsm);
        mp_radio_use_global_gsm->setObjectName(QString::fromUtf8("mp_radio_use_global_gsm"));

        mp_layout_6->addWidget(mp_radio_use_global_gsm);

        mp_spacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mp_layout_6->addItem(mp_spacer_5);


        horizontalLayout_6->addLayout(mp_layout_6);

        mp_groupbox_gsm_settings = new QGroupBox(mp_groupbox_gsm);
        mp_groupbox_gsm_settings->setObjectName(QString::fromUtf8("mp_groupbox_gsm_settings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_groupbox_gsm_settings->sizePolicy().hasHeightForWidth());
        mp_groupbox_gsm_settings->setSizePolicy(sizePolicy1);
        mp_groupbox_gsm_settings->setCheckable(false);
        mp_groupbox_gsm_settings->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(mp_groupbox_gsm_settings);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mp_layout_7 = new QHBoxLayout();
        mp_layout_7->setObjectName(QString::fromUtf8("mp_layout_7"));
        mp_label_video_mode = new QLabel(mp_groupbox_gsm_settings);
        mp_label_video_mode->setObjectName(QString::fromUtf8("mp_label_video_mode"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_label_video_mode->sizePolicy().hasHeightForWidth());
        mp_label_video_mode->setSizePolicy(sizePolicy2);

        mp_layout_7->addWidget(mp_label_video_mode);

        mp_combo_video_mode = new QComboBox(mp_groupbox_gsm_settings);
        mp_combo_video_mode->setObjectName(QString::fromUtf8("mp_combo_video_mode"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mp_combo_video_mode->sizePolicy().hasHeightForWidth());
        mp_combo_video_mode->setSizePolicy(sizePolicy3);

        mp_layout_7->addWidget(mp_combo_video_mode);

        mp_checkbox_skip_fmv = new QCheckBox(mp_groupbox_gsm_settings);
        mp_checkbox_skip_fmv->setObjectName(QString::fromUtf8("mp_checkbox_skip_fmv"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mp_checkbox_skip_fmv->sizePolicy().hasHeightForWidth());
        mp_checkbox_skip_fmv->setSizePolicy(sizePolicy4);

        mp_layout_7->addWidget(mp_checkbox_skip_fmv);


        verticalLayout_4->addLayout(mp_layout_7);

        mp_layout_8 = new QHBoxLayout();
        mp_layout_8->setObjectName(QString::fromUtf8("mp_layout_8"));
        mp_label_hpos = new QLabel(mp_groupbox_gsm_settings);
        mp_label_hpos->setObjectName(QString::fromUtf8("mp_label_hpos"));
        sizePolicy2.setHeightForWidth(mp_label_hpos->sizePolicy().hasHeightForWidth());
        mp_label_hpos->setSizePolicy(sizePolicy2);

        mp_layout_8->addWidget(mp_label_hpos);

        mp_spinbox_hpos = new QSpinBox(mp_groupbox_gsm_settings);
        mp_spinbox_hpos->setObjectName(QString::fromUtf8("mp_spinbox_hpos"));
        sizePolicy3.setHeightForWidth(mp_spinbox_hpos->sizePolicy().hasHeightForWidth());
        mp_spinbox_hpos->setSizePolicy(sizePolicy3);
        mp_spinbox_hpos->setMinimum(-2000);
        mp_spinbox_hpos->setMaximum(2000);
        mp_spinbox_hpos->setSingleStep(1);

        mp_layout_8->addWidget(mp_spinbox_hpos);

        mp_label_vpos = new QLabel(mp_groupbox_gsm_settings);
        mp_label_vpos->setObjectName(QString::fromUtf8("mp_label_vpos"));
        sizePolicy2.setHeightForWidth(mp_label_vpos->sizePolicy().hasHeightForWidth());
        mp_label_vpos->setSizePolicy(sizePolicy2);

        mp_layout_8->addWidget(mp_label_vpos);

        mp_spinbox_vpos = new QSpinBox(mp_groupbox_gsm_settings);
        mp_spinbox_vpos->setObjectName(QString::fromUtf8("mp_spinbox_vpos"));
        sizePolicy3.setHeightForWidth(mp_spinbox_vpos->sizePolicy().hasHeightForWidth());
        mp_spinbox_vpos->setSizePolicy(sizePolicy3);
        mp_spinbox_vpos->setMinimum(-2000);
        mp_spinbox_vpos->setMaximum(2000);
        mp_spinbox_vpos->setSingleStep(1);

        mp_layout_8->addWidget(mp_spinbox_vpos);


        verticalLayout_4->addLayout(mp_layout_8);

        mp_checkbox_emulate_field_flipping = new QCheckBox(mp_groupbox_gsm_settings);
        mp_checkbox_emulate_field_flipping->setObjectName(QString::fromUtf8("mp_checkbox_emulate_field_flipping"));

        verticalLayout_4->addWidget(mp_checkbox_emulate_field_flipping);


        horizontalLayout_6->addWidget(mp_groupbox_gsm_settings);


        verticalLayout->addWidget(mp_groupbox_gsm);

        mp_spacer = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(mp_spacer);

        mp_layout = new QHBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_spacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mp_layout->addItem(mp_spacer_3);

        mp_btn_delete = new QPushButton(GameConfigWidget);
        mp_btn_delete->setObjectName(QString::fromUtf8("mp_btn_delete"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/delete"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_delete->setIcon(icon2);

        mp_layout->addWidget(mp_btn_delete);

        mp_btn_clear = new QPushButton(GameConfigWidget);
        mp_btn_clear->setObjectName(QString::fromUtf8("mp_btn_clear"));
        mp_btn_clear->setIcon(icon);

        mp_layout->addWidget(mp_btn_clear);

        mp_btn_save = new QPushButton(GameConfigWidget);
        mp_btn_save->setObjectName(QString::fromUtf8("mp_btn_save"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_save->setIcon(icon3);

        mp_layout->addWidget(mp_btn_save);


        verticalLayout->addLayout(mp_layout);

        QWidget::setTabOrder(mp_combo_opl_version, mp_edit_game_id);
        QWidget::setTabOrder(mp_edit_game_id, mp_btn_id_from_game);
        QWidget::setTabOrder(mp_btn_id_from_game, mp_edit_elf);
        QWidget::setTabOrder(mp_edit_elf, mp_checkbox_mode_1);
        QWidget::setTabOrder(mp_checkbox_mode_1, mp_checkbox_mode_2);
        QWidget::setTabOrder(mp_checkbox_mode_2, mp_checkbox_mode_3);
        QWidget::setTabOrder(mp_checkbox_mode_3, mp_checkbox_mode_4);
        QWidget::setTabOrder(mp_checkbox_mode_4, mp_checkbox_mode_5);
        QWidget::setTabOrder(mp_checkbox_mode_5, mp_checkbox_mode_6);
        QWidget::setTabOrder(mp_checkbox_mode_6, mp_checkbox_mode_7);
        QWidget::setTabOrder(mp_checkbox_mode_7, mp_checkbox_mode_8);
        QWidget::setTabOrder(mp_checkbox_mode_8, mp_combo_vmc0);
        QWidget::setTabOrder(mp_combo_vmc0, mp_btn_create_vmc0);
        QWidget::setTabOrder(mp_btn_create_vmc0, mp_combo_vmc1);
        QWidget::setTabOrder(mp_combo_vmc1, mp_btn_create_vmc1);
        QWidget::setTabOrder(mp_btn_create_vmc1, mp_radio_disable_gsm);
        QWidget::setTabOrder(mp_radio_disable_gsm, mp_radio_enable_gsm);
        QWidget::setTabOrder(mp_radio_enable_gsm, mp_radio_use_global_gsm);
        QWidget::setTabOrder(mp_radio_use_global_gsm, mp_combo_video_mode);
        QWidget::setTabOrder(mp_combo_video_mode, mp_checkbox_skip_fmv);
        QWidget::setTabOrder(mp_checkbox_skip_fmv, mp_spinbox_hpos);
        QWidget::setTabOrder(mp_spinbox_hpos, mp_spinbox_vpos);
        QWidget::setTabOrder(mp_spinbox_vpos, mp_checkbox_emulate_field_flipping);
        QWidget::setTabOrder(mp_checkbox_emulate_field_flipping, mp_btn_delete);
        QWidget::setTabOrder(mp_btn_delete, mp_btn_clear);
        QWidget::setTabOrder(mp_btn_clear, mp_btn_save);

        retranslateUi(GameConfigWidget);

        QMetaObject::connectSlotsByName(GameConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *GameConfigWidget)
    {
        mp_label_opl_version->setText(QCoreApplication::translate("GameConfigWidget", "OPL Version", nullptr));
        mp_label_game_id->setText(QCoreApplication::translate("GameConfigWidget", "Game ID", nullptr));
        mp_btn_id_from_game->setText(QCoreApplication::translate("GameConfigWidget", "Get from the Game", nullptr));
        mp_label_elf->setText(QCoreApplication::translate("GameConfigWidget", "Custom ELF", nullptr));
        mp_groupbox_modes->setTitle(QCoreApplication::translate("GameConfigWidget", "Modes", nullptr));
        mp_checkbox_mode_1->setText(QCoreApplication::translate("GameConfigWidget", "Mode 1 \342\200\225 Accurate Reads", nullptr));
        mp_checkbox_mode_2->setText(QCoreApplication::translate("GameConfigWidget", "Mode 2 \342\200\225 Synchronous Mode", nullptr));
        mp_checkbox_mode_3->setText(QCoreApplication::translate("GameConfigWidget", "Mode 3 \342\200\225 Unhook Syscalls", nullptr));
        mp_checkbox_mode_4->setText(QString());
        mp_checkbox_mode_5->setText(QCoreApplication::translate("GameConfigWidget", "Mode 5 \342\200\225 Emulate DVD-DL", nullptr));
        mp_checkbox_mode_6->setText(QCoreApplication::translate("GameConfigWidget", "Mode 6 \342\200\225 Disable IGR", nullptr));
        mp_checkbox_mode_7->setText(QString());
        mp_checkbox_mode_8->setText(QString());
        mp_groupbox_vmc0->setTitle(QCoreApplication::translate("GameConfigWidget", "Virtual Memory Card #1", nullptr));
        mp_btn_create_vmc0->setText(QCoreApplication::translate("GameConfigWidget", "Create VMC", nullptr));
        mp_groupbox_vmc1->setTitle(QCoreApplication::translate("GameConfigWidget", "Virtual Memory Card #2", nullptr));
        mp_btn_create_vmc1->setText(QCoreApplication::translate("GameConfigWidget", "Create VMC", nullptr));
        mp_groupbox_gsm->setTitle(QCoreApplication::translate("GameConfigWidget", "Graphic Synthesiser Mode", nullptr));
        mp_radio_disable_gsm->setText(QCoreApplication::translate("GameConfigWidget", "Disbale", nullptr));
        mp_radio_enable_gsm->setText(QCoreApplication::translate("GameConfigWidget", "Enable", nullptr));
        mp_radio_use_global_gsm->setText(QCoreApplication::translate("GameConfigWidget", "Use Global Settings", nullptr));
        mp_groupbox_gsm_settings->setTitle(QCoreApplication::translate("GameConfigWidget", "Settings", nullptr));
        mp_label_video_mode->setText(QCoreApplication::translate("GameConfigWidget", "Video Mode", nullptr));
        mp_checkbox_skip_fmv->setText(QCoreApplication::translate("GameConfigWidget", "Skip Full Motion Videos", nullptr));
        mp_label_hpos->setText(QCoreApplication::translate("GameConfigWidget", "Horizontal Position", nullptr));
        mp_label_vpos->setText(QCoreApplication::translate("GameConfigWidget", "Vertical Position", nullptr));
        mp_checkbox_emulate_field_flipping->setText(QCoreApplication::translate("GameConfigWidget", "Emulate FIELD Flipping", nullptr));
        mp_btn_delete->setText(QCoreApplication::translate("GameConfigWidget", "&Delete Configuration", nullptr));
        mp_btn_clear->setText(QCoreApplication::translate("GameConfigWidget", "&Clear Configuration", nullptr));
        mp_btn_save->setText(QCoreApplication::translate("GameConfigWidget", "&Save Configuration", nullptr));
        (void)GameConfigWidget;
    } // retranslateUi

};

namespace Ui {
    class GameConfigWidget: public Ui_GameConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECONFIGWIDGET_H
