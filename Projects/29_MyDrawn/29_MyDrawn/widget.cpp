#include "widget.h"
#include "ui_widget.h"
#include <qwidget.h>
#include <QMouseEvent>
#include <QPainter>
#include <QImage>
#include <QPixmap>
#include <QBitmap>
#include <QPicture>
#include <QDebug>
#include <QToolTip>
#include <QTimer>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 绘制矩形图片
    pix = QPixmap(400, 300);
    pix.fill(Qt::white);
    tempPix = pix;
    isDrawing = false;

    // 线段旋转
    setMouseTracking(true);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);
    angle = 0;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    int x = startPoint.x();
    int y = startPoint.y();
    int width1 = endPoint.x() - x;
    int height1 = endPoint.y() - y;
    QPainter painter;
    painter.begin(&tempPix);
    painter.drawRect(x, y, width1, height1);
    painter.end();
    painter.begin(this);
    painter.drawPixmap(0, 0, tempPix);
    // 如果已经完成了绘制，那么更新缓冲区
    if(!isDrawing)
        pix = tempPix;

    // 图片镜像功能
    QPainter painter2(this);
    QImage image;
    // 加载一张图片
    image.load("C:\\Users\\ZHJ\\Pictures\\GitHub.png");
    // 输出图片的一些信息
    qDebug() << image.size() << image.format() << image.depth();
    // 在界面上绘制图片
    painter2.drawImage(QPoint(500, 10), image);
    // 获取镜像图片
    QImage mirror = image.mirrored();
    // 将图片进行扭曲
    QTransform transform;
    transform.shear(0.2, 0);
    QImage image2 = mirror.transformed(transform);
    painter2.drawImage(QPoint(500, 170), image2);
    // 将镜像图片保存到文件
    image2.save("C:\\Users\\ZHJ\\Pictures\\MyGitHub.png");

    // 线段旋转
    angle += 10;
    if(angle == 360)
        angle = 0;
    int side = qMin(width(), height());
    QPainter painter3(this);
    painter.setRenderHint(QPainter::Antialiasing);
    QTransform transform2;
    transform2.translate(width()*0.85, height()*0.4);
    transform2.scale(side/500.0, side/500.0);
    transform2.rotate(angle);
    painter3.setWorldTransform(transform2);
    painter3.drawEllipse(-120, -120, 240, 240);
    painter3.drawLine(0, 0, 100, 0);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        // 当鼠标左键按下时获取当前位置作为矩形的开始点
        startPoint = event->pos();
        // 标记正在绘图
        isDrawing = true;
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        // 当鼠标左键松开时，获取当前位置为结束点，完成矩形绘制
        endPoint = event->pos();
        // 标记已经结束绘图
        isDrawing = false;
        update();
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
//    QString pos = QString("%1,%2").arg(event->pos().x()).arg(event->pos().y());
//    QToolTip::showText(event->globalPos(), pos, this);
    if(event->buttons() & Qt::LeftButton) {
        // 当按着鼠标左键进行移动时，获取当前位置作为结束点，绘制矩形
        endPoint = event->pos();
        // 将缓冲区的内容复制到临时缓冲区，这样进行动态绘制时，
        // 每次都是在缓冲区图像的基上进行绘制，就不会产生拖影现象了
        tempPix = pix;
        // 更新显示
        update();
    }
}
