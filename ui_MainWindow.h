/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *mp_action_settings;
    QAction *mp_action_about;
    QAction *mp_action_about_qt;
    QAction *mp_action_open_library;
    QWidget *mp_centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *mp_widget_update;
    QHBoxLayout *horizontalLayout;
    QLabel *mp_label_update;
    QToolButton *mp_btn_update_download;
    QToolButton *mp_btn_update_cancel;
    QWidget *mp_widget_open_library;
    QGridLayout *gridLayout;
    QSpacerItem *mp_spacer_3;
    QSpacerItem *mp_spacer;
    QToolButton *mp_btn_open_library;
    QSpacerItem *mp_spacer_2;
    QSpacerItem *mp_spacer_4;
    QVBoxLayout *mp_layout_stacked_widget;
    QStackedWidget *mp_stacked_widget;
    QMenuBar *mp_menu_bar;
    QMenu *mp_menu_tools;
    QMenu *mp_menu_help;
    QMenu *menu_File;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/application"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        mp_action_settings = new QAction(MainWindow);
        mp_action_settings->setObjectName(QString::fromUtf8("mp_action_settings"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/edit"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_settings->setIcon(icon1);
#if QT_CONFIG(shortcut)
        mp_action_settings->setShortcut(QString::fromUtf8("Ctrl+S"));
#endif // QT_CONFIG(shortcut)
        mp_action_about = new QAction(MainWindow);
        mp_action_about->setObjectName(QString::fromUtf8("mp_action_about"));
#if QT_CONFIG(shortcut)
        mp_action_about->setShortcut(QString::fromUtf8("F1"));
#endif // QT_CONFIG(shortcut)
        mp_action_about_qt = new QAction(MainWindow);
        mp_action_about_qt->setObjectName(QString::fromUtf8("mp_action_about_qt"));
#if QT_CONFIG(shortcut)
        mp_action_about_qt->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        mp_action_open_library = new QAction(MainWindow);
        mp_action_open_library->setObjectName(QString::fromUtf8("mp_action_open_library"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/load"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_open_library->setIcon(icon2);
#if QT_CONFIG(shortcut)
        mp_action_open_library->setShortcut(QString::fromUtf8("Ctrl+O"));
#endif // QT_CONFIG(shortcut)
        mp_centralwidget = new QWidget(MainWindow);
        mp_centralwidget->setObjectName(QString::fromUtf8("mp_centralwidget"));
        verticalLayout_2 = new QVBoxLayout(mp_centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mp_widget_update = new QWidget(mp_centralwidget);
        mp_widget_update->setObjectName(QString::fromUtf8("mp_widget_update"));
        mp_widget_update->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 218, 3);\n"
"color: rgb(56, 56, 56);"));
        horizontalLayout = new QHBoxLayout(mp_widget_update);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, -1, 6);
        mp_label_update = new QLabel(mp_widget_update);
        mp_label_update->setObjectName(QString::fromUtf8("mp_label_update"));
        mp_label_update->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(mp_label_update);

        mp_btn_update_download = new QToolButton(mp_widget_update);
        mp_btn_update_download->setObjectName(QString::fromUtf8("mp_btn_update_download"));
        mp_btn_update_download->setMaximumSize(QSize(16777215, 25));
        mp_btn_update_download->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(mp_btn_update_download);

        mp_btn_update_cancel = new QToolButton(mp_widget_update);
        mp_btn_update_cancel->setObjectName(QString::fromUtf8("mp_btn_update_cancel"));
        mp_btn_update_cancel->setMaximumSize(QSize(16777215, 25));
        mp_btn_update_cancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(mp_btn_update_cancel);


        verticalLayout_2->addWidget(mp_widget_update);

        mp_widget_open_library = new QWidget(mp_centralwidget);
        mp_widget_open_library->setObjectName(QString::fromUtf8("mp_widget_open_library"));
        gridLayout = new QGridLayout(mp_widget_open_library);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_spacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(mp_spacer_3, 0, 1, 1, 1);

        mp_spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(mp_spacer, 1, 0, 1, 1);

        mp_btn_open_library = new QToolButton(mp_widget_open_library);
        mp_btn_open_library->setObjectName(QString::fromUtf8("mp_btn_open_library"));
        mp_btn_open_library->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	padding: 10px 40px 20px 40px;\n"
"}"));
        mp_btn_open_library->setText(QString::fromUtf8(""));
        mp_btn_open_library->setIconSize(QSize(64, 64));
        mp_btn_open_library->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_open_library->setAutoRaise(true);

        gridLayout->addWidget(mp_btn_open_library, 1, 1, 1, 1);

        mp_spacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(mp_spacer_2, 1, 2, 1, 1);

        mp_spacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(mp_spacer_4, 2, 1, 1, 1);


        verticalLayout_2->addWidget(mp_widget_open_library);

        mp_layout_stacked_widget = new QVBoxLayout();
        mp_layout_stacked_widget->setObjectName(QString::fromUtf8("mp_layout_stacked_widget"));
        mp_layout_stacked_widget->setContentsMargins(9, 9, 9, 9);
        mp_stacked_widget = new QStackedWidget(mp_centralwidget);
        mp_stacked_widget->setObjectName(QString::fromUtf8("mp_stacked_widget"));
        mp_stacked_widget->setMinimumSize(QSize(400, 200));

        mp_layout_stacked_widget->addWidget(mp_stacked_widget);


        verticalLayout_2->addLayout(mp_layout_stacked_widget);

        MainWindow->setCentralWidget(mp_centralwidget);
        mp_menu_bar = new QMenuBar(MainWindow);
        mp_menu_bar->setObjectName(QString::fromUtf8("mp_menu_bar"));
        mp_menu_bar->setGeometry(QRect(0, 0, 800, 25));
        mp_menu_tools = new QMenu(mp_menu_bar);
        mp_menu_tools->setObjectName(QString::fromUtf8("mp_menu_tools"));
        mp_menu_help = new QMenu(mp_menu_bar);
        mp_menu_help->setObjectName(QString::fromUtf8("mp_menu_help"));
        menu_File = new QMenu(mp_menu_bar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(mp_menu_bar);

        mp_menu_bar->addAction(menu_File->menuAction());
        mp_menu_bar->addAction(mp_menu_tools->menuAction());
        mp_menu_bar->addAction(mp_menu_help->menuAction());
        mp_menu_tools->addAction(mp_action_settings);
        mp_menu_help->addAction(mp_action_about);
        mp_menu_help->addAction(mp_action_about_qt);
        menu_File->addAction(mp_action_open_library);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        mp_action_settings->setText(QCoreApplication::translate("MainWindow", "&Settings...", nullptr));
        mp_action_about->setText(QCoreApplication::translate("MainWindow", "&About...", nullptr));
        mp_action_about_qt->setText(QCoreApplication::translate("MainWindow", "About &Qt...", nullptr));
        mp_action_open_library->setText(QCoreApplication::translate("MainWindow", "&Open Library...", nullptr));
        mp_label_update->setText(QCoreApplication::translate("MainWindow", "Newest version of the application is available", nullptr));
        mp_btn_update_download->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        mp_btn_update_cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        mp_menu_tools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        mp_menu_help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
