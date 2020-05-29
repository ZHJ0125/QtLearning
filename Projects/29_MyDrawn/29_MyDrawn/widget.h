#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QTimer;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QPixmap pix;        // 缓冲区
    QPixmap tempPix;    // 临时缓冲区
    QPoint startPoint;
    QPoint endPoint;
    bool isDrawing;     // 是否正在绘图的标志
    QTimer *timer;      // 时间变量
    int angle;          // 角度变量

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

};

#endif // WIDGET_H
