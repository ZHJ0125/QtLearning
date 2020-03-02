#include "widget.h"
#include "ui_widget.h"
#include <QMovie>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->frame->setFrameStyle(QFrame::Box | QFrame::Sunken);
    ui->frame_2->setFrameStyle(QFrame::Panel);

    ui->label->setPixmap(QPixmap("E:/Qt/Project/FrameTest/FrameTest/GitHub1.png"));

    QMovie *movie = new QMovie("E:/Qt/Project/FrameTest/FrameTest/test.gif");
    ui->label_2->setMovie(movie);
    movie->start();
}

Widget::~Widget()
{
    delete ui;
}
