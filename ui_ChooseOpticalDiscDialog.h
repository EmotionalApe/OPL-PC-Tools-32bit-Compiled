/********************************************************************************
** Form generated from reading UI file 'ChooseOpticalDiscDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEOPTICALDISCDIALOG_H
#define UI_CHOOSEOPTICALDISCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseOpticalDiscDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *mp_label_error;
    QWidget *mp_widget_content;
    QVBoxLayout *verticalLayout;
    QTreeWidget *mp_tree_devices;
    QWidget *mp_widget_loading;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QProgressBar *mp_progressbar;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mp_button_box;

    void setupUi(QDialog *ChooseOpticalDiscDialog)
    {
        if (ChooseOpticalDiscDialog->objectName().isEmpty())
            ChooseOpticalDiscDialog->setObjectName(QString::fromUtf8("ChooseOpticalDiscDialog"));
        ChooseOpticalDiscDialog->resize(618, 432);
        ChooseOpticalDiscDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(ChooseOpticalDiscDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mp_label_error = new QLabel(ChooseOpticalDiscDialog);
        mp_label_error->setObjectName(QString::fromUtf8("mp_label_error"));
        mp_label_error->setText(QString::fromUtf8("ERROR MESSAGE"));
        mp_label_error->setAlignment(Qt::AlignCenter);
        mp_label_error->setWordWrap(true);

        verticalLayout_2->addWidget(mp_label_error);

        mp_widget_content = new QWidget(ChooseOpticalDiscDialog);
        mp_widget_content->setObjectName(QString::fromUtf8("mp_widget_content"));
        verticalLayout = new QVBoxLayout(mp_widget_content);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mp_tree_devices = new QTreeWidget(mp_widget_content);
        mp_tree_devices->setObjectName(QString::fromUtf8("mp_tree_devices"));
        mp_tree_devices->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mp_tree_devices->setIconSize(QSize(24, 24));
        mp_tree_devices->setRootIsDecorated(false);
        mp_tree_devices->setItemsExpandable(false);
        mp_tree_devices->setSortingEnabled(true);
        mp_tree_devices->setColumnCount(2);

        verticalLayout->addWidget(mp_tree_devices);


        verticalLayout_2->addWidget(mp_widget_content);

        mp_widget_loading = new QWidget(ChooseOpticalDiscDialog);
        mp_widget_loading->setObjectName(QString::fromUtf8("mp_widget_loading"));
        verticalLayout_3 = new QVBoxLayout(mp_widget_loading);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        mp_progressbar = new QProgressBar(mp_widget_loading);
        mp_progressbar->setObjectName(QString::fromUtf8("mp_progressbar"));
        mp_progressbar->setMaximum(0);
        mp_progressbar->setValue(0);

        verticalLayout_3->addWidget(mp_progressbar);

        label = new QLabel(mp_widget_loading);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_2->addWidget(mp_widget_loading);

        mp_button_box = new QDialogButtonBox(ChooseOpticalDiscDialog);
        mp_button_box->setObjectName(QString::fromUtf8("mp_button_box"));
        mp_button_box->setOrientation(Qt::Horizontal);
        mp_button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        verticalLayout_2->addWidget(mp_button_box);


        retranslateUi(ChooseOpticalDiscDialog);
        QObject::connect(mp_button_box, SIGNAL(accepted()), ChooseOpticalDiscDialog, SLOT(accept()));
        QObject::connect(mp_button_box, SIGNAL(rejected()), ChooseOpticalDiscDialog, SLOT(reject()));
        QObject::connect(mp_tree_devices, SIGNAL(itemSelectionChanged()), ChooseOpticalDiscDialog, SLOT(deviceSelectionChanged()));
        QObject::connect(mp_tree_devices, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), ChooseOpticalDiscDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ChooseOpticalDiscDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseOpticalDiscDialog)
    {
        ChooseOpticalDiscDialog->setWindowTitle(QCoreApplication::translate("ChooseOpticalDiscDialog", "Choose CD/DVD Device", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mp_tree_devices->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ChooseOpticalDiscDialog", "Title", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ChooseOpticalDiscDialog", "Device", nullptr));
        label->setText(QCoreApplication::translate("ChooseOpticalDiscDialog", "Initialization...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseOpticalDiscDialog: public Ui_ChooseOpticalDiscDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEOPTICALDISCDIALOG_H
