#include "dialog.h"
#include "ui_dialog.h"
#include <QColorDialog>
#include <QDebug>
#include <QFontDialog>
#include <QMessageBox>

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

void Dialog::on_pushButton_clicked()
{
    QColorDialog dialog(Qt::red, this);                // 创建对象
    dialog.setOption(QColorDialog::ShowAlphaChannel); // 显示alpha选项
    dialog.exec();                                    // 以模态方式运行对话框
    QColor mycolor = dialog.currentColor();             // 获取当前颜色

    QPalette palette = QPalette();
    palette.setColor(QPalette::Text, mycolor);
    setPalette(palette); // 注意这里, 修改了widget的调色板, 子窗口ui->lineEdit的颜色变化.

    qDebug() << "color: " << mycolor;
}

void Dialog::on_pushButton_2_clicked()
{
    // ok用于标记是否按下了“OK”按钮
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    // 如果按下“OK”按钮，那么让文本框使用新字体
    // 如果按下“Cancel”按钮，那么输出信息
    if (ok){
        ui->textEdit->setFont(font);
        ui->lineEdit->setFont(font);
    }
    else qDebug() << tr("没有选择字体！");
}

void Dialog::on_pushButton_4_clicked()
{
    int ret1 = QMessageBox::information(this, tr("消息提示"),tr("您的用户名是：")+ui->lineEdit->text(), QMessageBox::Ok);
    if(ret1 == QMessageBox::Ok) qDebug() << ui->lineEdit->text() + tr("已确定");
    int ret2 = QMessageBox::information(this, tr("消息提示"),tr("您的用户信息是：")+ui->textEdit->toPlainText(), QMessageBox::Ok);
    if(ret2 == QMessageBox::Ok) qDebug() << ui->textEdit->toPlainText() + tr("已确定");
}

void Dialog::on_pushButton_3_clicked()
{
    int ret = QMessageBox::critical(this, tr("严重错误对话框"),
                                     tr("发现一个严重错误！现在要关闭程序！"), QMessageBox::YesAll);
    if(ret == QMessageBox::YesAll) qDebug() << tr("错误");
}
