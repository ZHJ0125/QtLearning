#include "widget.h"
#include "ui_widget.h"
#include <QCameraInfo>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>
#include <QDebug>
#include <QMediaRecorder>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    if(cameras.count() > 0) {
        foreach (const QCameraInfo &cameraInfo, cameras) {
            qDebug() << cameraInfo.description();
        }
        camera = new QCamera(cameras.at(0));
    }
    viewfinder = new QCameraViewfinder(this);
    camera->setViewfinder(viewfinder);
    viewfinder->resize(600, 350);
    imageCapture = new QCameraImageCapture(camera);
    camera->start();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_Capture_clicked()
{
    camera->setCaptureMode(QCamera::CaptureStillImage);
    QString fileName = QFileDialog::getSaveFileName();
    camera->searchAndLock();
    // 必须使用绝对路径
    imageCapture->capture(fileName);
    camera->unlock();
}

void Widget::on_pushButton_Close_clicked()
{
    camera->stop();
    close();
}

void Widget::on_pushButton_Video_clicked()
{
    camera->setCaptureMode(QCamera::CaptureVideo);
    QString fileName = QFileDialog::getSaveFileName();
    recorder = new QMediaRecorder(camera);
    QAudioEncoderSettings audioSettings;
    audioSettings.setCodec("audio/amr");
    audioSettings.setQuality(QMultimedia::HighQuality);
    recorder->setAudioSettings(audioSettings);
    recorder->setOutputLocation(QUrl::fromLocalFile(fileName));
    qDebug() << "FileName: " + fileName;
    camera->searchAndLock();
    recorder->record();
    qDebug() << recorder->state();
    qDebug() << "开始录像";
}

void Widget::on_pushButton_Video_Stop_clicked()
{
    recorder->stop();
    camera->unlock();
    qDebug() << recorder->state();
    qDebug() << "停止录像";
}
