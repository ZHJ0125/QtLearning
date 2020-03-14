## 程序说明

> 编写一个用户登陆界面，点击"登录"转到主界面，点击"注册"转到注册界面
>
> 项目地址：[https://github.com/ZHJ0125/QtLearning/tree/master/Projects/09_Tab](https://github.com/ZHJ0125/QtLearning/tree/master/Projects/09_Tab)

## 过程简述

1. 首先创建一个基于QMainWidget类的项目

2. 在UI编辑界面创建两个菜单栏标签

![添加菜单栏](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/01_%E6%B7%BB%E5%8A%A0%E8%8F%9C%E5%8D%95%E6%A0%8F.png)

3. 分别在两个菜单栏中添加子菜单

![添加子菜单1](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/02_%E6%B7%BB%E5%8A%A0%E5%AD%90%E8%8F%9C%E5%8D%95.png)

![添加子菜单2](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/03_%E6%B7%BB%E5%8A%A0%E5%AD%90%E8%8F%9C%E5%8D%95.png)

4. 为子菜单设置快捷键

![添加快捷键](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/04_%E8%AE%BE%E7%BD%AE%E5%BF%AB%E6%8D%B7%E9%94%AE.png)

5. 添加label标签

![添加label标签](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/06_%E6%B7%BB%E5%8A%A0label%E6%A0%87%E7%AD%BE.png)

6. 设置菜单的槽函数

![槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/05_%E8%BD%AC%E5%88%B0%E6%A7%BD%E5%87%BD%E6%95%B0.png)

7. 编写槽函数

为不同的标签编写相应的槽函数，槽函数的功能是改变label标签为相应的文字

![编写槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/07_%E6%A7%BD%E5%87%BD%E6%95%B0.png)

8. 添加菜单图标

首先在界面左侧工程栏中，添加相应的资源文件。导入需要的图片资源。

![菜单图标](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/08_%E6%B7%BB%E5%8A%A0%E8%B5%84%E6%BA%90.png)

之后在UI界面右侧QAction功能栏添加图片资源

![图片资源](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/09_%E5%9B%BE%E7%89%87%E8%B5%84%E6%BA%90.png)

9. 通过添加代码添加一个菜单选项

![菜单选项](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/10_%E6%B7%BB%E5%8A%A0%E9%80%89%E9%A1%B9.png)

```cpp
// mainwindow.cpp
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *editMenu = ui->menuBar->addMenu("编译(&B)");
    QAction *action_Open = editMenu->addAction(
    QIcon(":/image/images/build.png"),tr("编译全部(&A)"));
    action_Open->setShortcut(QKeySequence("Ctrl+A"));
    ui->mainToolBar->addAction(action_Open);
}
```

10. 添加工具栏组件

![工具栏组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/11_%E5%B7%A5%E5%85%B7%E6%A0%8F%E7%BB%84%E4%BB%B6.png)

```cpp
// mainwindow.cpp
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->mainToolBar->addAction(action_Open);
    QToolButton *toolBtn = new QToolButton(this);        // 创建QToolButton
    toolBtn->setText(tr("颜色"));
    QMenu *colorMenu = new QMenu(this);                  // 创建一个菜单
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    toolBtn->setMenu(colorMenu);                         // 添加菜单
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup); // 设置弹出模式
    ui->mainToolBar->addWidget(toolBtn);           // 向工具栏添加QToolButton按钮
    QSpinBox *spinBox = new QSpinBox(this);         // 创建QSpinBox
    ui->mainToolBar->addWidget(spinBox);            // 向工具栏添加QSpinBox部件
}
```

11. 编译测试

![编译测试](https://github.com/ZHJ0125/QtLearning/blob/master/Image/10_MainWindow/12_QT.gif)
