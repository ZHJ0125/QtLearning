#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_actionnew_triggered();

    void on_actionopen_triggered();

    void on_actionche_triggered();

    void on_actionshan_triggered();

    void on_actionzz_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
