#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <myaction.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 添加菜单并且加入action
    MyAction *action = new MyAction;
    QMenu *editMenu = new QMenu;
    editMenu->setTitle("编辑(&E)");
    ui->menuBar->addMenu(editMenu);
    editMenu->addAction(action);

    // 生成工具栏菜单
    MyAction *action1 = new MyAction;
    ui->mainToolBar->addAction(action1);

    // 将action的getText()信号和这里的setText()槽进行关联
    connect(action, SIGNAL(getText(QString)), this, SLOT(setText(QString)));
    connect(action1, SIGNAL(getText(QString)), this, SLOT(setText(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setText(const QString &string) // 插入文本
{
    ui->textEdit->setText(string);              // 将获取的文本添加到编辑器中
}
