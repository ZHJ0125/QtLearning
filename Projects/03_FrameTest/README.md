## 程序说明

> 编写一个具有多种特殊label的Qt程序

## 过程简述

1. 创建一个widget类的程序

2. 在UI设计界面添加Frame边框组件，并在其中添加lineEdit标签

![添加Frame边框组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/1.png)

3. 自定义边框组件的样式

![自定义边框组件的样式](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/2.png)

4. 添加一个textlabel用来显示图片

![显示图片](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/3.png)

5. 将图片移动到项目文件夹下，设置TextLabel的图片

![设置TextLabel的图片](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/4.png)

6. 再添加一个Label组件，用来显示GIF动图

![显示GIF动图](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/5.png)

7. 同样将GIF图片文件移到项目文件夹下，设置label组件的属性

![设置label组件的属性](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/6.png)

8. 添加一个LcdNumber组件，并设置其值为456

![添加一个LcdNumber组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/7.png)

9. 同样可以设置这个组件的边框属性，在右侧属性栏里面设置即可

![边框属性](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/8.png)

10. 下面再添加一个ListWidget标签，将其成员名改为“第一页”和“第二页”

![添加一个ListWidget标签](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/9.png)

11. 为了做出相应的效果，需要再添加一个StackedWidget组件

![StackedWidget组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/10.png)

12. 添加信号和槽

![添加信号和槽](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/11.png)

13. 编译运行程序，查看效果

![查看效果](https://github.com/ZHJ0125/QtLearning/blob/master/Image/FrameTest/12.png)

14. 程序运行成功，左下方是GIF图，点击右侧的第二页，下方的组件会进行文字切换
