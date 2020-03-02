## 工程说明

> 创建一个LineEdit组件的Qt程序

## 过程简述

1. 创建一个QWidget类的Qt项目
2. 在UI编辑界面添加Label标签作为提示说明

![添加标签](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/01_%E6%B7%BB%E5%8A%A0%E6%A0%87%E7%AD%BE.png)

3. 添加四个`LineEdit`标签

![添加LineEdit](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/02_%E6%B7%BB%E5%8A%A0LineEdit.png)

4. 设置第一个`LineEdit`标签的`echoMode`属性为`Password`密码

![设置echoMode](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/03_%E8%AE%BE%E7%BD%AEechoMode.png)

5. 设置第二个`LineEdit`标签的`inputMask`属性为`>AA-90-bb-!aa\#H;*`

![设置inputMask](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/04_%E8%AE%BE%E7%BD%AEinputMask.png)

6. 为第三个验证码的`LineEdit`标签添加代码

```c++
// 新建验证器，指定范围为100-999
// QValidator *validator = new QIntValidator(100, 999, this);
QRegExp rx("-?\\d{1,3}");
QValidator *validator = new QRegExpValidator(rx, this);
// 在行编辑器中使用验证器
ui->lineEdit_3->setValidator(validator);
```

![验证码](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/05_%E9%AA%8C%E8%AF%81%E7%A0%81.png)

7. 添加缺失的头文件

```c++
#include <QValidator>
```

![添加头文件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/06_%E5%A4%B4%E6%96%87%E4%BB%B6.png)

8. 为第四个自动完成的LineEdit标签添加代码

```c++
QStringList wordList;
wordList << "Hi" << "Hello" << "HelloWorld" << tr("你好");
QCompleter *completer = new QCompleter(wordList, this);   // 新建自动完成器
completer->setCaseSensitivity(Qt::CaseInsensitive);       // 设置大小写不敏感
ui->lineEdit_4->setCompleter(completer);
```

![自动补全](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/07_%E8%87%AA%E5%8A%A8%E8%A1%A5%E5%85%A8.png)

9. 添加缺失的头文件

```c++
#include <QCompleter>
```

![头文件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/08_%E5%A4%B4%E6%96%87%E4%BB%B6.png)

10. 运行测试

![测试运行](https://github.com/ZHJ0125/QtLearning/blob/master/Image/05_LineEdit/09_%E6%B5%8B%E8%AF%95%E8%BF%90%E8%A1%8C.png)
