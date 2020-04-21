/********************************************************************************
** Form generated from reading UI file 'dialog_sgin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SGIN_H
#define UI_DIALOG_SGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_sgin
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_6;

    void setupUi(QDialog *Dialog_sgin)
    {
        if (Dialog_sgin->objectName().isEmpty())
            Dialog_sgin->setObjectName(QString::fromUtf8("Dialog_sgin"));
        Dialog_sgin->resize(345, 257);
        buttonBox = new QDialogButtonBox(Dialog_sgin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(140, 210, 171, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(Dialog_sgin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 40, 61, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        label_5->setFont(font);
        layoutWidget = new QWidget(Dialog_sgin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 80, 184, 122));
        layoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font);

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font);

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setInputMethodHints(Qt::ImhEmailCharactersOnly);

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        label_6 = new QLabel(Dialog_sgin);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 0, 111, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(12);
        label_6->setFont(font1);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit_4);
        label_2->setBuddy(lineEdit_2);
        label_4->setBuddy(lineEdit_3);
        label_3->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_4, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit);

        retranslateUi(Dialog_sgin);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_sgin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_sgin, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_sgin);
    } // setupUi

    void retranslateUi(QDialog *Dialog_sgin)
    {
        Dialog_sgin->setWindowTitle(QApplication::translate("Dialog_sgin", "Dialog", nullptr));
        label_5->setText(QApplication::translate("Dialog_sgin", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("Dialog_sgin", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Dialog_sgin", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QApplication::translate("Dialog_sgin", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Dialog_sgin", "\351\202\256\347\256\261\357\274\232", nullptr));
        lineEdit_4->setPlaceholderText(QApplication::translate("Dialog_sgin", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("Dialog_sgin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("Dialog_sgin", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("Dialog_sgin", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
        label_6->setText(QApplication::translate("Dialog_sgin", "\346\234\237\344\270\255\350\200\203\350\257\225\347\250\213\345\272\217 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_sgin: public Ui_Dialog_sgin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SGIN_H
