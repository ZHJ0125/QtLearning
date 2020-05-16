#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->textEdit->setFont(QFont(tr("Microsoft YaHei"), 14));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)    // 鼠标按下事件
{
    if(event->button() == Qt::LeftButton){            // 如果是鼠标左键按下
        ui->textEdit->setText("鼠标左键被按下");
        QCursor cursor;
        cursor.setShape(Qt::ClosedHandCursor);
        QApplication::setOverrideCursor(cursor);      // 使鼠标指针暂时改变形状
        offset = event->globalPos() - pos();          // 获取指针位置和窗口位置的差值
    }
    else if(event->button() == Qt::RightButton){      // 如果是鼠标右键按下
        ui->textEdit->setText("鼠标右键被按下");
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)      // 鼠标移动事件
{
    ui->textEdit->setText("鼠标发生了移动");
    if(event->buttons() & Qt::LeftButton){             // 这里必须使用buttons()
        ui->textEdit->setText("鼠标左键拖动");
        QPoint temp;
        temp = event->globalPos() - offset;
        move(temp);        // 使用鼠标指针当前的位置减去差值，就得到了窗口应该移动的位置
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *event)    // 鼠标释放事件
{
    ui->textEdit->setText("鼠标被释放");
    Q_UNUSED(event);
    QApplication::restoreOverrideCursor();
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event) // 鼠标双击事件
{
    ui->textEdit->setText("鼠标产生了双击");
    if(event->button() == Qt::LeftButton){              // 如果是鼠标左键按下
        if(windowState() != Qt::WindowFullScreen){      // 如果现在不是全屏
            ui->textEdit->setText("鼠标左键双击，切换为全屏模式");
            setWindowState(Qt::WindowFullScreen);       // 将窗口设置为全屏
        }
        else{
            ui->textEdit->setText("鼠标左键双击，切换为正常窗口模式");
            setWindowState(Qt::WindowNoState);          // 否则恢复以前的大小
        }
    }
}

void Widget::wheelEvent(QWheelEvent *event)   // 滚轮事件
{
    if(event->delta() > 0){                    // 当滚轮远离使用者时
        ui->textEdit->setText("滚轮事件，文字放大");
        ui->textEdit->zoomIn();                // 进行放大
    }else{                                     // 当滚轮向使用者方向旋转时
        ui->textEdit->setText("滚轮事件，文字缩小");
        ui->textEdit->zoomOut();               // 进行缩小
    }
}
