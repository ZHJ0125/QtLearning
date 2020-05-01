#include "widget.h"
#include "dialog_ok.h"
#include "dialog_sign.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog_OK dialog_ok;
    Dialog_sign dialog_sign;
    Widget w;
    w.show();
    if(dialog_ok.exec() == QDialog::Accepted){
        switch (dialog_ok.flag) {
            case 1:
                w.show();
                break;
            case 2:
                dialog_sign.show();
                break;
            default:
                break;
        }
    }

    return a.exec();
}
