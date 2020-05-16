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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSlider *horizontalSlider;
    QPushButton *pushButton_Play;
    QPushButton *pushButton_Pause;
    QPushButton *pushButton_Stop;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 120, 321, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_Play = new QPushButton(Widget);
        pushButton_Play->setObjectName(QString::fromUtf8("pushButton_Play"));
        pushButton_Play->setGeometry(QRect(60, 180, 75, 23));
        pushButton_Pause = new QPushButton(Widget);
        pushButton_Pause->setObjectName(QString::fromUtf8("pushButton_Pause"));
        pushButton_Pause->setGeometry(QRect(160, 180, 75, 23));
        pushButton_Stop = new QPushButton(Widget);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        pushButton_Stop->setGeometry(QRect(250, 180, 75, 23));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 220, 241, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton_Play->setText(QApplication::translate("Widget", "\346\222\255\346\224\276", nullptr));
        pushButton_Pause->setText(QApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
        pushButton_Stop->setText(QApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        label->setText(QApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
