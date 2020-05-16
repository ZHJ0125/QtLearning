#include "widget.h"
#include "ui_widget.h"
#include <QMediaPlaylist>

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
            ui->label->setText(tr("媒体未知状况！"));
            break;
        case QMediaPlayer::NoMedia:
            ui->label->setText(tr("没有媒体文件！"));
            break;
        case QMediaPlayer::BufferingMedia:
            ui->label->setText(tr("正在缓冲媒体文件！"));
            break;
        case QMediaPlayer::BufferedMedia:
            ui->label->setText(tr("媒体文件缓冲完成！"));
            break;
        case QMediaPlayer::LoadingMedia:
            ui->label->setText(tr("正在加载媒体！"));
            break;
        case QMediaPlayer::StalledMedia:
            ui->label->setText(tr("播放停滞！"));
            break;
        case QMediaPlayer::EndOfMedia:
            ui->label->setText(tr("播放结束！"));
            break;
        case QMediaPlayer::LoadedMedia:
            ui->label->setText(tr("媒体加载完成！"));
            break;
        case QMediaPlayer::InvalidMedia:
            ui->label->setText(tr("不可用的媒体文件！"));
            break;
        default: break;
    }
}

void Widget::stateChanged(QMediaPlayer::State state)
{
    switch (state) {
    case QMediaPlayer::StoppedState:
        ui->label->setText(tr("停止状态！"));
        break;
    case QMediaPlayer::PlayingState:
        ui->label->setText(tr("播放状态！"));
        break;
    case QMediaPlayer::PausedState:
        ui->label->setText(tr("暂停状态！"));
        break;
    default: break;
    }
}

void Widget::showError(QMediaPlayer::Error error)
{
    switch (error) {
    case QMediaPlayer::NoError:
        ui->label->setText(tr("没有错误！"));
        break;
    case QMediaPlayer::ResourceError:
        ui->label->setText(tr("媒体资源无法被解析！"));
        break;
    case QMediaPlayer::FormatError:
        ui->label->setText(tr("不支持该媒体格式！"));
        break;
    case QMediaPlayer::NetworkError:
        ui->label->setText(tr("发生了一个网络错误！"));
        break;
    case QMediaPlayer::AccessDeniedError:
        ui->label->setText(tr("没有播放权限！"));
        break;
    case QMediaPlayer::ServiceMissingError:
        ui->label->setText(tr("没有发现有效的播放服务！"));
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
        ui->label->setText(title + " - " + author);
    }
    else{
        qDebug() << "metaDataAvailableChanged NOT available\n";
        ui->label->setText("无法获取音乐标题");
    }
}

void Widget::on_pushButton_Play_clicked()
{
    player->play();
}

void Widget::on_pushButton_Pause_clicked()
{
    player->pause();
}

void Widget::on_pushButton_Stop_clicked()
{
    player->stop();
}

void Widget::on_horizontalSlider_sliderMoved(int position)
{
    player->setPosition(position * 1000);
}
