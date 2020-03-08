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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *sLabel;
    QComboBox *sComboBox;
    QLabel *aLabel;
    QSpinBox *aSpinBox;
    QLabel *eLabel;
    QLineEdit *eLineEdit;
    QLabel *mLabel;
    QLineEdit *mLineEdit;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(555, 228);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        Widget->setFont(font);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 521, 192));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        nLabel = new QLabel(widget);
        nLabel->setObjectName(QString::fromUtf8("nLabel"));
        nLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(widget);
        nLineEdit->setObjectName(QString::fromUtf8("nLineEdit"));
        nLineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        sLabel = new QLabel(widget);
        sLabel->setObjectName(QString::fromUtf8("sLabel"));
        sLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(widget);
        sComboBox->addItem(QString());
        sComboBox->addItem(QString());
        sComboBox->addItem(QString());
        sComboBox->setObjectName(QString::fromUtf8("sComboBox"));
        sComboBox->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, sComboBox);

        aLabel = new QLabel(widget);
        aLabel->setObjectName(QString::fromUtf8("aLabel"));
        aLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, aLabel);

        aSpinBox = new QSpinBox(widget);
        aSpinBox->setObjectName(QString::fromUtf8("aSpinBox"));
        aSpinBox->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, aSpinBox);

        eLabel = new QLabel(widget);
        eLabel->setObjectName(QString::fromUtf8("eLabel"));
        eLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, eLabel);

        eLineEdit = new QLineEdit(widget);
        eLineEdit->setObjectName(QString::fromUtf8("eLineEdit"));
        eLineEdit->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, eLineEdit);

        mLabel = new QLabel(widget);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));
        mLabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, mLabel);

        mLineEdit = new QLineEdit(widget);
        mLineEdit->setObjectName(QString::fromUtf8("mLineEdit"));
        mLineEdit->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, mLineEdit);


        horizontalLayout->addLayout(formLayout);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setFont(font);

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        sLabel->setBuddy(sComboBox);
        aLabel->setBuddy(aSpinBox);
        eLabel->setBuddy(eLineEdit);
        mLabel->setBuddy(mLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\346\204\217\350\247\201\345\217\215\351\246\210", nullptr));
        nLabel->setText(QApplication::translate("Widget", "\345\247\223\345\220\215(&N)\357\274\232", nullptr));
        sLabel->setText(QApplication::translate("Widget", "\346\200\247\345\210\253(&S)\357\274\232", nullptr));
        sComboBox->setItemText(0, QApplication::translate("Widget", "\347\224\267", nullptr));
        sComboBox->setItemText(1, QApplication::translate("Widget", "\345\245\263", nullptr));
        sComboBox->setItemText(2, QApplication::translate("Widget", "\346\234\252\347\237\245", nullptr));

        aLabel->setText(QApplication::translate("Widget", "\345\271\264\351\276\204(&A)\357\274\232", nullptr));
        eLabel->setText(QApplication::translate("Widget", "\351\202\256\347\256\261(&E)\357\274\232", nullptr));
        mLabel->setText(QApplication::translate("Widget", "\345\255\246\345\217\267(&M)\357\274\232", nullptr));
        textEdit->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"># \350\257\267\345\241\253\345\206\231\346\202\250\347\232\204\346\204\217\350\247\201 #</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
