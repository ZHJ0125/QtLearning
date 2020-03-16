## 程序说明

> 编写MainWindow测试界面，创建菜单栏和工具栏。使用中心部件、Dock等组件，并为其添加相应的功能
>
> 项目地址：[https://github.com/ZHJ0125/QtLearning/tree/master/Projects/11_MainWindow2/](https://github.com/ZHJ0125/QtLearning/tree/master/Projects/11_MainWindow2/)

## 过程简述

1. 首先创建一个基于QMainWidget类的项目

2. 在UI编辑界面创建两个菜单栏标签

![菜单1](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/01_%E8%8F%9C%E5%8D%951.png)

![菜单2](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/01_%E8%8F%9C%E5%8D%952.png)

3. 将相关图片资源移植到工程文件夹，添加资源到工程中

![工程目录1](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/02_%E5%B7%A5%E7%A8%8B%E7%9B%AE%E5%BD%95.png)

![工程结构2](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/02_%E5%B7%A5%E7%A8%8B%E7%BB%93%E6%9E%84.png)

4. 为子菜单分别添加图标以及快捷键

![添加图标1](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/03_%E6%B7%BB%E5%8A%A0%E5%9B%BE%E6%A0%871.png)

![添加图标2](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/03_%E6%B7%BB%E5%8A%A0%E5%9B%BE%E6%A0%872.png)

5. 编写代码，在"执行"菜单中分别添加"调试"和"运行"子菜单

![子菜单代码](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/04_%E5%AD%90%E8%8F%9C%E5%8D%95%E4%BB%A3%E7%A0%81.png)

6. 分别添加spinBox和QToolButton组件，运行测试一下

![添加组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/05_%E6%B7%BB%E5%8A%A0%E7%BB%84%E4%BB%B6.png)

![运行测试](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/06_%E8%BF%90%E8%A1%8C%E6%B5%8B%E8%AF%95.gif)

7. 添加中心部件

在主窗口的中心区域可以放置一个中心部件，它一般是一个编辑器或者浏览器。这里支持单文档部件，也支持多文档部件。一般的，会在这里放置一个部件，然后使用布局管理器使其充满整个中心区域，并可以随着窗口的大小变化而改变大小。

在主窗口的中心区域放一个Edit Text部件，然后选择栅格布局使之平铺整个窗口。

![中心部件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/07_%E4%B8%AD%E5%BF%83%E9%83%A8%E4%BB%B6.png)

8. 添加Dock部件

QDockWidget类提供了这样一个部件，它可以停靠在QMainWindow中也可以悬浮起来作为桌面顶级窗口，我们称它为Dock部件或者停靠窗口。Dock部件一般用于存放其他一些部件来实现一些特殊功能，就像一个工具箱一样。它在主窗口中可以停靠在中心部件的四周，也可以悬浮起来，被拖动到任意的地方，还可以被关闭或隐藏起来。一个Dock部件包含一个标题栏和一个内容区域，可以向Dock部件中放入任何部件。

在设计模式中向中心区域拖入一个Dock Widget部件，然后再向Dock中随意拖入几个部件，比如这里拖入一个Push Button和一个Font Combo Box。然后在dockWidget的属性栏中更改其windowTitle为“工具箱”。

![Dock部件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/08_dock%E9%83%A8%E4%BB%B6.png)

9. 在Dock中添加相关组件，运行测试

![添加组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/09_%E6%B7%BB%E5%8A%A0%E7%BB%84%E4%BB%B6.png)

![运行展示](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/10_%E7%BB%84%E4%BB%B6%E5%B1%95%E7%A4%BA.png)

10. 添加相应的槽函数

首先添加菜单栏的槽函数

![槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/11_%E8%8F%9C%E5%8D%95%E6%A0%8F%E6%A7%BD%E5%87%BD%E6%95%B0.png)

添加dock的槽函数

![槽函数2](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/12_dock%E6%A7%BD%E5%87%BD%E6%95%B0.png)

11. 添加状态栏欢迎文字

![状态栏](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/13_%E6%B7%BB%E5%8A%A0%E7%8A%B6%E6%80%81%E6%A0%8F.png)

12. 运行测试

![运行测试](https://github.com/ZHJ0125/QtLearning/blob/master/Image/11_MainWindow2/14_%E8%BF%90%E8%A1%8C%E6%B5%8B%E8%AF%95.gif)
