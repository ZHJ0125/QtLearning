#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_Cancel_clicked()
{
    close();
}

void Widget::on_pushButton_OK_clicked()
{
    QString Name, Age, Number, Sex, Skill;
    QString str;

    /* lineEdit和SpinBox输入框处理 */
    Name = "姓名：" + ui->lineEdit_Name->text() + "\n";
    Age = "年龄：" + ui->spinBox_Age->text() + "\n";
    Number = "学号：" + ui->lineEdit_Number->text() + "\n";

    /* 单选框处理 */
    if(ui->radioButton_M->isChecked() == true){
        Sex = "性别：男\n";
    }
    else if(ui->radioButton_F->isChecked() == true){
        Sex = "性别：女\n";
    }

    /* 复选框处理 */
    Skill = "您的技能：";
    if(ui->checkBox_C->isChecked() == true){
        Skill += "C语言 ";
    }
    if(ui->checkBox_Java->isChecked() == true){
        Skill += "Java ";
    }
    if(ui->checkBox_Python->isChecked() == true){
        Skill += "Python ";
    }

    str = "您提交的信息为：\n\n" + Name + Number + Age + Sex + Skill;

    ui->label_Show->setText(str);
}
