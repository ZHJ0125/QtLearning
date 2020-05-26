#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QBitmap>
#include <QPainter>
#include <QGraphicsDropShadowEffect>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowOpacity(0.5);

    QPixmap pix;
    // 加载图片
    pix.load(":/new/prefix1/Astronaut-in-Space.jpg");
    // 设置窗口大小为图片大小
    resize(pix.size());
    // 为窗口设置遮罩
    setMask(pix.mask());

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

    // 创建阴影效果
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    // 设置阴影颜色
    effect->setColor(QColor(100, 100, 100, 100));
    // 设置阴影模糊半径
    effect->setBlurRadius(2);
    // 设置阴影偏移值
    effect->setOffset(10);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    // 从窗口左上角开始绘制图片
    painter.drawPixmap(0, 0, QPixmap(":/new/prefix1/Astronaut-in-Space.jpg"));
    // painter.fillRect(rect(), QColor(255,255,255,100));
}

void Widget::mousePressEvent(QMouseEvent *)
{   // 关闭窗口
    close();
}
