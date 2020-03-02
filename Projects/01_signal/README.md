## 程序说明

> 编写一个基于QDialog的程序分别展现模态和非模态对话框，具有信号与槽的特点

## 过程简述

1. 新建工程文件，选择基类为QDialog

2. 进入UI编辑界面，添加两个按钮，分别为“进入主界面”和“退出程序”

![两个按钮](https://github.com/ZHJ0125/QtLearning/blob/master/Image/signal/1.png)

3. 点击F4 进入信号和槽编辑模式，为“退出程序”按钮添加信号和槽，选择close()槽函数

![槽编辑模式](https://github.com/ZHJ0125/QtLearning/blob/master/Image/signal/2.png)

![close()槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/signal/3.png)

4. 进入组件编辑模式，右键单击“进入主界面”按钮，选择“转到槽”，选择信号为“click()”

![组件编辑模式](https://github.com/ZHJ0125/QtLearning/blob/master/Image/signal/4.png)

5. 编写槽函数，生成一个模态窗口

![生成一个模态窗口](https://github.com/ZHJ0125/QtLearning/blob/master/Image/signal/5.png)

6. 编译运行测试

点击主窗口的“进入主界面”按钮，会生成一个模态对话框。此时，不能再点击主窗口的内容。

![模态对话框](https://github.com/ZHJ0125/QtLearning/blob/master/Image/signal/6.png)

7. 关闭模态窗口，点击“退出程序”按钮，主窗口就会关闭

8. 将生成的窗口改为非模态窗口

![非模态窗口](https://github.com/ZHJ0125/QtLearning/blob/master/Image/signal/7.png)

9. 再次编译运行

此时因为是非模态窗口，所以可以再次点击主窗口的按钮，生成多个非模态窗口

![多个非模态窗口](https://github.com/ZHJ0125/QtLearning/blob/master/Image/signal/8.png)

10. 点击主窗口的“退出程序”按钮，即可退出所有窗口
