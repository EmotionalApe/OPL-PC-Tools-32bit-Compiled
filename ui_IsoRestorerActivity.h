/********************************************************************************
** Form generated from reading UI file 'IsoRestorerActivity.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISORESTORERACTIVITY_H
#define UI_ISORESTORERACTIVITY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IsoRestorerActivity
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *mp_layout;
    QPushButton *mp_btn_back;
    QLabel *mp_label_title;
    QFrame *mp_frame;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *mp_progress_bar;
    QLabel *mp_label_status;
    QSpacerItem *mp_spacer;
    QDialogButtonBox *mp_button_box;

    void setupUi(QWidget *IsoRestorerActivity)
    {
        if (IsoRestorerActivity->objectName().isEmpty())
            IsoRestorerActivity->setObjectName(QString::fromUtf8("IsoRestorerActivity"));
        IsoRestorerActivity->resize(857, 527);
        IsoRestorerActivity->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_3 = new QVBoxLayout(IsoRestorerActivity);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mp_layout = new QHBoxLayout();
        mp_layout->setObjectName(QString::fromUtf8("mp_layout"));
        mp_btn_back = new QPushButton(IsoRestorerActivity);
        mp_btn_back->setObjectName(QString::fromUtf8("mp_btn_back"));
        mp_btn_back->setMinimumSize(QSize(0, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/back"), QSize(), QIcon::Normal, QIcon::Off);
        mp_btn_back->setIcon(icon);

        mp_layout->addWidget(mp_btn_back);

        mp_label_title = new QLabel(IsoRestorerActivity);
        mp_label_title->setObjectName(QString::fromUtf8("mp_label_title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_label_title->sizePolicy().hasHeightForWidth());
        mp_label_title->setSizePolicy(sizePolicy);
        mp_label_title->setMinimumSize(QSize(0, 24));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        mp_label_title->setFont(font);
        mp_label_title->setText(QString::fromUtf8(""));

        mp_layout->addWidget(mp_label_title);


        verticalLayout_3->addLayout(mp_layout);

        mp_frame = new QFrame(IsoRestorerActivity);
        mp_frame->setObjectName(QString::fromUtf8("mp_frame"));
        mp_frame->setFrameShape(QFrame::StyledPanel);
        mp_frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(mp_frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mp_progress_bar = new QProgressBar(mp_frame);
        mp_progress_bar->setObjectName(QString::fromUtf8("mp_progress_bar"));
        mp_progress_bar->setValue(0);

        verticalLayout_2->addWidget(mp_progress_bar);

        mp_label_status = new QLabel(mp_frame);
        mp_label_status->setObjectName(QString::fromUtf8("mp_label_status"));
        mp_label_status->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(mp_label_status);

        mp_spacer = new QSpacerItem(20, 386, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(mp_spacer);


        verticalLayout_3->addWidget(mp_frame);

        mp_button_box = new QDialogButtonBox(IsoRestorerActivity);
        mp_button_box->setObjectName(QString::fromUtf8("mp_button_box"));
        mp_button_box->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout_3->addWidget(mp_button_box);


        retranslateUi(IsoRestorerActivity);

        QMetaObject::connectSlotsByName(IsoRestorerActivity);
    } // setupUi

    void retranslateUi(QWidget *IsoRestorerActivity)
    {
        mp_btn_back->setText(QCoreApplication::translate("IsoRestorerActivity", "Back", nullptr));
        mp_label_status->setText(QString());
        (void)IsoRestorerActivity;
    } // retranslateUi

};

namespace Ui {
    class IsoRestorerActivity: public Ui_IsoRestorerActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISORESTORERACTIVITY_H
