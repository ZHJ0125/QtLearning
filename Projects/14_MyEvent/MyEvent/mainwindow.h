#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MyLineEdit;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool eventFilter(QObject *obj, QEvent *event);

private:
    Ui::MainWindow *ui;
    MyLineEdit *lineEdit;

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
