#ifndef DIALOG_OK_H
#define DIALOG_OK_H

#include <QDialog>

namespace Ui {
class Dialog_OK;
}

class Dialog_OK : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_OK(QWidget *parent = nullptr);
    ~Dialog_OK();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_OK *ui;

public:
    int flag = 0;
};

#endif // DIALOG_OK_H
