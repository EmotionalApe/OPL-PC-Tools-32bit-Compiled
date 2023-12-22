/********************************************************************************
** Form generated from reading UI file 'GameDetailsActivity.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEDETAILSACTIVITY_H
#define UI_GAMEDETAILSACTIVITY_H

#include <OplPcTools/UI/ClickableLabel.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameDetailsActivity
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mp_layout;
    QPushButton *mp_btn_close;
    OplPcTools::UI::ClickableLabel *mp_label_title;
    QToolButton *mp_btn_rename_game;
    QTabWidget *mp_tabs;
    QWidget *mp_tab_arts;
    QVBoxLayout *verticalLayout_2;
    QWidget *mp_tab_config;
    QVBoxLayout *verticalLayout_3;

    void setupUi(QWidget *GameDetailsActivity)
    {
        if (GameDetailsActivity->objectName().isEmpty())
            GameDetailsActivity->setObjectName(QString::fromUtf8("GameDetailsActivity"));
        GameDetailsActivity->resize(678, 414);
        GameDetailsActivity->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(GameDetailsActivity);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mp_layout = new QHBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_btn_close = new QPushButton(GameDetailsActivity);
        mp_btn_close->setObjectName(QString::fromUtf8("mp_btn_close"));
        mp_btn_close->setMinimumSize(QSize(0, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/back"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_close->setIcon(icon);

        mp_layout->addWidget(mp_btn_close);

        mp_label_title = new OplPcTools::UI::ClickableLabel(GameDetailsActivity);
        mp_label_title->setObjectName(QString::fromUtf8("mp_label_title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_label_title->sizePolicy().hasHeightForWidth());
        mp_label_title->setSizePolicy(sizePolicy);
        mp_label_title->setMinimumSize(QSize(0, 24));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        mp_label_title->setFont(font);
        mp_label_title->setText(QString::fromUtf8(""));

        mp_layout->addWidget(mp_label_title);

        mp_btn_rename_game = new QToolButton(GameDetailsActivity);
        mp_btn_rename_game->setObjectName(QString::fromUtf8("mp_btn_rename_game"));
        mp_btn_rename_game->setMinimumSize(QSize(24, 24));
        mp_btn_rename_game->setFocusPolicy(Qt::TabFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/rename"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_rename_game->setIcon(icon1);

        mp_layout->addWidget(mp_btn_rename_game);


        verticalLayout->addLayout(mp_layout);

        mp_tabs = new QTabWidget(GameDetailsActivity);
        mp_tabs->setObjectName(QString::fromUtf8("mp_tabs"));
        mp_tabs->setTabPosition(QTabWidget::South);
        mp_tab_arts = new QWidget();
        mp_tab_arts->setObjectName(QString::fromUtf8("mp_tab_arts"));
        verticalLayout_2 = new QVBoxLayout(mp_tab_arts);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mp_tabs->addTab(mp_tab_arts, QString());
        mp_tab_config = new QWidget();
        mp_tab_config->setObjectName(QString::fromUtf8("mp_tab_config"));
        verticalLayout_3 = new QVBoxLayout(mp_tab_config);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mp_tabs->addTab(mp_tab_config, QString());

        verticalLayout->addWidget(mp_tabs);

        QWidget::setTabOrder(mp_btn_rename_game, mp_tabs);
        QWidget::setTabOrder(mp_tabs, mp_btn_close);

        retranslateUi(GameDetailsActivity);

        mp_tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameDetailsActivity);
    } // setupUi

    void retranslateUi(QWidget *GameDetailsActivity)
    {
        mp_btn_close->setText(QCoreApplication::translate("GameDetailsActivity", "Back", nullptr));
#if QT_CONFIG(tooltip)
        mp_btn_rename_game->setToolTip(QCoreApplication::translate("GameDetailsActivity", "Rename...", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_btn_rename_game->setText(QString());
        mp_tabs->setTabText(mp_tabs->indexOf(mp_tab_arts), QCoreApplication::translate("GameDetailsActivity", "Pictures", nullptr));
        mp_tabs->setTabText(mp_tabs->indexOf(mp_tab_config), QCoreApplication::translate("GameDetailsActivity", "Configuration", nullptr));
        (void)GameDetailsActivity;
    } // retranslateUi

};

namespace Ui {
    class GameDetailsActivity: public Ui_GameDetailsActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEDETAILSACTIVITY_H
