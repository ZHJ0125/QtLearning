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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_Capture;
    QPushButton *pushButton_Close;
    QPushButton *pushButton_Video;
    QPushButton *pushButton_Video_Stop;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(855, 505);
        pushButton_Capture = new QPushButton(Widget);
        pushButton_Capture->setObjectName(QString::fromUtf8("pushButton_Capture"));
        pushButton_Capture->setGeometry(QRect(540, 420, 75, 23));
        pushButton_Close = new QPushButton(Widget);
        pushButton_Close->setObjectName(QString::fromUtf8("pushButton_Close"));
        pushButton_Close->setGeometry(QRect(720, 420, 75, 23));
        pushButton_Video = new QPushButton(Widget);
        pushButton_Video->setObjectName(QString::fromUtf8("pushButton_Video"));
        pushButton_Video->setGeometry(QRect(630, 420, 75, 23));
        pushButton_Video_Stop = new QPushButton(Widget);
        pushButton_Video_Stop->setObjectName(QString::fromUtf8("pushButton_Video_Stop"));
        pushButton_Video_Stop->setGeometry(QRect(630, 450, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton_Capture->setText(QApplication::translate("Widget", "\346\213\215\347\205\247", nullptr));
        pushButton_Close->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\347\233\270\346\234\272", nullptr));
        pushButton_Video->setText(QApplication::translate("Widget", "\345\275\225\345\203\217", nullptr));
        pushButton_Video_Stop->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\345\275\225\345\203\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
