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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSlider *horizontalSlider;
    QPushButton *pushButton_Play;
    QPushButton *pushButton_Pause;
    QPushButton *pushButton_Stop;
    QLabel *label_Music_Status;
    QPushButton *pushButton_Capture;
    QPushButton *pushButton_Close_Camera;
    QPushButton *pushButton_Open_Camera;
    QPushButton *pushButton_Start_Recorder;
    QPushButton *pushButton_Stop_Recorder;
    QComboBox *comboBox;
    QLabel *label_Music_1;
    QLabel *label_Music_2;
    QLabel *label_Music_Info;
    QLabel *label_Camera_1;
    QLabel *label_Camera_2;
    QLabel *label_Camera_Status;
    QLabel *label_Camera_Info;
    QLabel *label_Recorder_1;
    QPushButton *pushButton;
    QLabel *label_Recorder_2;
    QLabel *label_Recorder_Info;
    QLabel *label_Reocrder_3;
    QLabel *label_Reocrder_Time;
    QLabel *label_Music_3;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1036, 506);
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(680, 400, 331, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(10);
        horizontalSlider->setFont(font);
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_Play = new QPushButton(Widget);
        pushButton_Play->setObjectName(QString::fromUtf8("pushButton_Play"));
        pushButton_Play->setGeometry(QRect(560, 30, 91, 31));
        pushButton_Play->setFont(font);
        pushButton_Pause = new QPushButton(Widget);
        pushButton_Pause->setObjectName(QString::fromUtf8("pushButton_Pause"));
        pushButton_Pause->setGeometry(QRect(560, 60, 91, 31));
        pushButton_Pause->setFont(font);
        pushButton_Stop = new QPushButton(Widget);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        pushButton_Stop->setGeometry(QRect(560, 90, 91, 31));
        pushButton_Stop->setFont(font);
        label_Music_Status = new QLabel(Widget);
        label_Music_Status->setObjectName(QString::fromUtf8("label_Music_Status"));
        label_Music_Status->setGeometry(QRect(780, 30, 161, 31));
        label_Music_Status->setFont(font);
        pushButton_Capture = new QPushButton(Widget);
        pushButton_Capture->setObjectName(QString::fromUtf8("pushButton_Capture"));
        pushButton_Capture->setGeometry(QRect(560, 210, 91, 31));
        pushButton_Capture->setFont(font);
        pushButton_Close_Camera = new QPushButton(Widget);
        pushButton_Close_Camera->setObjectName(QString::fromUtf8("pushButton_Close_Camera"));
        pushButton_Close_Camera->setGeometry(QRect(560, 180, 91, 31));
        pushButton_Close_Camera->setFont(font);
        pushButton_Open_Camera = new QPushButton(Widget);
        pushButton_Open_Camera->setObjectName(QString::fromUtf8("pushButton_Open_Camera"));
        pushButton_Open_Camera->setGeometry(QRect(560, 150, 91, 31));
        pushButton_Open_Camera->setFont(font);
        pushButton_Start_Recorder = new QPushButton(Widget);
        pushButton_Start_Recorder->setObjectName(QString::fromUtf8("pushButton_Start_Recorder"));
        pushButton_Start_Recorder->setGeometry(QRect(560, 271, 91, 31));
        pushButton_Start_Recorder->setFont(font);
        pushButton_Stop_Recorder = new QPushButton(Widget);
        pushButton_Stop_Recorder->setObjectName(QString::fromUtf8("pushButton_Stop_Recorder"));
        pushButton_Stop_Recorder->setGeometry(QRect(560, 301, 91, 31));
        pushButton_Stop_Recorder->setFont(font);
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(680, 360, 331, 31));
        comboBox->setFont(font);
        label_Music_1 = new QLabel(Widget);
        label_Music_1->setObjectName(QString::fromUtf8("label_Music_1"));
        label_Music_1->setGeometry(QRect(680, 30, 101, 31));
        label_Music_1->setFont(font);
        label_Music_2 = new QLabel(Widget);
        label_Music_2->setObjectName(QString::fromUtf8("label_Music_2"));
        label_Music_2->setGeometry(QRect(680, 60, 111, 31));
        label_Music_2->setFont(font);
        label_Music_Info = new QLabel(Widget);
        label_Music_Info->setObjectName(QString::fromUtf8("label_Music_Info"));
        label_Music_Info->setGeometry(QRect(680, 90, 351, 31));
        label_Music_Info->setFont(font);
        label_Camera_1 = new QLabel(Widget);
        label_Camera_1->setObjectName(QString::fromUtf8("label_Camera_1"));
        label_Camera_1->setGeometry(QRect(680, 150, 91, 31));
        label_Camera_1->setFont(font);
        label_Camera_2 = new QLabel(Widget);
        label_Camera_2->setObjectName(QString::fromUtf8("label_Camera_2"));
        label_Camera_2->setGeometry(QRect(680, 180, 111, 31));
        label_Camera_2->setFont(font);
        label_Camera_Status = new QLabel(Widget);
        label_Camera_Status->setObjectName(QString::fromUtf8("label_Camera_Status"));
        label_Camera_Status->setGeometry(QRect(780, 150, 121, 31));
        label_Camera_Status->setFont(font);
        label_Camera_Info = new QLabel(Widget);
        label_Camera_Info->setObjectName(QString::fromUtf8("label_Camera_Info"));
        label_Camera_Info->setGeometry(QRect(680, 210, 351, 31));
        label_Camera_Info->setFont(font);
        label_Recorder_1 = new QLabel(Widget);
        label_Recorder_1->setObjectName(QString::fromUtf8("label_Recorder_1"));
        label_Recorder_1->setGeometry(QRect(560, 360, 121, 31));
        label_Recorder_1->setFont(font);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(920, 450, 91, 31));
        pushButton->setFont(font);
        label_Recorder_2 = new QLabel(Widget);
        label_Recorder_2->setObjectName(QString::fromUtf8("label_Recorder_2"));
        label_Recorder_2->setGeometry(QRect(680, 301, 111, 31));
        label_Recorder_2->setFont(font);
        label_Recorder_Info = new QLabel(Widget);
        label_Recorder_Info->setObjectName(QString::fromUtf8("label_Recorder_Info"));
        label_Recorder_Info->setGeometry(QRect(790, 301, 241, 31));
        label_Recorder_Info->setFont(font);
        label_Reocrder_3 = new QLabel(Widget);
        label_Reocrder_3->setObjectName(QString::fromUtf8("label_Reocrder_3"));
        label_Reocrder_3->setGeometry(QRect(680, 271, 81, 31));
        label_Reocrder_3->setFont(font);
        label_Reocrder_Time = new QLabel(Widget);
        label_Reocrder_Time->setObjectName(QString::fromUtf8("label_Reocrder_Time"));
        label_Reocrder_Time->setGeometry(QRect(770, 270, 201, 31));
        label_Reocrder_Time->setFont(font);
        label_Music_3 = new QLabel(Widget);
        label_Music_3->setObjectName(QString::fromUtf8("label_Music_3"));
        label_Music_3->setGeometry(QRect(560, 400, 101, 31));
        label_Music_3->setFont(font);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 370, 481, 111));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton_Play->setText(QApplication::translate("Widget", "\346\222\255\346\224\276\351\237\263\344\271\220", nullptr));
        pushButton_Pause->setText(QApplication::translate("Widget", "\346\232\202\345\201\234\351\237\263\344\271\220", nullptr));
        pushButton_Stop->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\351\237\263\344\271\220", nullptr));
        label_Music_Status->setText(QApplication::translate("Widget", "\345\207\206\345\244\207\345\260\261\347\273\252", nullptr));
        pushButton_Capture->setText(QApplication::translate("Widget", "\346\213\215\347\205\247", nullptr));
        pushButton_Close_Camera->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
        pushButton_Open_Camera->setText(QApplication::translate("Widget", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
        pushButton_Start_Recorder->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\345\275\225\351\237\263", nullptr));
        pushButton_Stop_Recorder->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\345\275\225\351\237\263", nullptr));
        label_Music_1->setText(QApplication::translate("Widget", "\346\222\255\346\224\276\345\231\250\347\212\266\346\200\201\357\274\232", nullptr));
        label_Music_2->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\351\237\263\344\271\220\344\277\241\346\201\257\357\274\232", nullptr));
        label_Music_Info->setText(QApplication::translate("Widget", "\346\234\252\350\216\267\345\217\226\351\237\263\344\271\220\344\277\241\346\201\257", nullptr));
        label_Camera_1->setText(QApplication::translate("Widget", "\346\221\204\345\203\217\345\244\264\347\212\266\346\200\201\357\274\232", nullptr));
        label_Camera_2->setText(QApplication::translate("Widget", "\347\205\247\347\211\207\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", nullptr));
        label_Camera_Status->setText(QApplication::translate("Widget", "\345\274\200\345\220\257", nullptr));
        label_Camera_Info->setText(QApplication::translate("Widget", "\346\232\202\346\227\240\347\205\247\347\211\207\350\267\257\345\276\204", nullptr));
        label_Recorder_1->setText(QApplication::translate("Widget", "\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\345\244\207\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        label_Recorder_2->setText(QApplication::translate("Widget", "\351\237\263\351\242\221\346\226\207\344\273\266\344\275\215\347\275\256\357\274\232", nullptr));
        label_Recorder_Info->setText(QApplication::translate("Widget", "\346\232\202\346\227\240\351\237\263\351\242\221\350\267\257\345\276\204", nullptr));
        label_Reocrder_3->setText(QApplication::translate("Widget", "\345\275\225\345\210\266\346\227\266\351\227\264\357\274\232", nullptr));
        label_Reocrder_Time->setText(QApplication::translate("Widget", "\346\234\252\345\275\225\345\210\266", nullptr));
        label_Music_3->setText(QApplication::translate("Widget", "\351\237\263\344\271\220\346\222\255\346\224\276\350\277\233\345\272\246\357\274\232", nullptr));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\351\237\263\350\247\206\351\242\221\346\222\255\346\224\276\346\265\213\350\257\225</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">          \345\212\237\350\203\275\350\257\264\346\230\216\357"
                        "\274\232 \346\234\254\347\250\213\345\272\217\347\224\250\344\272\216\346\265\213\350\257\225\351\237\263\344\271\220\346\222\255\346\224\276\343\200\201\346\221\204\345\203\217\345\244\264\345\222\214\345\275\225\351\237\263\345\212\237\350\203\275\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">          \344\275\234\350\200\205\344\277\241\346\201\257\357\274\232 \347\224\265\347\247\22117-2 \345\274\240\345\216\232\344\273\212 201723010237</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">          \346\272\220\344\273\243\347\240\201\357\274\232 </span><a href=\"https://github.com/ZHJ0125/QtLearning/tree/master/Projects/25_MyMedia\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">https://github.com/ZHJ0125/QtLearning/tree/master/Pr"
                        "ojects/25_MyMedia</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
