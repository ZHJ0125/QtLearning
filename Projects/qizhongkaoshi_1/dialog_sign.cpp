#include "dialog_sign.h"
#include "ui_dialog_sign.h"

Dialog_sign::Dialog_sign(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_sign)
{
    ui->setupUi(this);
}

Dialog_sign::~Dialog_sign()
{
    delete ui;
}
