#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMediaPlayer>
class QMediaPlaylist;

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
    QMediaPlayer *player;
    QMediaPlaylist *playlist;

private slots:
    void updatePosition(qint64 position);
    void stateChanged(QMediaPlayer::State state);
    void mediaStatusChanged(QMediaPlayer::MediaStatus status);
    void showError(QMediaPlayer::Error error);
    void metaDataAvailableChanged(bool available);
    void on_pushButton_Play_clicked();
    void on_pushButton_Pause_clicked();
    void on_pushButton_Stop_clicked();
    void on_horizontalSlider_sliderMoved(int position);
};

#endif // WIDGET_H
