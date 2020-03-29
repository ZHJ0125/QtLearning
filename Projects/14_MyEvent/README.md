## 程序说明

> 测试按键事件和事件过滤器
>
> 项目地址：[https://github.com/ZHJ0125/QtLearning/tree/master/Projects/14_MyEvent](https://github.com/ZHJ0125/QtLearning/tree/master/Projects/14_MyEvent)

## 过程简述

1. 首先创建一个基于QMainWidget类的项目

2. 在mainwindow.h中对事件过滤器函数进行声明

![声明事件过滤器](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/01_%E5%A3%B0%E6%98%8E%E4%BA%8B%E4%BB%B6%E8%BF%87%E6%BB%A4%E5%99%A8.png)

3. 对受保护的键盘事件进行声明

![声明键盘事件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/01_%E5%A3%B0%E6%98%8E%E9%94%AE%E7%9B%98%E4%BA%8B%E4%BB%B6.png)

4. 创建自定义类

![创建自定义类](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/02_%E5%88%9B%E5%BB%BA%E8%87%AA%E5%AE%9A%E4%B9%89%E7%B1%BB.png)

5. 编写自定义类mylineedit的头文件

![编写头文件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/03_%E7%BC%96%E5%86%99%E8%87%AA%E5%AE%9A%E4%B9%89%E7%B1%BB.png)

6. 编写melineedit的源文件

![编写源文件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/04_%E7%BC%96%E5%86%99%E6%BA%90%E6%96%87%E4%BB%B6.png)

7. 编写mainwindow.cpp文件

在构造函数中添加lineEdit对象，使用installEventFilter安装事件过滤器

![mainwindow.cpp文件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/05_%E4%BA%8B%E4%BB%B6%E8%BF%87%E6%BB%A4%E5%99%A8.png)

编写事件过滤器函数，如果是lineEdit部件上的事件，在按键按下后输出提示信息

![编写事件过滤器](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/05_%E6%8C%89%E4%B8%8B%E4%BA%8B%E4%BB%B6.png)

编写按下键盘的事件处理函数

![编写键盘按下事件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/05_%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0.png)

8. 效果展示

![效果展示](https://github.com/ZHJ0125/QtLearning/blob/master/Image/14_MyEvent/qt_show.gif)
