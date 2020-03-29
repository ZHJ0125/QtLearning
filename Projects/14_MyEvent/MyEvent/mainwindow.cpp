#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mylineedit.h"
#include <QKeyEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lineEdit = new MyLineEdit(this);
    lineEdit->move(100, 100);
    // 在mainwindow上为lineEdit安装事件过滤器
    lineEdit->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)       // 键盘按下事件
{
    if(event->modifiers() == Qt::ControlModifier){      // 是否按下Ctrl键
        if(event->key() == Qt::Key_M){                  // 是否按下M键
            setWindowState(Qt::WindowMaximized);        // 窗口最大化
            qDebug() << tr("最大化窗口");
        }
        else if(event->key() == Qt::Key_N){             // 是否按下N键
            setWindowState(Qt::WindowMinimized);        // 窗口最小化
            qDebug() << tr("最小化窗口");
        }
    }
    else{
        QWidget::keyPressEvent(event);
        qDebug() << tr("捕获到键盘输入: ") + event->key();
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event) // 事件过滤器
{
    if(obj == lineEdit){              // 如果是lineEdit部件上的事件
        if(event->type() == QEvent::KeyPress)
            qDebug() << tr("MainWindow的事件过滤器");
    }
    return QWidget::eventFilter(obj, event);
}
