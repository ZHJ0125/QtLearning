#ifndef DIALOG_SIGN_H
#define DIALOG_SIGN_H

#include <QDialog>

namespace Ui {
class Dialog_sign;
}

class Dialog_sign : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_sign(QWidget *parent = nullptr);
    ~Dialog_sign();

private:
    Ui::Dialog_sign *ui;
};

#endif // DIALOG_SIGN_H
