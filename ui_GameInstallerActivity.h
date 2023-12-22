/********************************************************************************
** Form generated from reading UI file 'GameInstallerActivity.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEINSTALLERACTIVITY_H
#define UI_GAMEINSTALLERACTIVITY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameInstallerActivity
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *mp_layout;
    QPushButton *mp_btn_back;
    QSpacerItem *mp_spacer;
    QPushButton *mp_btn_install;
    QPushButton *mp_btn_cancel;
    QProgressBar *mp_progressbar_overall;
    QHBoxLayout *mp_layout_4;
    QWidget *mp_widget_tasks;
    QVBoxLayout *verticalLayout;
    QTreeWidget *mp_tree_tasks;
    QHBoxLayout *mp_layout_2;
    QPushButton *mp_btn_add_image;
    QPushButton *mp_btn_add_disc;
    QSpacerItem *mp_spacer_2;
    QPushButton *mp_btn_remove;
    QPushButton *mp_btn_rename;
    QWidget *mp_widget_task_details_holder;
    QVBoxLayout *verticalLayout_2;
    QWidget *mp_widget_task_details;
    QGridLayout *gridLayout_2;
    QVBoxLayout *mp_layout_3;
    QLabel *mp_label_title;
    QGroupBox *mp_groupbox_media_type;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *mp_radio_mtauto;
    QRadioButton *mp_radio_mtdvd;
    QRadioButton *mp_radio_mtcd;
    QGroupBox *mp_groupbox_options;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *mp_radio_split_up;
    QRadioButton *mp_radio_dnot_split_up;
    QCheckBox *mp_checkbox_move;
    QCheckBox *mp_checkbox_rename;
    QLabel *mp_label_error_message;
    QSpacerItem *mp_spacer_3;

    void setupUi(QWidget *GameInstallerActivity)
    {
        if (GameInstallerActivity->objectName().isEmpty())
            GameInstallerActivity->setObjectName(QString::fromUtf8("GameInstallerActivity"));
        GameInstallerActivity->resize(900, 594);
        GameInstallerActivity->setAcceptDrops(true);
        GameInstallerActivity->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(GameInstallerActivity);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mp_layout = new QHBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_btn_back = new QPushButton(GameInstallerActivity);
        mp_btn_back->setObjectName(QString::fromUtf8("mp_btn_back"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/back"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_back->setIcon(icon);

        mp_layout->addWidget(mp_btn_back);

        mp_spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mp_layout->addItem(mp_spacer);

        mp_btn_install = new QPushButton(GameInstallerActivity);
        mp_btn_install->setObjectName(QString::fromUtf8("mp_btn_install"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/start"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_install->setIcon(icon1);

        mp_layout->addWidget(mp_btn_install);

        mp_btn_cancel = new QPushButton(GameInstallerActivity);
        mp_btn_cancel->setObjectName(QString::fromUtf8("mp_btn_cancel"));

        mp_layout->addWidget(mp_btn_cancel);


        verticalLayout_3->addLayout(mp_layout);

        mp_progressbar_overall = new QProgressBar(GameInstallerActivity);
        mp_progressbar_overall->setObjectName(QString::fromUtf8("mp_progressbar_overall"));
        mp_progressbar_overall->setValue(0);

        verticalLayout_3->addWidget(mp_progressbar_overall);

        mp_layout_4 = new QHBoxLayout();
        mp_layout_4->setObjectName(QString::fromUtf8("mp_layout_4"));
        mp_widget_tasks = new QWidget(GameInstallerActivity);
        mp_widget_tasks->setObjectName(QString::fromUtf8("mp_widget_tasks"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(14);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_widget_tasks->sizePolicy().hasHeightForWidth());
        mp_widget_tasks->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(mp_widget_tasks);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mp_tree_tasks = new QTreeWidget(mp_widget_tasks);
        mp_tree_tasks->setObjectName(QString::fromUtf8("mp_tree_tasks"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(7);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_tree_tasks->sizePolicy().hasHeightForWidth());
        mp_tree_tasks->setSizePolicy(sizePolicy1);
        mp_tree_tasks->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mp_tree_tasks->setProperty("showDropIndicator", QVariant(false));
        mp_tree_tasks->setAlternatingRowColors(true);
        mp_tree_tasks->setRootIsDecorated(false);
        mp_tree_tasks->setItemsExpandable(false);
        mp_tree_tasks->setAllColumnsShowFocus(true);
        mp_tree_tasks->setColumnCount(2);
        mp_tree_tasks->header()->setDefaultSectionSize(300);

        verticalLayout->addWidget(mp_tree_tasks);

        mp_layout_2 = new QHBoxLayout();
        mp_layout_2->setObjectName(QString::fromUtf8("mp_layout_2"));
        mp_btn_add_image = new QPushButton(mp_widget_tasks);
        mp_btn_add_image->setObjectName(QString::fromUtf8("mp_btn_add_image"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/add"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_add_image->setIcon(icon2);

        mp_layout_2->addWidget(mp_btn_add_image);

        mp_btn_add_disc = new QPushButton(mp_widget_tasks);
        mp_btn_add_disc->setObjectName(QString::fromUtf8("mp_btn_add_disc"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/disc"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_add_disc->setIcon(icon3);

        mp_layout_2->addWidget(mp_btn_add_disc);

        mp_spacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mp_layout_2->addItem(mp_spacer_2);

        mp_btn_remove = new QPushButton(mp_widget_tasks);
        mp_btn_remove->setObjectName(QString::fromUtf8("mp_btn_remove"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/delete"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_remove->setIcon(icon4);

        mp_layout_2->addWidget(mp_btn_remove);

        mp_btn_rename = new QPushButton(mp_widget_tasks);
        mp_btn_rename->setObjectName(QString::fromUtf8("mp_btn_rename"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/rename"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_rename->setIcon(icon5);

        mp_layout_2->addWidget(mp_btn_rename);


        verticalLayout->addLayout(mp_layout_2);


        mp_layout_4->addWidget(mp_widget_tasks);

        mp_widget_task_details_holder = new QWidget(GameInstallerActivity);
        mp_widget_task_details_holder->setObjectName(QString::fromUtf8("mp_widget_task_details_holder"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(5);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_widget_task_details_holder->sizePolicy().hasHeightForWidth());
        mp_widget_task_details_holder->setSizePolicy(sizePolicy2);
        mp_widget_task_details_holder->setMinimumSize(QSize(400, 0));
        mp_widget_task_details_holder->setMaximumSize(QSize(400, 16777215));
        verticalLayout_2 = new QVBoxLayout(mp_widget_task_details_holder);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mp_widget_task_details = new QWidget(mp_widget_task_details_holder);
        mp_widget_task_details->setObjectName(QString::fromUtf8("mp_widget_task_details"));
        gridLayout_2 = new QGridLayout(mp_widget_task_details);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mp_layout_3 = new QVBoxLayout();
        mp_layout_3->setObjectName(QString::fromUtf8("mp_layout_3"));
        mp_label_title = new QLabel(mp_widget_task_details);
        mp_label_title->setObjectName(QString::fromUtf8("mp_label_title"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        mp_label_title->setFont(font);
        mp_label_title->setText(QString::fromUtf8("The title"));
        mp_label_title->setWordWrap(true);
        mp_label_title->setTextInteractionFlags(Qt::TextSelectableByMouse);

        mp_layout_3->addWidget(mp_label_title);

        mp_groupbox_media_type = new QGroupBox(mp_widget_task_details);
        mp_groupbox_media_type->setObjectName(QString::fromUtf8("mp_groupbox_media_type"));
        verticalLayout_4 = new QVBoxLayout(mp_groupbox_media_type);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mp_radio_mtauto = new QRadioButton(mp_groupbox_media_type);
        mp_radio_mtauto->setObjectName(QString::fromUtf8("mp_radio_mtauto"));
        mp_radio_mtauto->setChecked(true);

        verticalLayout_4->addWidget(mp_radio_mtauto);

        mp_radio_mtdvd = new QRadioButton(mp_groupbox_media_type);
        mp_radio_mtdvd->setObjectName(QString::fromUtf8("mp_radio_mtdvd"));

        verticalLayout_4->addWidget(mp_radio_mtdvd);

        mp_radio_mtcd = new QRadioButton(mp_groupbox_media_type);
        mp_radio_mtcd->setObjectName(QString::fromUtf8("mp_radio_mtcd"));

        verticalLayout_4->addWidget(mp_radio_mtcd);


        mp_layout_3->addWidget(mp_groupbox_media_type);

        mp_groupbox_options = new QGroupBox(mp_widget_task_details);
        mp_groupbox_options->setObjectName(QString::fromUtf8("mp_groupbox_options"));
        verticalLayout_5 = new QVBoxLayout(mp_groupbox_options);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mp_radio_split_up = new QRadioButton(mp_groupbox_options);
        mp_radio_split_up->setObjectName(QString::fromUtf8("mp_radio_split_up"));

        verticalLayout_5->addWidget(mp_radio_split_up);

        mp_radio_dnot_split_up = new QRadioButton(mp_groupbox_options);
        mp_radio_dnot_split_up->setObjectName(QString::fromUtf8("mp_radio_dnot_split_up"));
        mp_radio_dnot_split_up->setChecked(true);

        verticalLayout_5->addWidget(mp_radio_dnot_split_up);

        mp_checkbox_move = new QCheckBox(mp_groupbox_options);
        mp_checkbox_move->setObjectName(QString::fromUtf8("mp_checkbox_move"));

        verticalLayout_5->addWidget(mp_checkbox_move);

        mp_checkbox_rename = new QCheckBox(mp_groupbox_options);
        mp_checkbox_rename->setObjectName(QString::fromUtf8("mp_checkbox_rename"));

        verticalLayout_5->addWidget(mp_checkbox_rename);


        mp_layout_3->addWidget(mp_groupbox_options);

        mp_label_error_message = new QLabel(mp_widget_task_details);
        mp_label_error_message->setObjectName(QString::fromUtf8("mp_label_error_message"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mp_label_error_message->sizePolicy().hasHeightForWidth());
        mp_label_error_message->setSizePolicy(sizePolicy3);
        mp_label_error_message->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(255, 87, 90);\n"
"}"));
        mp_label_error_message->setText(QString::fromUtf8("Error message"));
        mp_label_error_message->setWordWrap(true);
        mp_label_error_message->setTextInteractionFlags(Qt::TextSelectableByMouse);

        mp_layout_3->addWidget(mp_label_error_message);

        mp_spacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mp_layout_3->addItem(mp_spacer_3);


        gridLayout_2->addLayout(mp_layout_3, 0, 0, 1, 2);


        verticalLayout_2->addWidget(mp_widget_task_details);


        mp_layout_4->addWidget(mp_widget_task_details_holder);


        verticalLayout_3->addLayout(mp_layout_4);

        QWidget::setTabOrder(mp_btn_add_image, mp_btn_add_disc);
        QWidget::setTabOrder(mp_btn_add_disc, mp_btn_remove);
        QWidget::setTabOrder(mp_btn_remove, mp_btn_rename);
        QWidget::setTabOrder(mp_btn_rename, mp_radio_mtauto);
        QWidget::setTabOrder(mp_radio_mtauto, mp_radio_mtdvd);
        QWidget::setTabOrder(mp_radio_mtdvd, mp_radio_mtcd);
        QWidget::setTabOrder(mp_radio_mtcd, mp_radio_split_up);
        QWidget::setTabOrder(mp_radio_split_up, mp_radio_dnot_split_up);
        QWidget::setTabOrder(mp_radio_dnot_split_up, mp_checkbox_move);
        QWidget::setTabOrder(mp_checkbox_move, mp_checkbox_rename);
        QWidget::setTabOrder(mp_checkbox_rename, mp_btn_back);
        QWidget::setTabOrder(mp_btn_back, mp_btn_install);
        QWidget::setTabOrder(mp_btn_install, mp_btn_cancel);
        QWidget::setTabOrder(mp_btn_cancel, mp_tree_tasks);

        retranslateUi(GameInstallerActivity);

        QMetaObject::connectSlotsByName(GameInstallerActivity);
    } // setupUi

    void retranslateUi(QWidget *GameInstallerActivity)
    {
        mp_btn_back->setText(QCoreApplication::translate("GameInstallerActivity", "Back", nullptr));
        mp_btn_install->setText(QCoreApplication::translate("GameInstallerActivity", "&Install", nullptr));
        mp_btn_cancel->setText(QCoreApplication::translate("GameInstallerActivity", "Cancel", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mp_tree_tasks->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("GameInstallerActivity", "Status", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("GameInstallerActivity", "Title", nullptr));
        mp_btn_add_image->setText(QCoreApplication::translate("GameInstallerActivity", "&Add Image", nullptr));
        mp_btn_add_disc->setText(QCoreApplication::translate("GameInstallerActivity", "Add &Disc", nullptr));
        mp_btn_remove->setText(QCoreApplication::translate("GameInstallerActivity", "Remove", nullptr));
        mp_btn_rename->setText(QCoreApplication::translate("GameInstallerActivity", "Rename", nullptr));
        mp_groupbox_media_type->setTitle(QCoreApplication::translate("GameInstallerActivity", "Media Type", nullptr));
        mp_radio_mtauto->setText(QCoreApplication::translate("GameInstallerActivity", "Auto", nullptr));
        mp_radio_mtdvd->setText(QCoreApplication::translate("GameInstallerActivity", "DVD", nullptr));
        mp_radio_mtcd->setText(QCoreApplication::translate("GameInstallerActivity", "CD", nullptr));
        mp_groupbox_options->setTitle(QString());
#if QT_CONFIG(tooltip)
        mp_radio_split_up->setToolTip(QCoreApplication::translate("GameInstallerActivity", "<html><head/><body><p>It is the only way to run large games (larger than 4 GiB) from a USB stick. Since the OPL supports only the FAT32 file system, you should split up large files into parts.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_radio_split_up->setText(QCoreApplication::translate("GameInstallerActivity", "Split up ISO file into parts", nullptr));
#if QT_CONFIG(tooltip)
        mp_radio_dnot_split_up->setToolTip(QCoreApplication::translate("GameInstallerActivity", "<html><head/><body><p>It is the recommended method if you planning to run games through a local network. The ISO files will be placed in the DVD or the CD directory.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_radio_dnot_split_up->setText(QCoreApplication::translate("GameInstallerActivity", "Do not split up ISO file", nullptr));
        mp_checkbox_move->setText(QCoreApplication::translate("GameInstallerActivity", "Move ISO file instead of copy", nullptr));
        mp_checkbox_rename->setText(QCoreApplication::translate("GameInstallerActivity", "Add a game ID to filename", nullptr));
        (void)GameInstallerActivity;
    } // retranslateUi

};

namespace Ui {
    class GameInstallerActivity: public Ui_GameInstallerActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEINSTALLERACTIVITY_H
