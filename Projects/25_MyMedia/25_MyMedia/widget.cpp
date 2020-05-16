#include "widget.h"
#include "ui_widget.h"
#include <QMediaPlaylist>
#include <QCameraInfo>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>
#include <QDebug>
#include <QMediaRecorder>
#include <QAudioRecorder>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
    connect(player, &QMediaPlayer::positionChanged,this, &Widget::updatePosition);
    connect(player, &QMediaPlayer::stateChanged, this, &Widget::stateChanged);
    connect(player, &QMediaPlayer::mediaStatusChanged,this, &Widget::mediaStatusChanged);
    connect(player, static_cast<void(QMediaPlayer::*)(QMediaPlayer::Error)>(&QMediaPlayer::error), this, &Widget::showError);
    connect(player, &QMediaPlayer::metaDataAvailableChanged,this, &Widget::metaDataAvailableChanged);

    playlist = new QMediaPlaylist;
    playlist->addMedia(QUrl::fromLocalFile("C:/Users/ZHJ/Music/SimYee陈芯怡 - Wonderful U (Cover_ AGA).mp3"));
    playlist->addMedia(QUrl("http://47.95.13.239/data/music/GodIsAGirl.mp3"));
    playlist->setCurrentIndex(0);
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    player->setPlaylist(playlist);

    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    if(cameras.count() > 0) {
        foreach (const QCameraInfo &cameraInfo, cameras) {
            qDebug() << cameraInfo.description();
        }
        camera = new QCamera(cameras.at(0));
    }
    viewfinder = new QCameraViewfinder(this);
    camera->setViewfinder(viewfinder);
    viewfinder->resize(600, 360);
    imageCapture = new QCameraImageCapture(camera);
    camera->start();

    audioRecorder = new QAudioRecorder;
    QStringList inputs = audioRecorder->audioInputs();
    ui->comboBox->addItems(inputs);
    connect(audioRecorder, &QAudioRecorder::durationChanged, this, &Widget::updateProgress);
    QAudioEncoderSettings audioSettings;
    audioSettings.setCodec("audio/pcm");
    audioSettings.setQuality(QMultimedia::HighQuality);
    audioRecorder->setAudioSettings(audioSettings);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::updatePosition(qint64 position){
    ui->horizontalSlider->setMaximum(player->duration() / 1000);
    ui->horizontalSlider->setValue(position / 1000);
}

void Widget::mediaStatusChanged(QMediaPlayer::MediaStatus status){
    switch (status) {
        case QMediaPlayer::UnknownMediaStatus:
            ui->label_Music_Status->setText(tr("媒体未知状况！"));
            break;
        case QMediaPlayer::NoMedia:
            ui->label_Music_Status->setText(tr("没有媒体文件！"));
            break;
        case QMediaPlayer::BufferingMedia:
            ui->label_Music_Status->setText(tr("正在缓冲媒体文件！"));
            break;
        case QMediaPlayer::BufferedMedia:
            ui->label_Music_Status->setText(tr("媒体文件缓冲完成！"));
            break;
        case QMediaPlayer::LoadingMedia:
            ui->label_Music_Status->setText(tr("正在加载媒体！"));
            break;
        case QMediaPlayer::StalledMedia:
            ui->label_Music_Status->setText(tr("播放停滞！"));
            break;
        case QMediaPlayer::EndOfMedia:
            ui->label_Music_Status->setText(tr("播放结束！"));
            break;
        case QMediaPlayer::LoadedMedia:
            ui->label_Music_Status->setText(tr("媒体加载完成！"));
            break;
        case QMediaPlayer::InvalidMedia:
            ui->label_Music_Status->setText(tr("不可用的媒体文件！"));
            break;
        default: break;
    }
}

void Widget::stateChanged(QMediaPlayer::State state)
{
    switch (state) {
    case QMediaPlayer::StoppedState:
        ui->label_Music_Status->setText(tr("停止状态！"));
        break;
    case QMediaPlayer::PlayingState:
        ui->label_Music_Status->setText(tr("播放状态！"));
        break;
    case QMediaPlayer::PausedState:
        ui->label_Music_Status->setText(tr("暂停状态！"));
        break;
    default: break;
    }
}

void Widget::showError(QMediaPlayer::Error error)
{
    switch (error) {
    case QMediaPlayer::NoError:
        ui->label_Music_Status->setText(tr("没有错误！"));
        break;
    case QMediaPlayer::ResourceError:
        ui->label_Music_Status->setText(tr("媒体资源无法被解析！"));
        break;
    case QMediaPlayer::FormatError:
        ui->label_Music_Status->setText(tr("不支持该媒体格式！"));
        break;
    case QMediaPlayer::NetworkError:
        ui->label_Music_Status->setText(tr("发生了一个网络错误！"));
        break;
    case QMediaPlayer::AccessDeniedError:
        ui->label_Music_Status->setText(tr("没有播放权限！"));
        break;
    case QMediaPlayer::ServiceMissingError:
        ui->label_Music_Status->setText(tr("没有发现有效的播放服务！"));
        break;
    default: break;
    }
}

// 获取元数据
void Widget::metaDataAvailableChanged(bool available)
{
    if(available) {
        QString title = player->metaData("Title").toString();
        QString author = player->metaData("Author").toString();
        qDebug() << "音乐: " + title;
        qDebug() << "歌手: " + author;
        ui->label_Music_Info->setText(title + " - " + author);
    }
    else{
        qDebug() << "metaDataAvailableChanged NOT available\n";
        ui->label_Music_Info->setText("无法获取音乐标题");
    }
}

void Widget::on_pushButton_Play_clicked()
{
    ui->label_Music_Status->setText("正在播放");
    player->play();
}

void Widget::on_pushButton_Pause_clicked()
{
    ui->label_Music_Status->setText("暂停播放");
    player->pause();
}

void Widget::on_pushButton_Stop_clicked()
{
    ui->label_Music_Status->setText("停止播放");
    player->stop();
}

void Widget::on_horizontalSlider_sliderMoved(int position)
{
    player->setPosition(position * 1000);
}

void Widget::on_pushButton_Capture_clicked()
{
    camera->setCaptureMode(QCamera::CaptureStillImage);
    QString fileName = QFileDialog::getSaveFileName();
    ui->label_Camera_Info->setText(fileName);
    camera->searchAndLock();
    imageCapture->capture(fileName);
    camera->unlock();
}

void Widget::on_pushButton_Open_Camera_clicked()
{
    if(camera->status() != QCamera::ActiveStatus){
        qDebug() << "开启相机";
        ui->label_Camera_Status->setText("开启");
        camera->start();
    }
    else{
        qDebug() << "相机已经开启了";
    }
}

void Widget::on_pushButton_Close_Camera_clicked()
{
    if(camera->status() == QCamera::ActiveStatus){
        qDebug() << "关闭相机";
        ui->label_Camera_Status->setText("关闭");
        camera->stop();
    }
    else{
        qDebug() << "相机已经关闭了";
    }
}

void Widget::on_pushButton_Start_Recorder_clicked()
{
    QString fileName = QFileDialog::getSaveFileName();
    qDebug() << "录制文件保存到: " + fileName;
    ui->label_Recorder_Info->setText(fileName);
    audioRecorder->setAudioInput(ui->comboBox->currentText());
    audioRecorder->setOutputLocation(QUrl::fromLocalFile(fileName));
    audioRecorder->record();
}

void Widget::on_pushButton_Stop_Recorder_clicked()
{
    ui->label_Reocrder_Time->setText("停止录制");
    audioRecorder->stop();
}

void Widget::updateProgress(qint64 duration)
{
    if (audioRecorder->error() != QMediaRecorder::NoError || duration < 1000)
        return;
    ui->label_Reocrder_Time->setText(tr("正在录制，已录制 %1 秒").arg(duration / 1000));
}

void Widget::on_pushButton_clicked()
{
    if(camera->status() == QCamera::ActiveStatus){
        qDebug() << "关闭相机";
        camera->stop();
    }
    audioRecorder->stop();
    close();
}
