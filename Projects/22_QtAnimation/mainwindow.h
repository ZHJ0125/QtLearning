#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QParallelAnimationGroup>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Start_clicked();

    void on_pushButton_Loop_clicked();

    void on_pushButton_Back_clicked();

    void on_pushButton_Back_2_clicked();

private:
    Ui::MainWindow *ui;
    QParallelAnimationGroup *m_group;
};

#endif // MAINWINDOW_H
