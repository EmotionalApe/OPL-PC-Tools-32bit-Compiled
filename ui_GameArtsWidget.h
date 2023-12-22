/********************************************************************************
** Form generated from reading UI file 'GameArtsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEARTSWIDGET_H
#define UI_GAMEARTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameArtsWidget
{
public:
    QAction *mp_action_change_art;
    QAction *mp_action_delete_art;
    QVBoxLayout *verticalLayout;
    QListWidget *mp_list_arts;

    void setupUi(QWidget *GameArtsWidget)
    {
        if (GameArtsWidget->objectName().isEmpty())
            GameArtsWidget->setObjectName(QString::fromUtf8("GameArtsWidget"));
        GameArtsWidget->resize(762, 495);
        GameArtsWidget->setWindowTitle(QString::fromUtf8("Form"));
        mp_action_change_art = new QAction(GameArtsWidget);
        mp_action_change_art->setObjectName(QString::fromUtf8("mp_action_change_art"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/edit"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_change_art->setIcon(icon);
        mp_action_delete_art = new QAction(GameArtsWidget);
        mp_action_delete_art->setObjectName(QString::fromUtf8("mp_action_delete_art"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/delete"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_delete_art->setIcon(icon1);
        verticalLayout = new QVBoxLayout(GameArtsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mp_list_arts = new QListWidget(GameArtsWidget);
        mp_list_arts->setObjectName(QString::fromUtf8("mp_list_arts"));
        mp_list_arts->setFrameShape(QFrame::NoFrame);
        mp_list_arts->setProperty("showDropIndicator", QVariant(false));
        mp_list_arts->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        mp_list_arts->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        mp_list_arts->setMovement(QListView::Static);
        mp_list_arts->setFlow(QListView::LeftToRight);
        mp_list_arts->setResizeMode(QListView::Adjust);
        mp_list_arts->setSpacing(20);
        mp_list_arts->setViewMode(QListView::IconMode);
        mp_list_arts->setSelectionRectVisible(false);

        verticalLayout->addWidget(mp_list_arts);


        retranslateUi(GameArtsWidget);

        QMetaObject::connectSlotsByName(GameArtsWidget);
    } // setupUi

    void retranslateUi(QWidget *GameArtsWidget)
    {
        mp_action_change_art->setText(QCoreApplication::translate("GameArtsWidget", "Change Picture...", nullptr));
        mp_action_delete_art->setText(QCoreApplication::translate("GameArtsWidget", "Delete Picture", nullptr));
        (void)GameArtsWidget;
    } // retranslateUi

};

namespace Ui {
    class GameArtsWidget: public Ui_GameArtsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEARTSWIDGET_H
