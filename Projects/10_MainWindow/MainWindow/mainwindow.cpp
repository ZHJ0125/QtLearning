#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *editMenu = ui->menuBar->addMenu("编译(&B)");
    QAction *action_Open = editMenu->addAction(
    QIcon(":/image/images/build.png"),tr("编译全部(&A)"));
    action_Open->setShortcut(QKeySequence("Ctrl+A"));
    //ui->mainToolBar->addAction(action_Open);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionnew_triggered()
{
    ui->label->setText("新建文件");
}

void MainWindow::on_actionopen_triggered()
{
    ui->label->setText("打开文件");
}

void MainWindow::on_actionche_triggered()
{
    ui->label->setText("撤销");
}

void MainWindow::on_actionshan_triggered()
{
    ui->label->setText("复制");
}

void MainWindow::on_actionzz_triggered()
{
    ui->label->setText("粘贴");
}
