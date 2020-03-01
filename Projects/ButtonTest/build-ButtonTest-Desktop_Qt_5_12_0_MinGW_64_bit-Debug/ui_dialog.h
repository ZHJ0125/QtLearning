/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QPushButton *pushButton;
    QPushButton *pushBtn1;
    QPushButton *pushBtn2;
    QPushButton *pushBtn3;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(10);
        Dialog->setFont(font);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 60, 81, 101));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 82, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 50, 82, 17));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 70, 82, 17));
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(200, 60, 121, 101));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 30, 70, 17));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 50, 70, 17));
        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 70, 70, 17));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 260, 75, 23));
        pushBtn1 = new QPushButton(Dialog);
        pushBtn1->setObjectName(QString::fromUtf8("pushBtn1"));
        pushBtn1->setGeometry(QRect(50, 190, 75, 23));
        pushBtn2 = new QPushButton(Dialog);
        pushBtn2->setObjectName(QString::fromUtf8("pushBtn2"));
        pushBtn2->setGeometry(QRect(150, 190, 75, 23));
        pushBtn3 = new QPushButton(Dialog);
        pushBtn3->setObjectName(QString::fromUtf8("pushBtn3"));
        pushBtn3->setGeometry(QRect(250, 190, 75, 23));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 81, 16));
        toolButton = new QToolButton(Dialog);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(250, 20, 25, 19));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "\345\215\225\351\200\211\346\241\206", nullptr));
        radioButton->setText(QApplication::translate("Dialog", "\345\215\225\351\200\2111", nullptr));
        radioButton_2->setText(QApplication::translate("Dialog", "\345\215\225\351\200\2112", nullptr));
        radioButton_3->setText(QApplication::translate("Dialog", "\345\215\225\351\200\2113", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\345\244\215\351\200\211\346\241\206", nullptr));
        checkBox->setText(QApplication::translate("Dialog", "\345\244\215\351\200\211\346\241\2061", nullptr));
        checkBox_2->setText(QApplication::translate("Dialog", "\345\244\215\351\200\211\346\241\2062", nullptr));
        checkBox_3->setText(QApplication::translate("Dialog", "\345\244\215\351\200\211\346\241\2063", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
        pushBtn1->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        pushBtn2->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        pushBtn3->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label->setText(QApplication::translate("Dialog", "\346\214\211\351\222\256\345\212\237\350\203\275\346\265\213\350\257\225", nullptr));
        toolButton->setText(QApplication::translate("Dialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
