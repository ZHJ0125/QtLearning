#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_2->setPixmap(QPixmap("E:/Qt/Project/exam2/GitHub1.png"));

    QMovie *movie = new QMovie("E:/Qt/Project/exam2/test.gif");
    ui->label_3->setMovie(movie);
    movie->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}
