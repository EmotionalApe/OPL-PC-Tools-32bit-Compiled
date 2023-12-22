/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *mp_layout;
    QLabel *mp_label;
    QSpacerItem *mp_spacer;
    QVBoxLayout *mp_layout_2;
    QLabel *mp_label_app_name;
    QLabel *mp_label_version;
    QSpacerItem *verticalSpacer;
    QLabel *mp_label_2;
    QLabel *mp_label_description;
    QSpacerItem *mp_spacer_3;
    QLabel *mp_label_url;
    QLabel *mp_label_license;
    QSpacerItem *mp_spacer_2;
    QDialogButtonBox *mp_button_box;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(500, 330);
        AboutDialog->setMinimumSize(QSize(500, 330));
        AboutDialog->setModal(true);
        horizontalLayout = new QHBoxLayout(AboutDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mp_layout = new QVBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_label = new QLabel(AboutDialog);
        mp_label->setObjectName(QString::fromUtf8("mp_label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_label->sizePolicy().hasHeightForWidth());
        mp_label->setSizePolicy(sizePolicy);
        mp_label->setMaximumSize(QSize(96, 96));
        mp_label->setPixmap(QPixmap(QString::fromUtf8(":/images/application")));
        mp_label->setScaledContents(true);
        mp_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        mp_layout->addWidget(mp_label);

        mp_spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mp_layout->addItem(mp_spacer);


        horizontalLayout->addLayout(mp_layout);

        mp_layout_2 = new QVBoxLayout();
        mp_layout_2->setObjectName(QString::fromUtf8("mp_layout_2"));
        mp_label_app_name = new QLabel(AboutDialog);
        mp_label_app_name->setObjectName(QString::fromUtf8("mp_label_app_name"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        mp_label_app_name->setFont(font);
        mp_label_app_name->setText(QString::fromUtf8("Application Name"));

        mp_layout_2->addWidget(mp_label_app_name);

        mp_label_version = new QLabel(AboutDialog);
        mp_label_version->setObjectName(QString::fromUtf8("mp_label_version"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        mp_label_version->setFont(font1);

        mp_layout_2->addWidget(mp_label_version);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        mp_layout_2->addItem(verticalSpacer);

        mp_label_2 = new QLabel(AboutDialog);
        mp_label_2->setObjectName(QString::fromUtf8("mp_label_2"));
        mp_label_2->setOpenExternalLinks(true);

        mp_layout_2->addWidget(mp_label_2);

        mp_label_description = new QLabel(AboutDialog);
        mp_label_description->setObjectName(QString::fromUtf8("mp_label_description"));
        mp_label_description->setTextFormat(Qt::RichText);
        mp_label_description->setOpenExternalLinks(true);

        mp_layout_2->addWidget(mp_label_description);

        mp_spacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        mp_layout_2->addItem(mp_spacer_3);

        mp_label_url = new QLabel(AboutDialog);
        mp_label_url->setObjectName(QString::fromUtf8("mp_label_url"));
        mp_label_url->setWordWrap(true);
        mp_label_url->setOpenExternalLinks(true);

        mp_layout_2->addWidget(mp_label_url);

        mp_label_license = new QLabel(AboutDialog);
        mp_label_license->setObjectName(QString::fromUtf8("mp_label_license"));
        mp_label_license->setWordWrap(true);
        mp_label_license->setOpenExternalLinks(true);

        mp_layout_2->addWidget(mp_label_license);

        mp_spacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mp_layout_2->addItem(mp_spacer_2);

        mp_button_box = new QDialogButtonBox(AboutDialog);
        mp_button_box->setObjectName(QString::fromUtf8("mp_button_box"));
        mp_button_box->setStandardButtons(QDialogButtonBox::Ok);

        mp_layout_2->addWidget(mp_button_box);


        horizontalLayout->addLayout(mp_layout_2);


        retranslateUi(AboutDialog);
        QObject::connect(mp_button_box, SIGNAL(accepted()), AboutDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Program", nullptr));
        mp_label->setText(QString());
        mp_label_version->setText(QCoreApplication::translate("AboutDialog", "Version %1", nullptr));
        mp_label_2->setText(QCoreApplication::translate("AboutDialog", "Tools for managing PS2 disc images used in OPL<br><a href=\"https://github.com/brainstream/OPL-PC-Tools\">Official GitHub page</a>", nullptr));
        mp_label_description->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>Copyright %1 \302\251 Sergey Smolyannikov<br/><a href=\"mailto:brainstream@yandex.ru\"><span style=\" text-decoration: underline; color:#2980b9;\">brainstream@yandex.ru</span></a></p></body></html>", nullptr));
        mp_label_url->setText(QCoreApplication::translate("AboutDialog", "<a href=\"https://github.com/ifcaro/Open-PS2-Loader\">OPL page on GitHub</a>", nullptr));
        mp_label_license->setText(QCoreApplication::translate("AboutDialog", "<a href=\"https://www.gnu.org/licenses/gpl-3.0.html\">License: GNU General Public License Version 3</a>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
