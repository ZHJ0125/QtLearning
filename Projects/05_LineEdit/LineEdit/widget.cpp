#include "widget.h"
#include "ui_widget.h"
#include <QValidator>
#include <QCompleter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 新建验证器，指定范围为100-999
    // QValidator *validator = new QIntValidator(100, 999, this);
    QRegExp rx("-?\\d{1,3}");
    QValidator *validator = new QRegExpValidator(rx, this);
    // 在行编辑器中使用验证器
    ui->lineEdit_3->setValidator(validator);

    QStringList wordList;
    wordList << "Hi" << "Hello" << "HelloWorld" << tr("你好");
    QCompleter *completer = new QCompleter(wordList, this);   // 新建自动完成器
    completer->setCaseSensitivity(Qt::CaseInsensitive);       // 设置大小写不敏感
    ui->lineEdit_4->setCompleter(completer);
}

Widget::~Widget()
{
    delete ui;
}
