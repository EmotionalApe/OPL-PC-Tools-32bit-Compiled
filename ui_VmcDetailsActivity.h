/********************************************************************************
** Form generated from reading UI file 'VmcDetailsActivity.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMCDETAILSACTIVITY_H
#define UI_VMCDETAILSACTIVITY_H

#include <OplPcTools/UI/ClickableLabel.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VmcDetailsActivity
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *mp_layout_2;
    QPushButton *mp_btn_close;
    OplPcTools::UI::ClickableLabel *mp_label_vmc_title;
    QToolButton *mp_btn_rename;
    QFrame *mp_frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mp_layout;
    QToolButton *mp_btn_fs_back;
    QLineEdit *mp_edit_fs_path;
    QWidget *mp_widget_error_message;
    QVBoxLayout *verticalLayout_2;
    QLabel *mp_label_error_message;
    QTreeView *mp_tree_fs;

    void setupUi(QWidget *VmcDetailsActivity)
    {
        if (VmcDetailsActivity->objectName().isEmpty())
            VmcDetailsActivity->setObjectName(QString::fromUtf8("VmcDetailsActivity"));
        VmcDetailsActivity->resize(831, 576);
        VmcDetailsActivity->setWindowTitle(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(VmcDetailsActivity);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mp_layout_2 = new QHBoxLayout();
        mp_layout_2->setObjectName(QString::fromUtf8("mp_layout_2"));
        mp_btn_close = new QPushButton(VmcDetailsActivity);
        mp_btn_close->setObjectName(QString::fromUtf8("mp_btn_close"));
        mp_btn_close->setMinimumSize(QSize(0, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/back"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_close->setIcon(icon);

        mp_layout_2->addWidget(mp_btn_close);

        mp_label_vmc_title = new OplPcTools::UI::ClickableLabel(VmcDetailsActivity);
        mp_label_vmc_title->setObjectName(QString::fromUtf8("mp_label_vmc_title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_label_vmc_title->sizePolicy().hasHeightForWidth());
        mp_label_vmc_title->setSizePolicy(sizePolicy);
        mp_label_vmc_title->setMinimumSize(QSize(0, 24));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        mp_label_vmc_title->setFont(font);
        mp_label_vmc_title->setText(QString::fromUtf8(""));

        mp_layout_2->addWidget(mp_label_vmc_title);

        mp_btn_rename = new QToolButton(VmcDetailsActivity);
        mp_btn_rename->setObjectName(QString::fromUtf8("mp_btn_rename"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/rename"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_rename->setIcon(icon1);

        mp_layout_2->addWidget(mp_btn_rename);


        verticalLayout_3->addLayout(mp_layout_2);

        mp_frame = new QFrame(VmcDetailsActivity);
        mp_frame->setObjectName(QString::fromUtf8("mp_frame"));
        mp_frame->setFrameShape(QFrame::StyledPanel);
        mp_frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(mp_frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mp_layout = new QHBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_btn_fs_back = new QToolButton(mp_frame);
        mp_btn_fs_back->setObjectName(QString::fromUtf8("mp_btn_fs_back"));
        mp_btn_fs_back->setEnabled(false);
        mp_btn_fs_back->setText(QString::fromUtf8(""));
        mp_btn_fs_back->setArrowType(Qt::LeftArrow);

        mp_layout->addWidget(mp_btn_fs_back);

        mp_edit_fs_path = new QLineEdit(mp_frame);
        mp_edit_fs_path->setObjectName(QString::fromUtf8("mp_edit_fs_path"));
        mp_edit_fs_path->setReadOnly(true);

        mp_layout->addWidget(mp_edit_fs_path);


        verticalLayout->addLayout(mp_layout);

        mp_widget_error_message = new QWidget(mp_frame);
        mp_widget_error_message->setObjectName(QString::fromUtf8("mp_widget_error_message"));
        mp_widget_error_message->setStyleSheet(QString::fromUtf8("#mp_widget_error_message {\n"
"    background-color: rgba(233, 67, 37, 50);\n"
"    border: 2px solid rgb(233, 67, 37);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(mp_widget_error_message);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mp_label_error_message = new QLabel(mp_widget_error_message);
        mp_label_error_message->setObjectName(QString::fromUtf8("mp_label_error_message"));
        mp_label_error_message->setText(QString::fromUtf8("Error message"));
        mp_label_error_message->setWordWrap(true);
        mp_label_error_message->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(mp_label_error_message);


        verticalLayout->addWidget(mp_widget_error_message);

        mp_tree_fs = new QTreeView(mp_frame);
        mp_tree_fs->setObjectName(QString::fromUtf8("mp_tree_fs"));
        mp_tree_fs->setContextMenuPolicy(Qt::CustomContextMenu);
        mp_tree_fs->setAlternatingRowColors(true);
        mp_tree_fs->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mp_tree_fs->setSelectionBehavior(QAbstractItemView::SelectRows);
        mp_tree_fs->setIconSize(QSize(32, 32));
        mp_tree_fs->setRootIsDecorated(false);
        mp_tree_fs->setItemsExpandable(false);
        mp_tree_fs->setSortingEnabled(true);
        mp_tree_fs->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(mp_tree_fs);


        verticalLayout_3->addWidget(mp_frame);

        QWidget::setTabOrder(mp_tree_fs, mp_btn_close);
        QWidget::setTabOrder(mp_btn_close, mp_btn_rename);
        QWidget::setTabOrder(mp_btn_rename, mp_btn_fs_back);
        QWidget::setTabOrder(mp_btn_fs_back, mp_edit_fs_path);

        retranslateUi(VmcDetailsActivity);
        QObject::connect(mp_btn_close, SIGNAL(clicked()), VmcDetailsActivity, SLOT(close()));

        QMetaObject::connectSlotsByName(VmcDetailsActivity);
    } // setupUi

    void retranslateUi(QWidget *VmcDetailsActivity)
    {
        mp_btn_close->setText(QCoreApplication::translate("VmcDetailsActivity", "Back", nullptr));
#if QT_CONFIG(tooltip)
        mp_btn_rename->setToolTip(QCoreApplication::translate("VmcDetailsActivity", "Rename...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mp_btn_fs_back->setToolTip(QCoreApplication::translate("VmcDetailsActivity", "Back", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)VmcDetailsActivity;
    } // retranslateUi

};

namespace Ui {
    class VmcDetailsActivity: public Ui_VmcDetailsActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMCDETAILSACTIVITY_H
