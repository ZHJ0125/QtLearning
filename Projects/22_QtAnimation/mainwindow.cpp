#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QSequentialAnimationGroup>
#include <QGraphicsOpacityEffect>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 缩放效果
    QPropertyAnimation *pScaleAnimation1 = new QPropertyAnimation(ui->pushButton_Scale, "geometry");
    pScaleAnimation1->setDuration(1000);
    pScaleAnimation1->setEndValue(QRect(270, 110, 151, 151));
    pScaleAnimation1->setStartValue(QRect(340, 190, 0, 0));
    pScaleAnimation1->setEasingCurve(QEasingCurve::InOutQuad);

    QPropertyAnimation *pScaleAnimation2 = new QPropertyAnimation(ui->pushButton_Scale, "geometry");
    pScaleAnimation2->setDuration(1000);
    pScaleAnimation2->setEndValue(QRect(340, 190, 0, 0));
    pScaleAnimation2->setStartValue(QRect(270, 110, 151, 151));
    pScaleAnimation2->setEasingCurve(QEasingCurve::InOutQuad);

    QSequentialAnimationGroup *pScaleGroup = new QSequentialAnimationGroup(this);
    pScaleGroup->addAnimation(pScaleAnimation1);
    pScaleGroup->addAnimation(pScaleAnimation2);

    // 移动效果
    QPropertyAnimation *pPosAnimation1 = new QPropertyAnimation(ui->pushButton_Pos, "pos");
    pPosAnimation1->setDuration(1000);
    pPosAnimation1->setStartValue(QPoint(470, 110));
    pPosAnimation1->setEndValue(QPoint(470, 250));
    pPosAnimation1->setEasingCurve(QEasingCurve::InOutQuad);

    QPropertyAnimation *pPosAnimation2 = new QPropertyAnimation(ui->pushButton_Pos, "pos");
    pPosAnimation2->setDuration(1000);
    pPosAnimation2->setStartValue(QPoint(470, 250));
    pPosAnimation2->setEndValue(QPoint(470, 110));
    pPosAnimation2->setEasingCurve(QEasingCurve::InOutQuad);

    QSequentialAnimationGroup *pPosGroup = new QSequentialAnimationGroup(this);
    pPosGroup->addPause(500);
    pPosGroup->addAnimation(pPosAnimation1);
    pPosGroup->addAnimation(pPosAnimation2);

    // 透明度效果
    QGraphicsOpacityEffect *pButtonOpacity = new QGraphicsOpacityEffect(this);
    pButtonOpacity->setOpacity(1);
    ui->pushButton_Opacity->setGraphicsEffect(pButtonOpacity);

    QPropertyAnimation *pOpacityAnimation1 = new QPropertyAnimation(pButtonOpacity, "opacity");
    pOpacityAnimation1->setDuration(1000);
    pOpacityAnimation1->setStartValue(1);
    pOpacityAnimation1->setEndValue(0);

    QPropertyAnimation *pOpacityAnimation2 = new QPropertyAnimation(pButtonOpacity, "opacity");
    pOpacityAnimation2->setDuration(1000);
    pOpacityAnimation2->setStartValue(0);
    pOpacityAnimation2->setEndValue(1);

    QSequentialAnimationGroup *pOpacityGroup = new QSequentialAnimationGroup(this);
    pOpacityGroup->addPause(1000);
    pOpacityGroup->addAnimation(pOpacityAnimation1);
    pOpacityGroup->addAnimation(pOpacityAnimation2);

    m_group = new QParallelAnimationGroup(this);
    m_group->addAnimation(pScaleGroup);
    m_group->addAnimation(pPosGroup);
    m_group->addAnimation(pOpacityGroup);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Start_clicked()
{
    m_group->setDirection(QAbstractAnimation::Forward);
    m_group->setLoopCount(1);
    m_group->start();
}

void MainWindow::on_pushButton_Loop_clicked()
{
    m_group->setDirection(QAbstractAnimation::Forward);
    m_group->setLoopCount(-1);
    m_group->start();
}

void MainWindow::on_pushButton_Back_clicked()
{
    m_group->setDirection(QAbstractAnimation::Backward);
    m_group->setLoopCount(1);
    m_group->start();
}

void MainWindow::on_pushButton_Back_2_clicked()
{
    m_group->stop();
}
