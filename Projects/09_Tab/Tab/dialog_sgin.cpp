#include "dialog_sgin.h"
#include "ui_dialog_sgin.h"

Dialog_sgin::Dialog_sgin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_sgin)
{
    ui->setupUi(this);
}

Dialog_sgin::~Dialog_sgin()
{
    delete ui;
}
