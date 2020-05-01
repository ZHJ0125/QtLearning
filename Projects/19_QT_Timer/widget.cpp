#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QtGui>
#include <QDebug>
#include <QFont>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);  //创建一秒定时器
    connect(timer, SIGNAL(timeout()), this, SLOT(update())); //信号与槽关联
    timer->start(1000);
    setWindowTitle(tr("我的时钟--designed by ZHJ"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    int side = qMin(width(), height());             //获取窗口的较短边的值
    QPainter painter(this);                         //指定画图设备
    painter.fillRect(rect(),Qt::yellow);            //设置背景色
    painter.setRenderHint(QPainter::Antialiasing);  //开启抗锯齿
    painter.translate(width() / 2, height() / 2);   //将坐标移到窗口正中心
    painter.scale(side / 200.0, side / 200.0);      //进行缩放

    QPen pen;//设置画笔的，宽度，样式，颜色
    pen.setWidth(2);
    pen.setStyle(Qt::SolidLine);
    pen.setColor(Qt::red);

    painter.setPen(pen);
    for (int i = 0; i < 12; ++i)  //画表盘时针刻度
    {
        painter.drawLine(87, 0, 95, 0);
        painter.rotate(30);       //将坐标进行顺时针选择30度
    }

    pen.setWidth(1);
    pen.setColor(Qt::black);
    painter.setPen(pen);

    for (int i = 0; i < 60; ++i) //画表盘时针刻度
    {
        if(i%5!=0){
          painter.drawLine(90, 0, 95, 0);
        }
        painter.rotate(6);
    }

    pen.setColor(Qt::black);
    painter.setPen(pen);
    QFont font("Century");
    painter.setFont(font);

    //标时刻的数值
    painter.drawText(75,5,tr("3"));
    painter.drawText(-3,80,tr("6"));
    painter.drawText(-80,5,tr("9"));
    painter.drawText(-6,-75,tr("12"));
//    for (int i = 12; i > 0; i--)  //画表盘时针刻度
//    {
//        painter.drawText(-6,-75,QString(i));
//        painter.rotate(30);       //将坐标进行顺时针选择30度
//    }


//    painter.drawArc(-3,-3,6,6,0,360*16);//画中心小圆环
//    /////////////////////////////////////
    QTime time = QTime::currentTime();//获取当前系统时间
//    qDebug()<<time.hour();
//    qDebug()<<time.minute();
//    qDebug()<<time.second();

    //画时针
    painter.save();//在旋转坐标系前，保存原来坐标系
    painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
    pen.setColor(Qt::green);
    pen.setWidth(4);
    painter.setPen(pen);
    painter.drawLine(0,0,0,-60);
    painter.restore();//在旋转坐标系后，恢复原来坐标系

    //画分针
    painter.save();
    painter.rotate(6.0 * (time.minute() + time.second() / 60.0));
    pen.setColor(Qt::blue);
    pen.setWidth(2);
    painter.setPen(pen);
    painter.drawLine(0,0,0,-80);
    painter.restore();

    //画秒针
    painter.save();
    painter.rotate(6.0 *time.second() );
    pen.setColor(Qt::red);
    pen.setWidth(1);
    painter.setPen(pen);
    //秒针形状由两条直线和一个小圆环组成
    painter.drawArc(-3,-66,6,6,0,360*16);
    painter.drawLine(0,20,0,-60);
    painter.drawLine(0,-66,0,-85);
    painter.restore();

}
