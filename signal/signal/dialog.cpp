#include "dialog.h"
#include "ui_dialog.h"

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
    QDialog *dialog = new QDialog(this);
    dialog->setModal(false);
    dialog->setWindowTitle("这是一个非模态窗口");
    dialog->show();
}
