#include "dialog.h"
#include "ui_dialog.h"
#include <QMenu>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->pushBtn1->setText(tr("&nihao"));   // 指定Alt+N为快捷键
    ui->pushBtn2->setText(tr("帮助(&H)"));
    ui->pushBtn2->setIcon(QIcon("../mybutton/images/help.png"));
    ui->pushBtn3->setText(tr("z&oom"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("../mybutton/images/zoom-in.png"), tr("放大"));
    ui->pushBtn3->setMenu(menu);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    close();
}
