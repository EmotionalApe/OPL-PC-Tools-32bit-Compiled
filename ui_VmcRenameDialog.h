/********************************************************************************
** Form generated from reading UI file 'VmcRenameDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMCRENAMEDIALOG_H
#define UI_VMCRENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VmcRenameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *mp_edit_name;
    QLabel *mp_label_error_message;
    QSpacerItem *mp_spacer;
    QDialogButtonBox *mp_button_box;

    void setupUi(QDialog *VmcRenameDialog)
    {
        if (VmcRenameDialog->objectName().isEmpty())
            VmcRenameDialog->setObjectName(QString::fromUtf8("VmcRenameDialog"));
        VmcRenameDialog->resize(418, 148);
        VmcRenameDialog->setModal(true);
        verticalLayout = new QVBoxLayout(VmcRenameDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mp_edit_name = new QLineEdit(VmcRenameDialog);
        mp_edit_name->setObjectName(QString::fromUtf8("mp_edit_name"));

        verticalLayout->addWidget(mp_edit_name);

        mp_label_error_message = new QLabel(VmcRenameDialog);
        mp_label_error_message->setObjectName(QString::fromUtf8("mp_label_error_message"));
        mp_label_error_message->setText(QString::fromUtf8(""));

        verticalLayout->addWidget(mp_label_error_message);

        mp_spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(mp_spacer);

        mp_button_box = new QDialogButtonBox(VmcRenameDialog);
        mp_button_box->setObjectName(QString::fromUtf8("mp_button_box"));
        mp_button_box->setOrientation(Qt::Horizontal);
        mp_button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mp_button_box);


        retranslateUi(VmcRenameDialog);

        QMetaObject::connectSlotsByName(VmcRenameDialog);
    } // setupUi

    void retranslateUi(QDialog *VmcRenameDialog)
    {
        VmcRenameDialog->setWindowTitle(QCoreApplication::translate("VmcRenameDialog", "VMC Title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VmcRenameDialog: public Ui_VmcRenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMCRENAMEDIALOG_H
