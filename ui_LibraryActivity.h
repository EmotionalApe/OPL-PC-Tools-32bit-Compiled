/********************************************************************************
** Form generated from reading UI file 'LibraryActivity.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYACTIVITY_H
#define UI_LIBRARYACTIVITY_H

#include <OplPcTools/UI/GameListWidget.h>
#include <OplPcTools/UI/VmcListWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibraryActivity
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mp_tabs;
    OplPcTools::UI::GameListWidget *mp_tab_games;
    OplPcTools::UI::VmcListWidget *mp_tab_vmcs;
    QHBoxLayout *mp_layout;
    QLabel *mp_label_path;
    QSpacerItem *mp_spacer;

    void setupUi(QWidget *LibraryActivity)
    {
        if (LibraryActivity->objectName().isEmpty())
            LibraryActivity->setObjectName(QString::fromUtf8("LibraryActivity"));
        LibraryActivity->resize(889, 613);
        LibraryActivity->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(LibraryActivity);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mp_tabs = new QTabWidget(LibraryActivity);
        mp_tabs->setObjectName(QString::fromUtf8("mp_tabs"));
        mp_tabs->setTabPosition(QTabWidget::South);
        mp_tab_games = new OplPcTools::UI::GameListWidget();
        mp_tab_games->setObjectName(QString::fromUtf8("mp_tab_games"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/no-icon"), QSize(), QIcon::Normal, QIcon::Off);
        mp_tabs->addTab(mp_tab_games, icon, QString());
        mp_tab_vmcs = new OplPcTools::UI::VmcListWidget();
        mp_tab_vmcs->setObjectName(QString::fromUtf8("mp_tab_vmcs"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/vmc"), QSize(), QIcon::Normal, QIcon::Off);
        mp_tabs->addTab(mp_tab_vmcs, icon1, QString());

        verticalLayout->addWidget(mp_tabs);

        mp_layout = new QHBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_label_path = new QLabel(LibraryActivity);
        mp_label_path->setObjectName(QString::fromUtf8("mp_label_path"));
        mp_label_path->setText(QString::fromUtf8(""));

        mp_layout->addWidget(mp_label_path);

        mp_spacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mp_layout->addItem(mp_spacer);


        verticalLayout->addLayout(mp_layout);


        retranslateUi(LibraryActivity);

        mp_tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LibraryActivity);
    } // setupUi

    void retranslateUi(QWidget *LibraryActivity)
    {
        mp_tabs->setTabText(mp_tabs->indexOf(mp_tab_games), QCoreApplication::translate("LibraryActivity", "Games", nullptr));
        mp_tabs->setTabText(mp_tabs->indexOf(mp_tab_vmcs), QCoreApplication::translate("LibraryActivity", "Virtual Memory Cards", nullptr));
        (void)LibraryActivity;
    } // retranslateUi

};

namespace Ui {
    class LibraryActivity: public Ui_LibraryActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYACTIVITY_H
