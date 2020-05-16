#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QMediaRecorder;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_Capture_clicked();

    void on_pushButton_Close_clicked();

    void on_pushButton_Video_clicked();

    void on_pushButton_Video_Stop_clicked();

private:
    Ui::Widget *ui;
    QCamera *camera;
    QCameraViewfinder *viewfinder;
    QCameraImageCapture *imageCapture;
    QMediaRecorder *recorder;
};

#endif // WIDGET_H
