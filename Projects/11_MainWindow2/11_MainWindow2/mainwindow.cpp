#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolButton>
#include <QSpinBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *editMenu = ui->menuBar->addMenu(tr("执行(&O)"));
    // 设置Debug菜单
    QAction *action_Debug = editMenu->addAction(
    QIcon(":/image/images/build.png"),tr("调试(&D)"));
    action_Debug->setShortcut(QKeySequence("Ctrl+D"));
    ui->mainToolBar->addAction(action_Debug);
    // 设置运行菜单
    QAction *action_Run = editMenu->addAction(
    QIcon(":/image/images/run.png"),tr("执行(&R)"));
    action_Run->setShortcut(QKeySequence("Ctrl+R"));
    ui->mainToolBar->addAction(action_Run);
    // 添加spinBox组件
    QSpinBox *spinBox = new QSpinBox(this);
    ui->mainToolBar->addWidget(spinBox);
    // 设置QToolButton组件
    QToolButton *toolBtn = new QToolButton(this);
    toolBtn->setText(tr("插入"));
    QMenu *InsertMenu = new QMenu(this);
    InsertMenu->addAction(tr("文字"));
    InsertMenu->addAction(tr("图片"));
    toolBtn->setMenu(InsertMenu);
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);
    ui->mainToolBar->addWidget(toolBtn);
    // 添加状态栏
    ui->statusBar->showMessage(tr("欢迎使用厚今的文本编辑器"), 10000);
    // 创建标签，设置标签样式并显示信息，将其以永久部件的形式添加到状态栏
    QLabel *permanent = new QLabel(this);
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText("简易文本编辑器");
    ui->statusBar->addPermanentWidget(permanent);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionxinjian_triggered()
{
    ui->textEdit->setText("您选择了‘新建’");
}

void MainWindow::on_actionopen_triggered()
{
    ui->textEdit->setText("您选择了‘打开’");
}

void MainWindow::on_actioncopy_triggered()
{
    ui->textEdit->setText("您选择了‘复制’");
}

void MainWindow::on_actionpaste_triggered()
{
    ui->textEdit->setText("您选择了‘粘贴’");
}

void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->setText("您选择了‘文本注释’操作");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->setText("您选择了‘取消注释’操作");
}
