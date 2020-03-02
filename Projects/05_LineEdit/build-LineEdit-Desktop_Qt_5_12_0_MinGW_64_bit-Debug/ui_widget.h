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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_title;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(332, 262);
        label_1 = new QLabel(Widget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(70, 90, 61, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        label_1->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 120, 61, 20));
        label_2->setFont(font);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 150, 71, 20));
        label_3->setFont(font);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 180, 81, 21));
        label_4->setFont(font);
        label_title = new QLabel(Widget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(130, 30, 81, 21));
        label_title->setFont(font);
        lineEdit_1 = new QLineEdit(Widget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(150, 90, 113, 20));
        lineEdit_1->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 120, 113, 20));
        lineEdit_3 = new QLineEdit(Widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 150, 113, 20));
        lineEdit_4 = new QLineEdit(Widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 180, 113, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_1->setText(QApplication::translate("Widget", "\345\257\206\347\240\201\346\250\241\345\274\217\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\216\251\347\240\201\346\250\241\345\274\217\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Widget", "\351\252\214\350\257\201\347\240\201\346\250\241\345\274\217\357\274\232", nullptr));
        label_4->setText(QApplication::translate("Widget", "\350\207\252\345\212\250\345\256\214\346\210\220(H):", nullptr));
        label_title->setText(QApplication::translate("Widget", "LineEdit\346\265\213\350\257\225", nullptr));
        lineEdit_2->setInputMask(QApplication::translate("Widget", ">AA-90-bb-!aa\\#H;*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
