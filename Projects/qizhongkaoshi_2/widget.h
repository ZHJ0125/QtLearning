#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    bool keyUp;           // 向上方向键按下的标志
    bool keyLeft;         // 向左方向键按下的标志
    bool keydown;         // 下
    bool keyright;        // 右
    bool move;            // 是否完成了一次移动


protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
};

#endif // WIDGET_H
