/********************************************************************************
** Form generated from reading UI file 'VmcCreateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMCCREATEDIALOG_H
#define UI_VMCCREATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VmcCreateDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *mp_widget_main;
    QVBoxLayout *verticalLayout;
    QFormLayout *mp_layout;
    QLabel *mp_label_title;
    QLineEdit *mp_edit_title;
    QLabel *mp_label_size;
    QComboBox *mp_combobox_size;
    QLabel *mp_label_error_message;
    QDialogButtonBox *mp_button_box;
    QWidget *mp_widget_progress;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *mp_progress_bar;
    QLabel *label;

    void setupUi(QDialog *VmcCreateDialog)
    {
        if (VmcCreateDialog->objectName().isEmpty())
            VmcCreateDialog->setObjectName(QString::fromUtf8("VmcCreateDialog"));
        VmcCreateDialog->resize(490, 237);
        VmcCreateDialog->setModal(true);
        verticalLayout_3 = new QVBoxLayout(VmcCreateDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mp_widget_main = new QWidget(VmcCreateDialog);
        mp_widget_main->setObjectName(QString::fromUtf8("mp_widget_main"));
        verticalLayout = new QVBoxLayout(mp_widget_main);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mp_layout = new QFormLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_label_title = new QLabel(mp_widget_main);
        mp_label_title->setObjectName(QString::fromUtf8("mp_label_title"));

        mp_layout->setWidget(0, QFormLayout::LabelRole, mp_label_title);

        mp_edit_title = new QLineEdit(mp_widget_main);
        mp_edit_title->setObjectName(QString::fromUtf8("mp_edit_title"));
        mp_edit_title->setMinimumSize(QSize(400, 0));
        mp_edit_title->setMaxLength(200);
        mp_edit_title->setClearButtonEnabled(true);

        mp_layout->setWidget(0, QFormLayout::FieldRole, mp_edit_title);

        mp_label_size = new QLabel(mp_widget_main);
        mp_label_size->setObjectName(QString::fromUtf8("mp_label_size"));

        mp_layout->setWidget(1, QFormLayout::LabelRole, mp_label_size);

        mp_combobox_size = new QComboBox(mp_widget_main);
        mp_combobox_size->setObjectName(QString::fromUtf8("mp_combobox_size"));

        mp_layout->setWidget(1, QFormLayout::FieldRole, mp_combobox_size);


        verticalLayout->addLayout(mp_layout);

        mp_label_error_message = new QLabel(mp_widget_main);
        mp_label_error_message->setObjectName(QString::fromUtf8("mp_label_error_message"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_label_error_message->sizePolicy().hasHeightForWidth());
        mp_label_error_message->setSizePolicy(sizePolicy);
        mp_label_error_message->setText(QString::fromUtf8(""));
        mp_label_error_message->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(mp_label_error_message);

        mp_button_box = new QDialogButtonBox(mp_widget_main);
        mp_button_box->setObjectName(QString::fromUtf8("mp_button_box"));
        mp_button_box->setOrientation(Qt::Horizontal);
        mp_button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(mp_button_box);


        verticalLayout_3->addWidget(mp_widget_main);

        mp_widget_progress = new QWidget(VmcCreateDialog);
        mp_widget_progress->setObjectName(QString::fromUtf8("mp_widget_progress"));
        verticalLayout_2 = new QVBoxLayout(mp_widget_progress);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mp_progress_bar = new QProgressBar(mp_widget_progress);
        mp_progress_bar->setObjectName(QString::fromUtf8("mp_progress_bar"));
        mp_progress_bar->setMinimumSize(QSize(250, 0));
        mp_progress_bar->setMaximum(0);
        mp_progress_bar->setValue(-1);

        verticalLayout_2->addWidget(mp_progress_bar);

        label = new QLabel(mp_widget_progress);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(label);


        verticalLayout_3->addWidget(mp_widget_progress);


        retranslateUi(VmcCreateDialog);

        QMetaObject::connectSlotsByName(VmcCreateDialog);
    } // setupUi

    void retranslateUi(QDialog *VmcCreateDialog)
    {
        VmcCreateDialog->setWindowTitle(QCoreApplication::translate("VmcCreateDialog", "Create VMC", nullptr));
        mp_label_title->setText(QCoreApplication::translate("VmcCreateDialog", "Title", nullptr));
        mp_label_size->setText(QCoreApplication::translate("VmcCreateDialog", "Size", nullptr));
        label->setText(QCoreApplication::translate("VmcCreateDialog", "Please wait...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VmcCreateDialog: public Ui_VmcCreateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMCCREATEDIALOG_H
