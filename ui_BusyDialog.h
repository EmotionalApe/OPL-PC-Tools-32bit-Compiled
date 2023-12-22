/********************************************************************************
** Form generated from reading UI file 'BusyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSYDIALOG_H
#define UI_BUSYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BusyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QProgressBar *mp_progress_bar;
    QLabel *mp_label_message;

    void setupUi(QDialog *BusyDialog)
    {
        if (BusyDialog->objectName().isEmpty())
            BusyDialog->setObjectName(QString::fromUtf8("BusyDialog"));
        BusyDialog->resize(282, 76);
        BusyDialog->setWindowTitle(QString::fromUtf8(""));
        BusyDialog->setModal(false);
        verticalLayout = new QVBoxLayout(BusyDialog);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mp_progress_bar = new QProgressBar(BusyDialog);
        mp_progress_bar->setObjectName(QString::fromUtf8("mp_progress_bar"));
        mp_progress_bar->setMaximum(0);
        mp_progress_bar->setValue(-1);

        verticalLayout->addWidget(mp_progress_bar);

        mp_label_message = new QLabel(BusyDialog);
        mp_label_message->setObjectName(QString::fromUtf8("mp_label_message"));
        mp_label_message->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(mp_label_message);


        retranslateUi(BusyDialog);

        QMetaObject::connectSlotsByName(BusyDialog);
    } // setupUi

    void retranslateUi(QDialog *BusyDialog)
    {
        mp_label_message->setText(QCoreApplication::translate("BusyDialog", "Pocessing...", nullptr));
        (void)BusyDialog;
    } // retranslateUi

};

namespace Ui {
    class BusyDialog: public Ui_BusyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSYDIALOG_H
