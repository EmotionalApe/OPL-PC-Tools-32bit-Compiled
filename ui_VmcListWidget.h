/********************************************************************************
** Form generated from reading UI file 'VmcListWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMCLISTWIDGET_H
#define UI_VMCLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VmcListWidget
{
public:
    QAction *mp_action_create_vmc;
    QAction *mp_action_delete_vmc;
    QAction *mp_action_rename_vmc;
    QAction *mp_action_properties;
    QAction *mp_action_export;
    QHBoxLayout *horizontalLayout;
    QWidget *mp_widget_toolbar;
    QVBoxLayout *verticalLayout;
    QToolButton *mp_btn_rename_vmc;
    QToolButton *mp_btn_delete_vmc;
    QToolButton *mp_btn_export;
    QSpacerItem *mp_spacer;
    QToolButton *mp_btn_create_vmc;
    QVBoxLayout *mp_layout;
    QLineEdit *mp_edit_filter;
    QTreeView *mp_tree_vmcs;

    void setupUi(QWidget *VmcListWidget)
    {
        if (VmcListWidget->objectName().isEmpty())
            VmcListWidget->setObjectName(QString::fromUtf8("VmcListWidget"));
        VmcListWidget->resize(804, 485);
        VmcListWidget->setWindowTitle(QString::fromUtf8(""));
        mp_action_create_vmc = new QAction(VmcListWidget);
        mp_action_create_vmc->setObjectName(QString::fromUtf8("mp_action_create_vmc"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_create_vmc->setIcon(icon);
#if QT_CONFIG(shortcut)
        mp_action_create_vmc->setShortcut(QString::fromUtf8("Ins"));
#endif // QT_CONFIG(shortcut)
        mp_action_delete_vmc = new QAction(VmcListWidget);
        mp_action_delete_vmc->setObjectName(QString::fromUtf8("mp_action_delete_vmc"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/delete"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_delete_vmc->setIcon(icon1);
#if QT_CONFIG(shortcut)
        mp_action_delete_vmc->setShortcut(QString::fromUtf8("Del"));
#endif // QT_CONFIG(shortcut)
        mp_action_rename_vmc = new QAction(VmcListWidget);
        mp_action_rename_vmc->setObjectName(QString::fromUtf8("mp_action_rename_vmc"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/rename"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_rename_vmc->setIcon(icon2);
#if QT_CONFIG(shortcut)
        mp_action_rename_vmc->setShortcut(QString::fromUtf8("F2"));
#endif // QT_CONFIG(shortcut)
        mp_action_properties = new QAction(VmcListWidget);
        mp_action_properties->setObjectName(QString::fromUtf8("mp_action_properties"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/edit"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_properties->setIcon(icon3);
#if QT_CONFIG(shortcut)
        mp_action_properties->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        mp_action_export = new QAction(VmcListWidget);
        mp_action_export->setObjectName(QString::fromUtf8("mp_action_export"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/save"), QSize(), QIcon::Normal, QIcon::Off);
        mp_action_export->setIcon(icon4);
#if QT_CONFIG(shortcut)
        mp_action_export->setShortcut(QString::fromUtf8("Ctrl+E"));
#endif // QT_CONFIG(shortcut)
        horizontalLayout = new QHBoxLayout(VmcListWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mp_widget_toolbar = new QWidget(VmcListWidget);
        mp_widget_toolbar->setObjectName(QString::fromUtf8("mp_widget_toolbar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_widget_toolbar->sizePolicy().hasHeightForWidth());
        mp_widget_toolbar->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(mp_widget_toolbar);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mp_btn_rename_vmc = new QToolButton(mp_widget_toolbar);
        mp_btn_rename_vmc->setObjectName(QString::fromUtf8("mp_btn_rename_vmc"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_btn_rename_vmc->sizePolicy().hasHeightForWidth());
        mp_btn_rename_vmc->setSizePolicy(sizePolicy1);
        mp_btn_rename_vmc->setText(QString::fromUtf8(""));
        mp_btn_rename_vmc->setIconSize(QSize(32, 32));
        mp_btn_rename_vmc->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_rename_vmc->setAutoRaise(true);

        verticalLayout->addWidget(mp_btn_rename_vmc);

        mp_btn_delete_vmc = new QToolButton(mp_widget_toolbar);
        mp_btn_delete_vmc->setObjectName(QString::fromUtf8("mp_btn_delete_vmc"));
        sizePolicy1.setHeightForWidth(mp_btn_delete_vmc->sizePolicy().hasHeightForWidth());
        mp_btn_delete_vmc->setSizePolicy(sizePolicy1);
        mp_btn_delete_vmc->setIconSize(QSize(32, 32));
        mp_btn_delete_vmc->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_delete_vmc->setAutoRaise(true);

        verticalLayout->addWidget(mp_btn_delete_vmc);

        mp_btn_export = new QToolButton(mp_widget_toolbar);
        mp_btn_export->setObjectName(QString::fromUtf8("mp_btn_export"));
        sizePolicy1.setHeightForWidth(mp_btn_export->sizePolicy().hasHeightForWidth());
        mp_btn_export->setSizePolicy(sizePolicy1);
        mp_btn_export->setText(QString::fromUtf8(""));
        mp_btn_export->setIconSize(QSize(32, 32));
        mp_btn_export->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_export->setAutoRaise(true);

        verticalLayout->addWidget(mp_btn_export);

        mp_spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(mp_spacer);

        mp_btn_create_vmc = new QToolButton(mp_widget_toolbar);
        mp_btn_create_vmc->setObjectName(QString::fromUtf8("mp_btn_create_vmc"));
        sizePolicy1.setHeightForWidth(mp_btn_create_vmc->sizePolicy().hasHeightForWidth());
        mp_btn_create_vmc->setSizePolicy(sizePolicy1);
        mp_btn_create_vmc->setIconSize(QSize(32, 32));
        mp_btn_create_vmc->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mp_btn_create_vmc->setAutoRaise(true);

        verticalLayout->addWidget(mp_btn_create_vmc);


        horizontalLayout->addWidget(mp_widget_toolbar);

        mp_layout = new QVBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_edit_filter = new QLineEdit(VmcListWidget);
        mp_edit_filter->setObjectName(QString::fromUtf8("mp_edit_filter"));
        mp_edit_filter->setClearButtonEnabled(true);

        mp_layout->addWidget(mp_edit_filter);

        mp_tree_vmcs = new QTreeView(VmcListWidget);
        mp_tree_vmcs->setObjectName(QString::fromUtf8("mp_tree_vmcs"));
        mp_tree_vmcs->setContextMenuPolicy(Qt::CustomContextMenu);
        mp_tree_vmcs->setAlternatingRowColors(true);
        mp_tree_vmcs->setRootIsDecorated(false);
        mp_tree_vmcs->setItemsExpandable(false);
        mp_tree_vmcs->setSortingEnabled(true);
        mp_tree_vmcs->setAllColumnsShowFocus(true);
        mp_tree_vmcs->setExpandsOnDoubleClick(false);
        mp_tree_vmcs->header()->setVisible(false);

        mp_layout->addWidget(mp_tree_vmcs);


        horizontalLayout->addLayout(mp_layout);

        QWidget::setTabOrder(mp_btn_rename_vmc, mp_btn_delete_vmc);
        QWidget::setTabOrder(mp_btn_delete_vmc, mp_btn_create_vmc);
        QWidget::setTabOrder(mp_btn_create_vmc, mp_edit_filter);
        QWidget::setTabOrder(mp_edit_filter, mp_tree_vmcs);

        retranslateUi(VmcListWidget);

        QMetaObject::connectSlotsByName(VmcListWidget);
    } // setupUi

    void retranslateUi(QWidget *VmcListWidget)
    {
        mp_action_create_vmc->setText(QCoreApplication::translate("VmcListWidget", "Create", nullptr));
#if QT_CONFIG(tooltip)
        mp_action_create_vmc->setToolTip(QCoreApplication::translate("VmcListWidget", "Create VMC", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_action_delete_vmc->setText(QCoreApplication::translate("VmcListWidget", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        mp_action_delete_vmc->setToolTip(QCoreApplication::translate("VmcListWidget", "Delete VMC", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_action_rename_vmc->setText(QCoreApplication::translate("VmcListWidget", "Rename", nullptr));
#if QT_CONFIG(tooltip)
        mp_action_rename_vmc->setToolTip(QCoreApplication::translate("VmcListWidget", "Rename VMC", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_action_properties->setText(QCoreApplication::translate("VmcListWidget", "Properties", nullptr));
        mp_action_export->setText(QCoreApplication::translate("VmcListWidget", "Export", nullptr));
        mp_edit_filter->setPlaceholderText(QCoreApplication::translate("VmcListWidget", "Filter", nullptr));
        (void)VmcListWidget;
    } // retranslateUi

};

namespace Ui {
    class VmcListWidget: public Ui_VmcListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMCLISTWIDGET_H
