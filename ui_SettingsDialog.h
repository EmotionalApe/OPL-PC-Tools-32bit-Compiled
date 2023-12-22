/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *mp_tabs;
    QWidget *mp_tab_main;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *mp_checkbx_reopen_last_catalog;
    QCheckBox *mp_checkbox_validate_ulcfg;
    QCheckBox *mp_checkbox_check_new_versions;
    QCheckBox *mp_checkbox_confirm_game_deletion;
    QCheckBox *mp_checkbox_confirm_picture_deletion;
    QCheckBox *mp_checkbox_confirm_vmc_deletion;
    QSpacerItem *mp_spacer;
    QWidget *mp_tab_installation;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *mp_group_default_behaviour;
    QVBoxLayout *verticalLayout;
    QCheckBox *mp_checkbox_donot_splitup;
    QCheckBox *mp_checkobx_move_iso;
    QCheckBox *mp_checkbox_add_id;
    QSpacerItem *mp_spacer_2;
    QWidget *mp_tab_appearance;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *mp_spinbox_icon_size;
    QDialogButtonBox *mp_button_box;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(571, 308);
        SettingsDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(SettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mp_tabs = new QTabWidget(SettingsDialog);
        mp_tabs->setObjectName(QString::fromUtf8("mp_tabs"));
        mp_tab_main = new QWidget();
        mp_tab_main->setObjectName(QString::fromUtf8("mp_tab_main"));
        verticalLayout_3 = new QVBoxLayout(mp_tab_main);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mp_checkbx_reopen_last_catalog = new QCheckBox(mp_tab_main);
        mp_checkbx_reopen_last_catalog->setObjectName(QString::fromUtf8("mp_checkbx_reopen_last_catalog"));

        verticalLayout_3->addWidget(mp_checkbx_reopen_last_catalog);

        mp_checkbox_validate_ulcfg = new QCheckBox(mp_tab_main);
        mp_checkbox_validate_ulcfg->setObjectName(QString::fromUtf8("mp_checkbox_validate_ulcfg"));

        verticalLayout_3->addWidget(mp_checkbox_validate_ulcfg);

        mp_checkbox_check_new_versions = new QCheckBox(mp_tab_main);
        mp_checkbox_check_new_versions->setObjectName(QString::fromUtf8("mp_checkbox_check_new_versions"));

        verticalLayout_3->addWidget(mp_checkbox_check_new_versions);

        mp_checkbox_confirm_game_deletion = new QCheckBox(mp_tab_main);
        mp_checkbox_confirm_game_deletion->setObjectName(QString::fromUtf8("mp_checkbox_confirm_game_deletion"));

        verticalLayout_3->addWidget(mp_checkbox_confirm_game_deletion);

        mp_checkbox_confirm_picture_deletion = new QCheckBox(mp_tab_main);
        mp_checkbox_confirm_picture_deletion->setObjectName(QString::fromUtf8("mp_checkbox_confirm_picture_deletion"));

        verticalLayout_3->addWidget(mp_checkbox_confirm_picture_deletion);

        mp_checkbox_confirm_vmc_deletion = new QCheckBox(mp_tab_main);
        mp_checkbox_confirm_vmc_deletion->setObjectName(QString::fromUtf8("mp_checkbox_confirm_vmc_deletion"));

        verticalLayout_3->addWidget(mp_checkbox_confirm_vmc_deletion);

        mp_spacer = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(mp_spacer);

        mp_tabs->addTab(mp_tab_main, QString());
        mp_tab_installation = new QWidget();
        mp_tab_installation->setObjectName(QString::fromUtf8("mp_tab_installation"));
        verticalLayout_4 = new QVBoxLayout(mp_tab_installation);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mp_group_default_behaviour = new QGroupBox(mp_tab_installation);
        mp_group_default_behaviour->setObjectName(QString::fromUtf8("mp_group_default_behaviour"));
        verticalLayout = new QVBoxLayout(mp_group_default_behaviour);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mp_checkbox_donot_splitup = new QCheckBox(mp_group_default_behaviour);
        mp_checkbox_donot_splitup->setObjectName(QString::fromUtf8("mp_checkbox_donot_splitup"));

        verticalLayout->addWidget(mp_checkbox_donot_splitup);

        mp_checkobx_move_iso = new QCheckBox(mp_group_default_behaviour);
        mp_checkobx_move_iso->setObjectName(QString::fromUtf8("mp_checkobx_move_iso"));

        verticalLayout->addWidget(mp_checkobx_move_iso);

        mp_checkbox_add_id = new QCheckBox(mp_group_default_behaviour);
        mp_checkbox_add_id->setObjectName(QString::fromUtf8("mp_checkbox_add_id"));

        verticalLayout->addWidget(mp_checkbox_add_id);


        verticalLayout_4->addWidget(mp_group_default_behaviour);

        mp_spacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(mp_spacer_2);

        mp_tabs->addTab(mp_tab_installation, QString());
        mp_tab_appearance = new QWidget();
        mp_tab_appearance->setObjectName(QString::fromUtf8("mp_tab_appearance"));
        formLayout = new QFormLayout(mp_tab_appearance);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(mp_tab_appearance);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mp_spinbox_icon_size = new QSpinBox(mp_tab_appearance);
        mp_spinbox_icon_size->setObjectName(QString::fromUtf8("mp_spinbox_icon_size"));
        mp_spinbox_icon_size->setMinimum(16);
        mp_spinbox_icon_size->setMaximum(64);
        mp_spinbox_icon_size->setSingleStep(8);

        formLayout->setWidget(0, QFormLayout::FieldRole, mp_spinbox_icon_size);

        mp_tabs->addTab(mp_tab_appearance, QString());

        verticalLayout_2->addWidget(mp_tabs);

        mp_button_box = new QDialogButtonBox(SettingsDialog);
        mp_button_box->setObjectName(QString::fromUtf8("mp_button_box"));
        mp_button_box->setOrientation(Qt::Horizontal);
        mp_button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(mp_button_box);

        QWidget::setTabOrder(mp_checkbx_reopen_last_catalog, mp_checkbox_validate_ulcfg);
        QWidget::setTabOrder(mp_checkbox_validate_ulcfg, mp_checkbox_check_new_versions);
        QWidget::setTabOrder(mp_checkbox_check_new_versions, mp_checkbox_confirm_game_deletion);
        QWidget::setTabOrder(mp_checkbox_confirm_game_deletion, mp_checkbox_confirm_picture_deletion);
        QWidget::setTabOrder(mp_checkbox_confirm_picture_deletion, mp_checkbox_confirm_vmc_deletion);
        QWidget::setTabOrder(mp_checkbox_confirm_vmc_deletion, mp_checkbox_donot_splitup);
        QWidget::setTabOrder(mp_checkbox_donot_splitup, mp_checkobx_move_iso);
        QWidget::setTabOrder(mp_checkobx_move_iso, mp_checkbox_add_id);
        QWidget::setTabOrder(mp_checkbox_add_id, mp_spinbox_icon_size);
        QWidget::setTabOrder(mp_spinbox_icon_size, mp_tabs);

        retranslateUi(SettingsDialog);
        QObject::connect(mp_button_box, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(mp_button_box, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        mp_tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        mp_checkbx_reopen_last_catalog->setText(QCoreApplication::translate("SettingsDialog", "Open the recently used library at startup", nullptr));
        mp_checkbox_validate_ulcfg->setText(QCoreApplication::translate("SettingsDialog", "Validate ul.cfg", nullptr));
        mp_checkbox_check_new_versions->setText(QCoreApplication::translate("SettingsDialog", "Check for app updates", nullptr));
        mp_checkbox_confirm_game_deletion->setText(QCoreApplication::translate("SettingsDialog", "Confirm the removal of a game", nullptr));
        mp_checkbox_confirm_picture_deletion->setText(QCoreApplication::translate("SettingsDialog", "Confirm the removal of a picture", nullptr));
        mp_checkbox_confirm_vmc_deletion->setText(QCoreApplication::translate("SettingsDialog", "Confirm the removal of a VMC", nullptr));
        mp_tabs->setTabText(mp_tabs->indexOf(mp_tab_main), QCoreApplication::translate("SettingsDialog", "Main", nullptr));
        mp_group_default_behaviour->setTitle(QCoreApplication::translate("SettingsDialog", "Default behaviour", nullptr));
        mp_checkbox_donot_splitup->setText(QCoreApplication::translate("SettingsDialog", "Write ISO in a single file", nullptr));
        mp_checkobx_move_iso->setText(QCoreApplication::translate("SettingsDialog", "Move ISO instead of copy", nullptr));
        mp_checkbox_add_id->setText(QCoreApplication::translate("SettingsDialog", "Add a game ID to a filename", nullptr));
        mp_tabs->setTabText(mp_tabs->indexOf(mp_tab_installation), QCoreApplication::translate("SettingsDialog", "Installation", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "List Icon Size", nullptr));
        mp_tabs->setTabText(mp_tabs->indexOf(mp_tab_appearance), QCoreApplication::translate("SettingsDialog", "Appearance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
