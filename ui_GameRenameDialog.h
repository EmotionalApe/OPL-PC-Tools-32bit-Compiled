/********************************************************************************
** Form generated from reading UI file 'GameRenameDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMERENAMEDIALOG_H
#define UI_GAMERENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GameRenameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *mp_edit_name;
    QLabel *mp_label_message;
    QSpacerItem *mp_spacer;
    QDialogButtonBox *mp_button_box;

    void setupUi(QDialog *GameRenameDialog)
    {
        if (GameRenameDialog->objectName().isEmpty())
            GameRenameDialog->setObjectName(QString::fromUtf8("GameRenameDialog"));
        GameRenameDialog->resize(389, 130);
        GameRenameDialog->setModal(true);
        verticalLayout = new QVBoxLayout(GameRenameDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mp_edit_name = new QLineEdit(GameRenameDialog);
        mp_edit_name->setObjectName(QString::fromUtf8("mp_edit_name"));
        mp_edit_name->setMaxLength(250);

        verticalLayout->addWidget(mp_edit_name);

        mp_label_message = new QLabel(GameRenameDialog);
        mp_label_message->setObjectName(QString::fromUtf8("mp_label_message"));

        verticalLayout->addWidget(mp_label_message);

        mp_spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(mp_spacer);

        mp_button_box = new QDialogButtonBox(GameRenameDialog);
        mp_button_box->setObjectName(QString::fromUtf8("mp_button_box"));
        mp_button_box->setOrientation(Qt::Horizontal);
        mp_button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mp_button_box);


        retranslateUi(GameRenameDialog);

        QMetaObject::connectSlotsByName(GameRenameDialog);
    } // setupUi

    void retranslateUi(QDialog *GameRenameDialog)
    {
        GameRenameDialog->setWindowTitle(QCoreApplication::translate("GameRenameDialog", "Game Title", nullptr));
        mp_label_message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameRenameDialog: public Ui_GameRenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMERENAMEDIALOG_H
