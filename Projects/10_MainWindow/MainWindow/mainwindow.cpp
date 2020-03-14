#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QToolButton"
#include "QSpinBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *editMenu = ui->menuBar->addMenu("编译(&B)");
    QAction *action_Open = editMenu->addAction(
    QIcon(":/image/images/build.png"),tr("编译全部(&A)"));
    action_Open->setShortcut(QKeySequence("Ctrl+A"));

    ui->mainToolBar->addAction(action_Open);
    QToolButton *toolBtn = new QToolButton(this);        // 创建QToolButton
    toolBtn->setText(tr("颜色"));
    QMenu *colorMenu = new QMenu(this);                  // 创建一个菜单
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    toolBtn->setMenu(colorMenu);                         // 添加菜单
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup); // 设置弹出模式
    ui->mainToolBar->addWidget(toolBtn);           // 向工具栏添加QToolButton按钮
    QSpinBox *spinBox = new QSpinBox(this);         // 创建QSpinBox
    ui->mainToolBar->addWidget(spinBox);            // 向工具栏添加QSpinBox部件

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
