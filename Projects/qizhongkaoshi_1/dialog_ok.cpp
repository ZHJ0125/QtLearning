#include "dialog_ok.h"
#include "ui_dialog_ok.h"

Dialog_OK::Dialog_OK(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_OK)
{
    ui->setupUi(this);
}

Dialog_OK::~Dialog_OK()
{
    delete ui;
}

void Dialog_OK::on_pushButton_clicked()
{
    flag = 1;
    accept();
}

void Dialog_OK::on_pushButton_2_clicked()
{
    flag = 2;
    accept();
}
