#ifndef DIALOG_SGIN_H
#define DIALOG_SGIN_H

#include <QDialog>

namespace Ui {
class Dialog_sgin;
}

class Dialog_sgin : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_sgin(QWidget *parent = nullptr);
    ~Dialog_sgin();

private:
    Ui::Dialog_sgin *ui;
};
#endif // DIALOG_SGIN_H
