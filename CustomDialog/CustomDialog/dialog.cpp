#include "dialog.h"
#include "ui_dialog.h"
#include <QColorDialog>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked()
{
    close();
}

void Dialog::on_pushButton_clicked()
{
    QColorDialog dialog(Qt::red,this);                // 创建对象
    dialog.setOption(QColorDialog::ShowAlphaChannel); // 显示alpha选项
    dialog.exec();                                    // 以模态方式运行对话框
    QColor color = dialog.currentColor();             // 获取当前颜色
    qDebug()<<"color:"<<color;                        // 输出颜色信息
}
