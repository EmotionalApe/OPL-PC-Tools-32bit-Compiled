/********************************************************************************
** Form generated from reading UI file 'GameListWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMELISTWIDGET_H
#define UI_GAMELISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameListWidget
{
public:
    QAction *mp_action_edit;
    QAction *mp_action_delete;
    QAction *mp_action_install;
    QAction *mp_action_rename;
    QAction *mp_action_restore_iso;
    QHBoxLayout *horizontalLayout_2;
    QWidget *mp_toolbar;
    QVBoxLayout *verticalLayout_2;
    QToolButton *mp_btn_rename;
    QToolButton *mp_btn_edit;
    QToolButton *mp_btn_resore_iso;
    QToolButton *mp_btn_delete;
    QSpacerItem *mp_spacer_2;
    QToolButton *mp_btn_install;
    QVBoxLayout *mp_layout;
    QLineEdit *mp_edit_filter;
    QTreeView *mp_tree_games;
    QWidget *mp_widget_details_holder;
    QVBoxLayout *verticalLayout;
    QWidget *mp_widget_details;
    QVBoxLayout *verticalLayout_3;
    QLabel *mp_label_cover;
    QLabel *mp_label_title;
    QFrame *mp_line;
    QWidget *mp_widget_stats;
    QFormLayout *formLayout;
    QLabel *mp_label_2;
    QLabel *mp_label_id;
    QLabel *mp_label_4;
    QLabel *mp_label_type;
    QLabel *mp_label_6;
    QLabel *mp_label_source;
    QLabel *mp_label_8;
    QLabel *mp_label_parts;
    QSpacerItem *mp_verticalSpacer;

    void setupUi(QWidget *GameListWidget)
    {
        if (GameListWidget->objectName().isEmpty())
            GameListWidget->setObjectName(QString::fromUtf8("GameListWidget"));
        GameListWidget->resize(1035, 594);
        GameListWidget->setWindowTitle(QString::fromUtf8("Form"));
        mp_action_edit = new QAction(GameListWidget);
        mp_action_edit->setObjectName(QString::fromUtf8("mp_action_edit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/edit"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_edit->setIcon(icon);
#if QT_CONFIG(shortcut)
        mp_action_edit->setShortcut(QString::fromUtf8("F4"));
#endif // QT_CONFIG(shortcut)
        mp_action_delete = new QAction(GameListWidget);
        mp_action_delete->setObjectName(QString::fromUtf8("mp_action_delete"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/delete"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_delete->setIcon(icon1);
#if QT_CONFIG(shortcut)
        mp_action_delete->setShortcut(QString::fromUtf8("Del"));
#endif // QT_CONFIG(shortcut)
        mp_action_install = new QAction(GameListWidget);
        mp_action_install->setObjectName(QString::fromUtf8("mp_action_install"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/add"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_install->setIcon(icon2);
#if QT_CONFIG(shortcut)
        mp_action_install->setShortcut(QString::fromUtf8("Ins"));
#endif // QT_CONFIG(shortcut)
        mp_action_rename = new QAction(GameListWidget);
        mp_action_rename->setObjectName(QString::fromUtf8("mp_action_rename"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/rename"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_rename->setIcon(icon3);
#if QT_CONFIG(shortcut)
        mp_action_rename->setShortcut(QString::fromUtf8("F2"));
#endif // QT_CONFIG(shortcut)
        mp_action_restore_iso = new QAction(GameListWidget);
        mp_action_restore_iso->setObjectName(QString::fromUtf8("mp_action_restore_iso"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/restore"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_restore_iso->setIcon(icon4);
#if QT_CONFIG(shortcut)
        mp_action_restore_iso->setShortcut(QString::fromUtf8("Ctrl+R"));
#endif // QT_CONFIG(shortcut)
        horizontalLayout_2 = new QHBoxLayout(GameListWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mp_toolbar = new QWidget(GameListWidget);
        mp_toolbar->setObjectName(QString::fromUtf8("mp_toolbar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_toolbar->sizePolicy().hasHeightForWidth());
        mp_toolbar->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(mp_toolbar);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mp_btn_rename = new QToolButton(mp_toolbar);
        mp_btn_rename->setObjectName(QString::fromUtf8("mp_btn_rename"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_btn_rename->sizePolicy().hasHeightForWidth());
        mp_btn_rename->setSizePolicy(sizePolicy1);
        mp_btn_rename->setText(QString::fromUtf8(""));
        mp_btn_rename->setIconSize(QSize(32, 32));
        mp_btn_rename->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_rename->setAutoRaise(true);

        verticalLayout_2->addWidget(mp_btn_rename);

        mp_btn_edit = new QToolButton(mp_toolbar);
        mp_btn_edit->setObjectName(QString::fromUtf8("mp_btn_edit"));
        sizePolicy1.setHeightForWidth(mp_btn_edit->sizePolicy().hasHeightForWidth());
        mp_btn_edit->setSizePolicy(sizePolicy1);
        mp_btn_edit->setText(QString::fromUtf8(""));
        mp_btn_edit->setIconSize(QSize(32, 32));
        mp_btn_edit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_edit->setAutoRaise(true);

        verticalLayout_2->addWidget(mp_btn_edit);

        mp_btn_resore_iso = new QToolButton(mp_toolbar);
        mp_btn_resore_iso->setObjectName(QString::fromUtf8("mp_btn_resore_iso"));
        sizePolicy1.setHeightForWidth(mp_btn_resore_iso->sizePolicy().hasHeightForWidth());
        mp_btn_resore_iso->setSizePolicy(sizePolicy1);
        mp_btn_resore_iso->setIconSize(QSize(32, 32));
        mp_btn_resore_iso->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_resore_iso->setAutoRaise(true);

        verticalLayout_2->addWidget(mp_btn_resore_iso);

        mp_btn_delete = new QToolButton(mp_toolbar);
        mp_btn_delete->setObjectName(QString::fromUtf8("mp_btn_delete"));
        sizePolicy1.setHeightForWidth(mp_btn_delete->sizePolicy().hasHeightForWidth());
        mp_btn_delete->setSizePolicy(sizePolicy1);
        mp_btn_delete->setText(QString::fromUtf8(""));
        mp_btn_delete->setIconSize(QSize(32, 32));
        mp_btn_delete->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_delete->setAutoRaise(true);

        verticalLayout_2->addWidget(mp_btn_delete);

        mp_spacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(mp_spacer_2);

        mp_btn_install = new QToolButton(mp_toolbar);
        mp_btn_install->setObjectName(QString::fromUtf8("mp_btn_install"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_btn_install->sizePolicy().hasHeightForWidth());
        mp_btn_install->setSizePolicy(sizePolicy2);
        mp_btn_install->setText(QString::fromUtf8(""));
        mp_btn_install->setIconSize(QSize(32, 32));
        mp_btn_install->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_install->setAutoRaise(true);

        verticalLayout_2->addWidget(mp_btn_install);


        horizontalLayout_2->addWidget(mp_toolbar);

        mp_layout = new QVBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_layout->setContentsMargins(-1, -1, 4, -1);
        mp_edit_filter = new QLineEdit(GameListWidget);
        mp_edit_filter->setObjectName(QString::fromUtf8("mp_edit_filter"));
        mp_edit_filter->setClearButtonEnabled(true);

        mp_layout->addWidget(mp_edit_filter);

        mp_tree_games = new QTreeView(GameListWidget);
        mp_tree_games->setObjectName(QString::fromUtf8("mp_tree_games"));
        mp_tree_games->setContextMenuPolicy(Qt::CustomContextMenu);
        mp_tree_games->setStyleSheet(QString::fromUtf8("::item {\n"
"	padding: 2px 0;\n"
"}"));
        mp_tree_games->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mp_tree_games->setAlternatingRowColors(true);
        mp_tree_games->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        mp_tree_games->setRootIsDecorated(false);
        mp_tree_games->setItemsExpandable(false);
        mp_tree_games->setSortingEnabled(true);
        mp_tree_games->setAllColumnsShowFocus(true);
        mp_tree_games->setHeaderHidden(true);
        mp_tree_games->setExpandsOnDoubleClick(false);

        mp_layout->addWidget(mp_tree_games);


        horizontalLayout_2->addLayout(mp_layout);

        mp_widget_details_holder = new QWidget(GameListWidget);
        mp_widget_details_holder->setObjectName(QString::fromUtf8("mp_widget_details_holder"));
        sizePolicy.setHeightForWidth(mp_widget_details_holder->sizePolicy().hasHeightForWidth());
        mp_widget_details_holder->setSizePolicy(sizePolicy);
        mp_widget_details_holder->setMinimumSize(QSize(140, 0));
        mp_widget_details_holder->setMaximumSize(QSize(140, 16777215));
        verticalLayout = new QVBoxLayout(mp_widget_details_holder);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mp_widget_details = new QWidget(mp_widget_details_holder);
        mp_widget_details->setObjectName(QString::fromUtf8("mp_widget_details"));
        sizePolicy.setHeightForWidth(mp_widget_details->sizePolicy().hasHeightForWidth());
        mp_widget_details->setSizePolicy(sizePolicy);
        mp_widget_details->setMinimumSize(QSize(140, 0));
        mp_widget_details->setMaximumSize(QSize(140, 16777215));
        verticalLayout_3 = new QVBoxLayout(mp_widget_details);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mp_label_cover = new QLabel(mp_widget_details);
        mp_label_cover->setObjectName(QString::fromUtf8("mp_label_cover"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mp_label_cover->sizePolicy().hasHeightForWidth());
        mp_label_cover->setSizePolicy(sizePolicy3);
        mp_label_cover->setMinimumSize(QSize(140, 200));
        mp_label_cover->setMaximumSize(QSize(140, 200));
        mp_label_cover->setText(QString::fromUtf8(""));
        mp_label_cover->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(mp_label_cover);

        mp_label_title = new QLabel(mp_widget_details);
        mp_label_title->setObjectName(QString::fromUtf8("mp_label_title"));
        mp_label_title->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        mp_label_title->setFont(font);
        mp_label_title->setText(QString::fromUtf8(""));
        mp_label_title->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        mp_label_title->setWordWrap(true);

        verticalLayout_3->addWidget(mp_label_title);

        mp_line = new QFrame(mp_widget_details);
        mp_line->setObjectName(QString::fromUtf8("mp_line"));
        mp_line->setFrameShape(QFrame::HLine);
        mp_line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(mp_line);

        mp_widget_stats = new QWidget(mp_widget_details);
        mp_widget_stats->setObjectName(QString::fromUtf8("mp_widget_stats"));
        QFont font1;
        font1.setPointSize(8);
        mp_widget_stats->setFont(font1);
        formLayout = new QFormLayout(mp_widget_stats);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(0, 0, 0, 0);
        mp_label_2 = new QLabel(mp_widget_stats);
        mp_label_2->setObjectName(QString::fromUtf8("mp_label_2"));
        mp_label_2->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout->setWidget(0, QFormLayout::LabelRole, mp_label_2);

        mp_label_id = new QLabel(mp_widget_stats);
        mp_label_id->setObjectName(QString::fromUtf8("mp_label_id"));
        mp_label_id->setText(QString::fromUtf8(""));
        mp_label_id->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::FieldRole, mp_label_id);

        mp_label_4 = new QLabel(mp_widget_stats);
        mp_label_4->setObjectName(QString::fromUtf8("mp_label_4"));
        mp_label_4->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout->setWidget(1, QFormLayout::LabelRole, mp_label_4);

        mp_label_type = new QLabel(mp_widget_stats);
        mp_label_type->setObjectName(QString::fromUtf8("mp_label_type"));
        mp_label_type->setText(QString::fromUtf8(""));
        mp_label_type->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, mp_label_type);

        mp_label_6 = new QLabel(mp_widget_stats);
        mp_label_6->setObjectName(QString::fromUtf8("mp_label_6"));
        mp_label_6->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout->setWidget(2, QFormLayout::LabelRole, mp_label_6);

        mp_label_source = new QLabel(mp_widget_stats);
        mp_label_source->setObjectName(QString::fromUtf8("mp_label_source"));
        mp_label_source->setText(QString::fromUtf8(""));
        mp_label_source->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, mp_label_source);

        mp_label_8 = new QLabel(mp_widget_stats);
        mp_label_8->setObjectName(QString::fromUtf8("mp_label_8"));
        mp_label_8->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout->setWidget(3, QFormLayout::LabelRole, mp_label_8);

        mp_label_parts = new QLabel(mp_widget_stats);
        mp_label_parts->setObjectName(QString::fromUtf8("mp_label_parts"));
        mp_label_parts->setText(QString::fromUtf8(""));
        mp_label_parts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, mp_label_parts);


        verticalLayout_3->addWidget(mp_widget_stats);

        mp_verticalSpacer = new QSpacerItem(20, 294, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(mp_verticalSpacer);


        verticalLayout->addWidget(mp_widget_details);


        horizontalLayout_2->addWidget(mp_widget_details_holder);

        QWidget::setTabOrder(mp_btn_rename, mp_btn_edit);
        QWidget::setTabOrder(mp_btn_edit, mp_btn_resore_iso);
        QWidget::setTabOrder(mp_btn_resore_iso, mp_btn_delete);
        QWidget::setTabOrder(mp_btn_delete, mp_btn_install);
        QWidget::setTabOrder(mp_btn_install, mp_edit_filter);
        QWidget::setTabOrder(mp_edit_filter, mp_tree_games);

        retranslateUi(GameListWidget);

        QMetaObject::connectSlotsByName(GameListWidget);
    } // setupUi

    void retranslateUi(QWidget *GameListWidget)
    {
        mp_action_edit->setText(QCoreApplication::translate("GameListWidget", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        mp_action_edit->setToolTip(QCoreApplication::translate("GameListWidget", "Edit game", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_action_delete->setText(QCoreApplication::translate("GameListWidget", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        mp_action_delete->setToolTip(QCoreApplication::translate("GameListWidget", "Delete game", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_action_install->setText(QCoreApplication::translate("GameListWidget", "Install", nullptr));
#if QT_CONFIG(tooltip)
        mp_action_install->setToolTip(QCoreApplication::translate("GameListWidget", "Install game", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_action_rename->setText(QCoreApplication::translate("GameListWidget", "Rename", nullptr));
#if QT_CONFIG(tooltip)
        mp_action_rename->setToolTip(QCoreApplication::translate("GameListWidget", "Rename game", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_action_restore_iso->setText(QCoreApplication::translate("GameListWidget", "Restore ISO", nullptr));
        mp_btn_resore_iso->setText(QString());
        mp_edit_filter->setPlaceholderText(QCoreApplication::translate("GameListWidget", "Filter", nullptr));
        mp_label_2->setText(QCoreApplication::translate("GameListWidget", "ID:", nullptr));
        mp_label_4->setText(QCoreApplication::translate("GameListWidget", "Type:", nullptr));
        mp_label_6->setText(QCoreApplication::translate("GameListWidget", "Source:", nullptr));
        mp_label_8->setText(QCoreApplication::translate("GameListWidget", "Parts:", nullptr));
        (void)GameListWidget;
    } // retranslateUi

};

namespace Ui {
    class GameListWidget: public Ui_GameListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMELISTWIDGET_H
