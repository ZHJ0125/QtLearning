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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1055, 347);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(720, 230, 331, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(11);
        label->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\347\273\230\345\233\276\347\250\213\345\272\217\346\265\213\350\257\225\n"
"\345\256\236\347\216\260\345\212\237\350\203\275\357\274\232\347\273\230\345\210\266\347\237\251\345\275\242\346\241\206\343\200\201\345\233\276\347\211\207\351\225\234\345\203\217\343\200\201\347\272\277\346\256\265\346\227\213\350\275\254\n"
"\344\270\252\344\272\272\344\277\241\346\201\257\357\274\232\347\224\265\347\247\22117-2 \345\274\240\345\216\232\344\273\212 201723010237\n"
"\347\274\226\345\206\231\346\227\245\346\234\237\357\274\2322020\345\271\26405\346\234\21029\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
