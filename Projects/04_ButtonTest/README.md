## 程序说明

> 编写一个具有多种特殊按钮的Qt程序

## 过程简述

1. 下面重新创建一个文件，用来测试特殊按钮
2. 创建一个新的dialog类的项目
3. 在UI编辑界面中添加单选框和复选框，并为其添加相应的子选项

![子选项](https://github.com/ZHJ0125/QtLearning/blob/master/Image/ButtonTest/1.png)

4. 下面测试QPushButton功能，添加三个QPushButton组件

![添加QPushButton组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/ButtonTest/2.png)

5. 添加代码，设置按钮的特殊属性，注意将相关的图片资源移至正确位置

![设置按钮属性](https://github.com/ZHJ0125/QtLearning/blob/master/Image/ButtonTest/3.png)

6. 添加一个退出按钮，并为其添加相应的退出功能

7. 编译测试程序

![编译测试程序](https://github.com/ZHJ0125/QtLearning/blob/master/Image/ButtonTest/4.png)

8. 其中，单选框只能单选，复选框可以复选，使用Alt+N可以选中“nihao”按钮，使用Alt+H可以选中“帮助”按钮，使用Alt+o可以选中“zoom”按钮。
9. 测试完毕，点击退出按钮关闭窗口
