## 程序说明

> 编写一个多窗口程序，创建颜色对话框

## 过程说明

1. 首先创建一个dialog类的窗口

2. 在ui界面中添加两个按钮，分别为“创建一个颜色窗口”和“退出”

![添加两个按钮](https://github.com/ZHJ0125/QtLearning/blob/master/Image/CustomDialog/1.png)

3. 为退出按钮设置槽函数，右键点击推出按钮，选择转到槽

![选择转到槽](https://github.com/ZHJ0125/QtLearning/blob/master/Image/CustomDialog/2.png)

4. 编写函数，设置为close()

![close()](https://github.com/ZHJ0125/QtLearning/blob/master/Image/CustomDialog/3.png)

5. 为“创建颜色对话框”按钮设置槽函数。与退出按钮类似，转到它的槽函数位置，添加相关代码

![添加相关代码](https://github.com/ZHJ0125/QtLearning/blob/master/Image/CustomDialog/4.png)

6. 添加缺少的头文件，需要添加QColorDialog和QDebug这两个头文件

![添加头文件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/CustomDialog/5.png)

7. 编译运行程序，点击“创建颜色对话框”按钮，可以显示一个颜色模态对话框

![颜色模态对话框](https://github.com/ZHJ0125/QtLearning/blob/master/Image/CustomDialog/6.png)

8. 点击某种颜色，选择确定，会在下方调试窗口显示已选的颜色信息

![颜色信息](https://github.com/ZHJ0125/QtLearning/blob/master/Image/CustomDialog/7.png)

9. 点击退出按钮，可以退出程序
