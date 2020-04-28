/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_Show;
    QLabel *label_Title;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Number;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox_Age;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_Java;
    QCheckBox *checkBox_C;
    QCheckBox *checkBox_Python;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QRadioButton *radioButton_M;
    QRadioButton *radioButton_F;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(668, 411);
        label_Show = new QLabel(Widget);
        label_Show->setObjectName(QString::fromUtf8("label_Show"));
        label_Show->setGeometry(QRect(370, 100, 221, 211));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(12);
        label_Show->setFont(font);
        label_Show->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Title = new QLabel(Widget);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(260, 30, 111, 31));
        label_Title->setFont(font);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 290, 271, 31));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_OK = new QPushButton(widget);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));
        pushButton_OK->setFont(font);

        horizontalLayout_8->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(widget);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setFont(font);

        horizontalLayout_8->addWidget(pushButton_Cancel);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 100, 270, 169));
        widget1->setFont(font);
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lineEdit_Name = new QLineEdit(widget1);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Number = new QLineEdit(widget1);
        lineEdit_Number->setObjectName(QString::fromUtf8("lineEdit_Number"));
        lineEdit_Number->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_Number);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        spinBox_Age = new QSpinBox(widget1);
        spinBox_Age->setObjectName(QString::fromUtf8("spinBox_Age"));
        spinBox_Age->setMinimumSize(QSize(12, 0));
        spinBox_Age->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(spinBox_Age);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBox_Java = new QCheckBox(widget1);
        checkBox_Java->setObjectName(QString::fromUtf8("checkBox_Java"));
        checkBox_Java->setFont(font);

        horizontalLayout_6->addWidget(checkBox_Java);

        checkBox_C = new QCheckBox(widget1);
        checkBox_C->setObjectName(QString::fromUtf8("checkBox_C"));
        checkBox_C->setFont(font);

        horizontalLayout_6->addWidget(checkBox_C);

        checkBox_Python = new QCheckBox(widget1);
        checkBox_Python->setObjectName(QString::fromUtf8("checkBox_Python"));
        checkBox_Python->setFont(font);

        horizontalLayout_6->addWidget(checkBox_Python);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        radioButton_M = new QRadioButton(widget1);
        radioButton_M->setObjectName(QString::fromUtf8("radioButton_M"));
        radioButton_M->setFont(font);

        horizontalLayout_5->addWidget(radioButton_M);

        radioButton_F = new QRadioButton(widget1);
        radioButton_F->setObjectName(QString::fromUtf8("radioButton_F"));
        radioButton_F->setFont(font);

        horizontalLayout_5->addWidget(radioButton_F);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        horizontalLayout_5->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_Show->setText(QApplication::translate("Widget", "\346\202\250\347\232\204\344\277\241\346\201\257\345\260\206\346\230\276\347\244\272\345\234\250\350\277\231\351\207\214", nullptr));
        label_Title->setText(QApplication::translate("Widget", "QT\347\254\254\345\233\233\346\254\241\345\256\236\351\252\214", nullptr));
        pushButton_OK->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        pushButton_Cancel->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Widget", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("Widget", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Widget", "\346\212\200\350\203\275\357\274\232", nullptr));
        checkBox_Java->setText(QApplication::translate("Widget", "Java", nullptr));
        checkBox_C->setText(QApplication::translate("Widget", "C\350\257\255\350\250\200", nullptr));
        checkBox_Python->setText(QApplication::translate("Widget", "Python", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\200\247\345\210\253\357\274\232", nullptr));
        radioButton_M->setText(QApplication::translate("Widget", "\347\224\267", nullptr));
        radioButton_F->setText(QApplication::translate("Widget", "\345\245\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
