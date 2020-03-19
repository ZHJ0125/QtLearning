## 程序说明

> 编写MainWindow测试界面，创建菜单栏和工具栏。编写自定义类，使用connect关联信号和槽
>
> 项目地址：[https://github.com/ZHJ0125/QtLearning/edit/master/Projects/12_MyAction/](https://github.com/ZHJ0125/QtLearning/tree/master/Projects/12_MyAction)

## 过程简述

1. 首先创建一个基于QMainWidget类的项目

2. 新建一个名为MyAction的C++类

![新建自定义类](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/01_%E6%96%B0%E5%BB%BA%E8%87%AA%E5%AE%9A%E4%B9%89%E7%B1%BB.png)

现在的目录结构如下

![目录结构](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/01_%E7%9B%AE%E5%BD%95%E7%BB%93%E6%9E%84.png)

3. 修改自定义类的头文件代码

首先添加头文件

![添加头文件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/02_%E6%B7%BB%E5%8A%A0%E5%A4%B4%E6%96%87%E4%BB%B6.png)

编写MyAction类
声明createWidget函数用来创建Widget子部件
新建getText信号，用于在按下回车键时，将行编辑器中的内容发射出去
新建sendText槽，它用来与行编辑器的按下回车键信号关联

![编写类](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/02_%E7%BC%96%E5%86%99%E7%B1%BB.png)

4. 在mainwindow.h头文件中添加槽函数

![添加槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/03_%E6%B7%BB%E5%8A%A0%E6%A7%BD%E5%87%BD%E6%95%B0.png)

5. 编写maywidget.cpp源文件

首先编写MyAction构造函数

![编写构造函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/04_%E6%B7%BB%E5%8A%A0%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0.png)

编写createWidget函数，同时添加缺失的头文件

![编写createWidget函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/04_%E7%BC%96%E5%86%99createWidget%E5%87%BD%E6%95%B0.png)

编写发送信号的槽函数sendText

![编写槽函数sendText](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/04_%E7%BC%96%E5%86%99sendText%E5%87%BD%E6%95%B0.png)

6. 在UI编辑界面添加EditText文本编辑框，将布局设置为垂直布局

![添加文本编辑框](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/05_%E5%B8%83%E5%B1%80.png)

现在准备工作已完成。

7. 编写mainwindow.cpp源文件

首先添加setText槽函数

![添加setText函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/06_%E7%BC%96%E5%86%99sendText%E5%87%BD%E6%95%B0.png)

添加改写MainWindow的构造函数，新建QMenu的对象，添加一个子菜单

![添加子菜单](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/06_%E6%B7%BB%E5%8A%A0%E8%8F%9C%E5%8D%95.png)

下面编译运行测试

![编译测试](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/07_%E8%BF%90%E8%A1%8C%E6%B5%8B%E8%AF%95.gif)

8. 生成工具栏

重新创建一个action1对象，将工具栏组件添加到action1中

![添加组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/09_%E7%94%9F%E6%88%90%E5%B7%A5%E5%85%B7%E6%A0%8F%E7%BB%84%E4%BB%B6.png)

9. 添加connect关联信号和槽

现在敲击回车之后，EditText没有做出响应，是因为现在还没有将槽函数和信号关联起来。
下面编写connect函数，将信号和槽相关联。

![关联信号和槽](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/08_%E5%85%B3%E8%81%94%E4%BF%A1%E5%8F%B7%E5%92%8C%E6%A7%BD.png)

10. 编译运行测试

![运行测试](https://github.com/ZHJ0125/QtLearning/blob/master/Image/12_MyAction/10_%E8%BF%90%E8%A1%8C%E6%B5%8B%E8%AF%95.gif)
