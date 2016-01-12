/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QFormLayout *formLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *secondaryGroupBox;
    QFormLayout *formLayout_2;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QLabel *label_3;
    QGroupBox *tertiaryGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_5;
    QLabel *label_6;
    QComboBox *comboBox_6;
    QGroupBox *primaryGroupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QStringLiteral("SortDialog"));
        SortDialog->resize(459, 400);
        formLayout_4 = new QFormLayout(SortDialog);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(SortDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(SortDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(SortDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        formLayout_4->setLayout(0, QFormLayout::FieldRole, verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(1, QFormLayout::LabelRole, verticalSpacer_2);

        secondaryGroupBox = new QGroupBox(SortDialog);
        secondaryGroupBox->setObjectName(QStringLiteral("secondaryGroupBox"));
        formLayout_2 = new QFormLayout(secondaryGroupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        comboBox_3 = new QComboBox(secondaryGroupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox_3);

        label_4 = new QLabel(secondaryGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        comboBox_4 = new QComboBox(secondaryGroupBox);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBox_4);

        label_3 = new QLabel(secondaryGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);


        formLayout_4->setWidget(2, QFormLayout::LabelRole, secondaryGroupBox);

        tertiaryGroupBox = new QGroupBox(SortDialog);
        tertiaryGroupBox->setObjectName(QStringLiteral("tertiaryGroupBox"));
        formLayout_3 = new QFormLayout(tertiaryGroupBox);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_5 = new QLabel(tertiaryGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        comboBox_5 = new QComboBox(tertiaryGroupBox);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, comboBox_5);

        label_6 = new QLabel(tertiaryGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);

        comboBox_6 = new QComboBox(tertiaryGroupBox);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, comboBox_6);


        formLayout_4->setWidget(3, QFormLayout::LabelRole, tertiaryGroupBox);

        primaryGroupBox = new QGroupBox(SortDialog);
        primaryGroupBox->setObjectName(QStringLiteral("primaryGroupBox"));
        formLayout = new QFormLayout(primaryGroupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(primaryGroupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(primaryGroupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(primaryGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox_2 = new QComboBox(primaryGroupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_2);


        formLayout_4->setWidget(0, QFormLayout::LabelRole, primaryGroupBox);

        pushButton_4 = new QPushButton(SortDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, pushButton_4);

        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton);
        QWidget::setTabOrder(pushButton, comboBox);
        QWidget::setTabOrder(comboBox, comboBox_2);
        QWidget::setTabOrder(comboBox_2, comboBox_3);
        QWidget::setTabOrder(comboBox_3, comboBox_4);
        QWidget::setTabOrder(comboBox_4, comboBox_5);
        QWidget::setTabOrder(comboBox_5, comboBox_6);

        retranslateUi(SortDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), SortDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), SortDialog, SLOT(reject()));
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), secondaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(pushButton_3, SIGNAL(toggled(bool)), tertiaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(pushButton_4, SIGNAL(clicked()), SortDialog, SLOT(show()));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "SortDialog", 0));
        pushButton->setText(QApplication::translate("SortDialog", "Ok", 0));
        pushButton_2->setText(QApplication::translate("SortDialog", "Cancel", 0));
        pushButton_3->setText(QApplication::translate("SortDialog", "&More", 0));
        secondaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Primary Key", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
         << QApplication::translate("SortDialog", "haah", 0)
         << QApplication::translate("SortDialog", "hehe", 0)
        );
        label_4->setText(QApplication::translate("SortDialog", "TextLabel", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "UPUPUPUP", 0)
         << QApplication::translate("SortDialog", "DOWNDDDDDDD", 0)
        );
        label_3->setText(QApplication::translate("SortDialog", "TextLabel", 0));
        tertiaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Primary Key", 0));
        label_5->setText(QApplication::translate("SortDialog", "TextLabel", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
         << QApplication::translate("SortDialog", "haah", 0)
         << QApplication::translate("SortDialog", "hehe", 0)
        );
        label_6->setText(QApplication::translate("SortDialog", "TextLabel", 0));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "UPUPUPUP", 0)
         << QApplication::translate("SortDialog", "DOWNDDDDDDD", 0)
        );
        primaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Primary Key", 0));
        label->setText(QApplication::translate("SortDialog", "TextLabel", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
         << QApplication::translate("SortDialog", "haah", 0)
         << QApplication::translate("SortDialog", "hehe", 0)
        );
        label_2->setText(QApplication::translate("SortDialog", "TextLabel", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "UPUPUPUP", 0)
         << QApplication::translate("SortDialog", "DOWNDDDDDDD", 0)
        );
        pushButton_4->setText(QApplication::translate("SortDialog", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
