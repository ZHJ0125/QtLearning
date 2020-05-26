#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    move_x = 380;
    move_y = 160;
    ui->pushButton->move(move_x, move_y);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    ui->label->setText("键盘按下");

    // 控制按钮移动
    if(event->key() == Qt::Key_W){
        move_y -= 10;
        ui->label->setText("按钮上移");
    }
    else if(event->key() == Qt::Key_S){
        move_y += 10;
        ui->label->setText("按钮下移");
    }
    else if(event->key() == Qt::Key_A){
        move_x -= 10;
        ui->label->setText("按钮左移");
    }
    else if(event->key() == Qt::Key_D){
        move_x += 10;
        ui->label->setText("按钮右移");
    }
    else QWidget::keyPressEvent(event);
    ui->pushButton->move(move_x, move_y);
}

void Widget::keyReleaseEvent(QKeyEvent *event)
{
    ui->label->setText("按键被释放");
    // 控制窗口缩放
    if(event->modifiers() == Qt::ControlModifier){
        if(event->key() == Qt::Key_M){
            ui->label->setText("窗口最大化");
            setWindowState(Qt::WindowMaximized);
        }
        else if(event->key() == Qt::Key_N){
            ui->label->setText("窗口最小化");
            setWindowState(Qt::WindowMinimized);
        }
        else if(event->key() == Qt::Key_O){
            ui->label->setText("窗口正常大小");
            setWindowState(Qt::WindowNoState);
        }
    }
}
