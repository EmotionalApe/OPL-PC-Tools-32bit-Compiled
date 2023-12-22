/********************************************************************************
** Form generated from reading UI file 'VmcPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMCPROPERTIESDIALOG_H
#define UI_VMCPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VmcPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *mp_panel_properties;
    QWidget *mp_scroll_area_content;
    QFormLayout *formLayout;
    QLabel *mp_label_magic;
    QLabel *mp_value_magic;
    QLabel *mp_label_version;
    QLabel *mp_value_version;
    QLabel *mp_label_pagesize;
    QLabel *mp_value_pagesize;
    QLabel *mp_label_cluster_size_2;
    QLabel *mp_value_cluster_size;
    QLabel *mp_label_pages_per_cluster;
    QLabel *mp_value_pages_per_cluster;
    QLabel *mp_label_pages_per_block;
    QLabel *mp_value_pages_per_block;
    QLabel *mp_label_cluster_size;
    QLabel *mp_value_clusters_per_card;
    QLabel *mp_label_alloc_offset;
    QLabel *mp_value_alloc_offset;
    QLabel *mp_label_alloc_end;
    QLabel *mp_value_alloc_end;
    QLabel *mp_label_root_dir_cluster;
    QLabel *mp_value_root_dir_cluster;
    QLabel *mp_label_backup_block1;
    QLabel *mp_value_backup_block1;
    QLabel *mp_label_backup_block2;
    QLabel *mp_value_backup_block2;
    QLabel *mp_label_card_type;
    QLabel *mp_value_card_type;
    QLabel *mp_label_card_flags;
    QLabel *mp_value_card_flags;
    QLabel *mp_label_fat_entries_per_cluster;
    QLabel *mp_value_fat_entries_per_cluster;
    QLabel *mp_label_clusters_per_block;
    QLabel *mp_value_clusters_per_block;
    QLabel *mp_label_card_format;
    QLabel *mp_value_card_format;
    QLabel *mp_label_max_allocatable_clusters;
    QLabel *mp_value_max_allocatable_clusters;
    QLabel *mp_label_bad_blocks;
    QLabel *mp_value_bad_blocks;
    QLabel *mp_label_ifc_list;
    QLabel *mp_value_ifc_list;
    QLabel *mp_label_error_message;
    QDialogButtonBox *mp_btnbox;

    void setupUi(QDialog *VmcPropertiesDialog)
    {
        if (VmcPropertiesDialog->objectName().isEmpty())
            VmcPropertiesDialog->setObjectName(QString::fromUtf8("VmcPropertiesDialog"));
        VmcPropertiesDialog->resize(568, 619);
        VmcPropertiesDialog->setModal(true);
        verticalLayout = new QVBoxLayout(VmcPropertiesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mp_panel_properties = new QScrollArea(VmcPropertiesDialog);
        mp_panel_properties->setObjectName(QString::fromUtf8("mp_panel_properties"));
        mp_panel_properties->setWidgetResizable(true);
        mp_scroll_area_content = new QWidget();
        mp_scroll_area_content->setObjectName(QString::fromUtf8("mp_scroll_area_content"));
        mp_scroll_area_content->setGeometry(QRect(0, -54, 534, 532));
        formLayout = new QFormLayout(mp_scroll_area_content);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mp_label_magic = new QLabel(mp_scroll_area_content);
        mp_label_magic->setObjectName(QString::fromUtf8("mp_label_magic"));
        mp_label_magic->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::LabelRole, mp_label_magic);

        mp_value_magic = new QLabel(mp_scroll_area_content);
        mp_value_magic->setObjectName(QString::fromUtf8("mp_value_magic"));
        mp_value_magic->setText(QString::fromUtf8(""));
        mp_value_magic->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::FieldRole, mp_value_magic);

        mp_label_version = new QLabel(mp_scroll_area_content);
        mp_label_version->setObjectName(QString::fromUtf8("mp_label_version"));
        mp_label_version->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::LabelRole, mp_label_version);

        mp_value_version = new QLabel(mp_scroll_area_content);
        mp_value_version->setObjectName(QString::fromUtf8("mp_value_version"));
        mp_value_version->setText(QString::fromUtf8(""));
        mp_value_version->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, mp_value_version);

        mp_label_pagesize = new QLabel(mp_scroll_area_content);
        mp_label_pagesize->setObjectName(QString::fromUtf8("mp_label_pagesize"));
        mp_label_pagesize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::LabelRole, mp_label_pagesize);

        mp_value_pagesize = new QLabel(mp_scroll_area_content);
        mp_value_pagesize->setObjectName(QString::fromUtf8("mp_value_pagesize"));
        mp_value_pagesize->setText(QString::fromUtf8(""));
        mp_value_pagesize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, mp_value_pagesize);

        mp_label_cluster_size_2 = new QLabel(mp_scroll_area_content);
        mp_label_cluster_size_2->setObjectName(QString::fromUtf8("mp_label_cluster_size_2"));
        mp_label_cluster_size_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::LabelRole, mp_label_cluster_size_2);

        mp_value_cluster_size = new QLabel(mp_scroll_area_content);
        mp_value_cluster_size->setObjectName(QString::fromUtf8("mp_value_cluster_size"));
        mp_value_cluster_size->setText(QString::fromUtf8(""));
        mp_value_cluster_size->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, mp_value_cluster_size);

        mp_label_pages_per_cluster = new QLabel(mp_scroll_area_content);
        mp_label_pages_per_cluster->setObjectName(QString::fromUtf8("mp_label_pages_per_cluster"));
        mp_label_pages_per_cluster->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::LabelRole, mp_label_pages_per_cluster);

        mp_value_pages_per_cluster = new QLabel(mp_scroll_area_content);
        mp_value_pages_per_cluster->setObjectName(QString::fromUtf8("mp_value_pages_per_cluster"));
        mp_value_pages_per_cluster->setText(QString::fromUtf8(""));
        mp_value_pages_per_cluster->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::FieldRole, mp_value_pages_per_cluster);

        mp_label_pages_per_block = new QLabel(mp_scroll_area_content);
        mp_label_pages_per_block->setObjectName(QString::fromUtf8("mp_label_pages_per_block"));
        mp_label_pages_per_block->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(5, QFormLayout::LabelRole, mp_label_pages_per_block);

        mp_value_pages_per_block = new QLabel(mp_scroll_area_content);
        mp_value_pages_per_block->setObjectName(QString::fromUtf8("mp_value_pages_per_block"));
        mp_value_pages_per_block->setText(QString::fromUtf8(""));
        mp_value_pages_per_block->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(5, QFormLayout::FieldRole, mp_value_pages_per_block);

        mp_label_cluster_size = new QLabel(mp_scroll_area_content);
        mp_label_cluster_size->setObjectName(QString::fromUtf8("mp_label_cluster_size"));
        mp_label_cluster_size->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(6, QFormLayout::LabelRole, mp_label_cluster_size);

        mp_value_clusters_per_card = new QLabel(mp_scroll_area_content);
        mp_value_clusters_per_card->setObjectName(QString::fromUtf8("mp_value_clusters_per_card"));
        mp_value_clusters_per_card->setText(QString::fromUtf8(""));
        mp_value_clusters_per_card->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(6, QFormLayout::FieldRole, mp_value_clusters_per_card);

        mp_label_alloc_offset = new QLabel(mp_scroll_area_content);
        mp_label_alloc_offset->setObjectName(QString::fromUtf8("mp_label_alloc_offset"));
        mp_label_alloc_offset->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(7, QFormLayout::LabelRole, mp_label_alloc_offset);

        mp_value_alloc_offset = new QLabel(mp_scroll_area_content);
        mp_value_alloc_offset->setObjectName(QString::fromUtf8("mp_value_alloc_offset"));
        mp_value_alloc_offset->setText(QString::fromUtf8(""));
        mp_value_alloc_offset->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(7, QFormLayout::FieldRole, mp_value_alloc_offset);

        mp_label_alloc_end = new QLabel(mp_scroll_area_content);
        mp_label_alloc_end->setObjectName(QString::fromUtf8("mp_label_alloc_end"));
        mp_label_alloc_end->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(8, QFormLayout::LabelRole, mp_label_alloc_end);

        mp_value_alloc_end = new QLabel(mp_scroll_area_content);
        mp_value_alloc_end->setObjectName(QString::fromUtf8("mp_value_alloc_end"));
        mp_value_alloc_end->setText(QString::fromUtf8(""));
        mp_value_alloc_end->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(8, QFormLayout::FieldRole, mp_value_alloc_end);

        mp_label_root_dir_cluster = new QLabel(mp_scroll_area_content);
        mp_label_root_dir_cluster->setObjectName(QString::fromUtf8("mp_label_root_dir_cluster"));
        mp_label_root_dir_cluster->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(9, QFormLayout::LabelRole, mp_label_root_dir_cluster);

        mp_value_root_dir_cluster = new QLabel(mp_scroll_area_content);
        mp_value_root_dir_cluster->setObjectName(QString::fromUtf8("mp_value_root_dir_cluster"));
        mp_value_root_dir_cluster->setText(QString::fromUtf8(""));
        mp_value_root_dir_cluster->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(9, QFormLayout::FieldRole, mp_value_root_dir_cluster);

        mp_label_backup_block1 = new QLabel(mp_scroll_area_content);
        mp_label_backup_block1->setObjectName(QString::fromUtf8("mp_label_backup_block1"));
        mp_label_backup_block1->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(10, QFormLayout::LabelRole, mp_label_backup_block1);

        mp_value_backup_block1 = new QLabel(mp_scroll_area_content);
        mp_value_backup_block1->setObjectName(QString::fromUtf8("mp_value_backup_block1"));
        mp_value_backup_block1->setText(QString::fromUtf8(""));
        mp_value_backup_block1->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(10, QFormLayout::FieldRole, mp_value_backup_block1);

        mp_label_backup_block2 = new QLabel(mp_scroll_area_content);
        mp_label_backup_block2->setObjectName(QString::fromUtf8("mp_label_backup_block2"));
        mp_label_backup_block2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(11, QFormLayout::LabelRole, mp_label_backup_block2);

        mp_value_backup_block2 = new QLabel(mp_scroll_area_content);
        mp_value_backup_block2->setObjectName(QString::fromUtf8("mp_value_backup_block2"));
        mp_value_backup_block2->setText(QString::fromUtf8(""));
        mp_value_backup_block2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(11, QFormLayout::FieldRole, mp_value_backup_block2);

        mp_label_card_type = new QLabel(mp_scroll_area_content);
        mp_label_card_type->setObjectName(QString::fromUtf8("mp_label_card_type"));
        mp_label_card_type->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(12, QFormLayout::LabelRole, mp_label_card_type);

        mp_value_card_type = new QLabel(mp_scroll_area_content);
        mp_value_card_type->setObjectName(QString::fromUtf8("mp_value_card_type"));
        mp_value_card_type->setText(QString::fromUtf8(""));
        mp_value_card_type->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(12, QFormLayout::FieldRole, mp_value_card_type);

        mp_label_card_flags = new QLabel(mp_scroll_area_content);
        mp_label_card_flags->setObjectName(QString::fromUtf8("mp_label_card_flags"));
        mp_label_card_flags->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(13, QFormLayout::LabelRole, mp_label_card_flags);

        mp_value_card_flags = new QLabel(mp_scroll_area_content);
        mp_value_card_flags->setObjectName(QString::fromUtf8("mp_value_card_flags"));
        mp_value_card_flags->setText(QString::fromUtf8(""));
        mp_value_card_flags->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(13, QFormLayout::FieldRole, mp_value_card_flags);

        mp_label_fat_entries_per_cluster = new QLabel(mp_scroll_area_content);
        mp_label_fat_entries_per_cluster->setObjectName(QString::fromUtf8("mp_label_fat_entries_per_cluster"));
        mp_label_fat_entries_per_cluster->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(14, QFormLayout::LabelRole, mp_label_fat_entries_per_cluster);

        mp_value_fat_entries_per_cluster = new QLabel(mp_scroll_area_content);
        mp_value_fat_entries_per_cluster->setObjectName(QString::fromUtf8("mp_value_fat_entries_per_cluster"));
        mp_value_fat_entries_per_cluster->setText(QString::fromUtf8(""));
        mp_value_fat_entries_per_cluster->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(14, QFormLayout::FieldRole, mp_value_fat_entries_per_cluster);

        mp_label_clusters_per_block = new QLabel(mp_scroll_area_content);
        mp_label_clusters_per_block->setObjectName(QString::fromUtf8("mp_label_clusters_per_block"));
        mp_label_clusters_per_block->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(15, QFormLayout::LabelRole, mp_label_clusters_per_block);

        mp_value_clusters_per_block = new QLabel(mp_scroll_area_content);
        mp_value_clusters_per_block->setObjectName(QString::fromUtf8("mp_value_clusters_per_block"));
        mp_value_clusters_per_block->setText(QString::fromUtf8(""));
        mp_value_clusters_per_block->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(15, QFormLayout::FieldRole, mp_value_clusters_per_block);

        mp_label_card_format = new QLabel(mp_scroll_area_content);
        mp_label_card_format->setObjectName(QString::fromUtf8("mp_label_card_format"));
        mp_label_card_format->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(16, QFormLayout::LabelRole, mp_label_card_format);

        mp_value_card_format = new QLabel(mp_scroll_area_content);
        mp_value_card_format->setObjectName(QString::fromUtf8("mp_value_card_format"));
        mp_value_card_format->setText(QString::fromUtf8(""));
        mp_value_card_format->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(16, QFormLayout::FieldRole, mp_value_card_format);

        mp_label_max_allocatable_clusters = new QLabel(mp_scroll_area_content);
        mp_label_max_allocatable_clusters->setObjectName(QString::fromUtf8("mp_label_max_allocatable_clusters"));
        mp_label_max_allocatable_clusters->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(17, QFormLayout::LabelRole, mp_label_max_allocatable_clusters);

        mp_value_max_allocatable_clusters = new QLabel(mp_scroll_area_content);
        mp_value_max_allocatable_clusters->setObjectName(QString::fromUtf8("mp_value_max_allocatable_clusters"));
        mp_value_max_allocatable_clusters->setText(QString::fromUtf8(""));
        mp_value_max_allocatable_clusters->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(17, QFormLayout::FieldRole, mp_value_max_allocatable_clusters);

        mp_label_bad_blocks = new QLabel(mp_scroll_area_content);
        mp_label_bad_blocks->setObjectName(QString::fromUtf8("mp_label_bad_blocks"));
        mp_label_bad_blocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(18, QFormLayout::LabelRole, mp_label_bad_blocks);

        mp_value_bad_blocks = new QLabel(mp_scroll_area_content);
        mp_value_bad_blocks->setObjectName(QString::fromUtf8("mp_value_bad_blocks"));
        mp_value_bad_blocks->setText(QString::fromUtf8(""));
        mp_value_bad_blocks->setWordWrap(true);
        mp_value_bad_blocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(18, QFormLayout::FieldRole, mp_value_bad_blocks);

        mp_label_ifc_list = new QLabel(mp_scroll_area_content);
        mp_label_ifc_list->setObjectName(QString::fromUtf8("mp_label_ifc_list"));
        mp_label_ifc_list->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(19, QFormLayout::LabelRole, mp_label_ifc_list);

        mp_value_ifc_list = new QLabel(mp_scroll_area_content);
        mp_value_ifc_list->setObjectName(QString::fromUtf8("mp_value_ifc_list"));
#if QT_CONFIG(tooltip)
        mp_value_ifc_list->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        mp_value_ifc_list->setWordWrap(true);
        mp_value_ifc_list->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(19, QFormLayout::FieldRole, mp_value_ifc_list);

        mp_panel_properties->setWidget(mp_scroll_area_content);

        verticalLayout->addWidget(mp_panel_properties);

        mp_label_error_message = new QLabel(VmcPropertiesDialog);
        mp_label_error_message->setObjectName(QString::fromUtf8("mp_label_error_message"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_label_error_message->sizePolicy().hasHeightForWidth());
        mp_label_error_message->setSizePolicy(sizePolicy);
        mp_label_error_message->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mp_label_error_message);

        mp_btnbox = new QDialogButtonBox(VmcPropertiesDialog);
        mp_btnbox->setObjectName(QString::fromUtf8("mp_btnbox"));
        mp_btnbox->setOrientation(Qt::Horizontal);
        mp_btnbox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(mp_btnbox);


        retranslateUi(VmcPropertiesDialog);

        QMetaObject::connectSlotsByName(VmcPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *VmcPropertiesDialog)
    {
        VmcPropertiesDialog->setWindowTitle(QCoreApplication::translate("VmcPropertiesDialog", "VMC Properties", nullptr));
        mp_label_magic->setText(QCoreApplication::translate("VmcPropertiesDialog", "Magic", nullptr));
        mp_label_version->setText(QCoreApplication::translate("VmcPropertiesDialog", "Version", nullptr));
        mp_label_pagesize->setText(QCoreApplication::translate("VmcPropertiesDialog", "Page Size", nullptr));
        mp_label_cluster_size_2->setText(QCoreApplication::translate("VmcPropertiesDialog", "Cluster Size", nullptr));
        mp_label_pages_per_cluster->setText(QCoreApplication::translate("VmcPropertiesDialog", "Pages per Cluster", nullptr));
        mp_label_pages_per_block->setText(QCoreApplication::translate("VmcPropertiesDialog", "Pages per Block", nullptr));
        mp_label_cluster_size->setText(QCoreApplication::translate("VmcPropertiesDialog", "Clusters per Card", nullptr));
        mp_label_alloc_offset->setText(QCoreApplication::translate("VmcPropertiesDialog", "Alloc Offset", nullptr));
        mp_label_alloc_end->setText(QCoreApplication::translate("VmcPropertiesDialog", "Alloc End", nullptr));
        mp_label_root_dir_cluster->setText(QCoreApplication::translate("VmcPropertiesDialog", "Root Directory Cluster", nullptr));
        mp_label_backup_block1->setText(QCoreApplication::translate("VmcPropertiesDialog", "Backup Block #1", nullptr));
        mp_label_backup_block2->setText(QCoreApplication::translate("VmcPropertiesDialog", "Backup Block #2", nullptr));
        mp_label_card_type->setText(QCoreApplication::translate("VmcPropertiesDialog", "Card Type", nullptr));
        mp_label_card_flags->setText(QCoreApplication::translate("VmcPropertiesDialog", "Card Flags", nullptr));
        mp_label_fat_entries_per_cluster->setText(QCoreApplication::translate("VmcPropertiesDialog", "FAT Entries per Cluster", nullptr));
        mp_label_clusters_per_block->setText(QCoreApplication::translate("VmcPropertiesDialog", "Clusters per Block", nullptr));
        mp_label_card_format->setText(QCoreApplication::translate("VmcPropertiesDialog", "Card Format", nullptr));
        mp_label_max_allocatable_clusters->setText(QCoreApplication::translate("VmcPropertiesDialog", "Max Allocatable Clusters", nullptr));
        mp_label_bad_blocks->setText(QCoreApplication::translate("VmcPropertiesDialog", "Bad Blocks", nullptr));
        mp_label_ifc_list->setText(QCoreApplication::translate("VmcPropertiesDialog", "IFC List", nullptr));
        mp_value_ifc_list->setText(QString());
        mp_label_error_message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VmcPropertiesDialog: public Ui_VmcPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMCPROPERTIESDIALOG_H
