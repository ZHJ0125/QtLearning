## 程序说明

> 设计一个富文本打印的界面
>
> 包含打印、打印预览、生成PDF、框架、文本块、文字、表格、列表、图片、查找等功能
>
> 项目地址：[https://github.com/ZHJ0125/QtLearning/tree/master/Projects/13_MyPrint](https://github.com/ZHJ0125/QtLearning/tree/master/Projects/13_MyPrint)

## 过程简述

1. 首先创建一个基于QMainWidget类的项目

2. 在工程配置文件中添加打印类支持

![添加打印类](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/01_%E6%B7%BB%E5%8A%A0%E6%89%93%E5%8D%B0%E7%B1%BB.png)

3. 修改mywindows.h头文件

* 首先添加QPrinter类

![添加QPrinter类](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/02_%E6%B7%BB%E5%8A%A0QPrint%E7%B1%BB.png)

* 添加相关的槽函数

![添加槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/02_%E6%B7%BB%E5%8A%A0%E6%A7%BD%E5%87%BD%E6%95%B0.png)

4. 编写槽函数

本次需要实现三个功能，分别是打印、打印预览和生成PDF，三个功能分别由三个槽函数实现。

* 首先在UI界面添加一个TextEdit组件，编写实现打印功能的槽函数

![添加组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/03_UI.png)

![打印功能槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/03_%E6%89%93%E5%8D%B0%E5%8A%9F%E8%83%BD.png)

* 添加doPrintPreview槽函数，实现打印预览功能

![打印预览](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/04_%E6%89%93%E5%8D%B0%E9%A2%84%E8%A7%88.png)

* 添加createPdf槽函数，实现PDF生成功能

![PDF生成函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/05_%E7%94%9F%E6%88%90PDF.png)

* 添加缺失的头文件

![添加头文件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/06_%E5%A4%B4%E6%96%87%E4%BB%B6.png)

5. 编写构造函数

首先创建三个对象，分别表示打印、打印预览和生成PDF三个功能

![创建对象](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/07_%E7%94%9F%E6%88%90%E5%AF%B9%E8%B1%A1.png)

* 使用connect函数关联信号和槽函数

![关联信号](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/08_%E5%85%B3%E8%81%94%E6%A7%BD%E5%87%BD%E6%95%B0.png)

* 将菜单项添加到工具栏中

![添加工具栏](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/09_%E6%B7%BB%E5%8A%A0%E5%B7%A5%E5%85%B7%E6%A0%8F.png)

6. 添加富文本功能

在头文件中添加相关类和槽函数声明

![添加类](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/10_%E6%B7%BB%E5%8A%A0%E7%B1%BB.png)

![添加槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/11_%E6%A7%BD%E5%87%BD%E6%95%B0.png)

添加自定义类并编写相关内容

![创建自定义类](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/12_%E6%B7%BB%E5%8A%A0%E8%87%AA%E5%AE%9A%E4%B9%89%E7%B1%BB.png)

![相关内容](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/13_%E5%86%85%E5%AE%B9.png)

7. 运行测试

![运行测试](https://github.com/ZHJ0125/QtLearning/blob/master/Image/13_MyPrint/qt_show-min.gif)
