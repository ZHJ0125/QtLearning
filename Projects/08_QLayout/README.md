## 程序说明

> 编写一个具有滑块组件的Qt程序
> 项目地址：[https://github.com/ZHJ0125/QtLearning/tree/master/Image/08_QLayout](https://github.com/ZHJ0125/QtLearning/tree/master/Image/08_QLayout)

## 过程简述

1. 首先创建一个基于QWidget的项目
2. 在UI编辑界面添加一个Form Layout
3. 在Form Layout组件上双击，添加一个新的菜单

首先添加姓名菜单，对话框中填入标签文字"姓名(&N)："、"标签名称"、"字段类型"和"字段名称"等，并设置伙伴关系。
设置伙伴关系和快捷键后，可以按`ALT+N`选中姓名。

![添加菜单](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/01_%E5%A7%93%E5%90%8D.png)

4. 在UI界面添加姓名菜单

![姓名菜单](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/02_%E5%A7%93%E5%90%8D%E5%B1%95%E7%A4%BA.png)

5. 继续添加性别、年龄、邮箱、学号等菜单。

性别(&S)，使用QComoBox；年龄(&A)，使用QSpinBox；邮箱(&M)，使用QLineEdit。

![年龄](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/03_%E5%B9%B4%E9%BE%84.png)

![性别](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/04_%E6%80%A7%E5%88%AB.png)

![邮箱](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/05_%E9%82%AE%E7%AE%B1.png)

![学号](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/06_%E5%AD%A6%E5%8F%B7.png)

6. 现在的UI界面如下图所示

![UI界面](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/07_UI%E7%95%8C%E9%9D%A2.png)

7. 设置性别选项

![性别列表](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/13_%E6%80%A7%E5%88%AB%E9%80%89%E9%A1%B9.png)

8. 设置界面字体

![设置字体](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/08_%E8%AE%BE%E7%BD%AE%E5%AD%97%E4%BD%93.png)

9. 添加文本编辑框，设置提示文字

![设置提示文字](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/09_%E8%AE%BE%E7%BD%AE%E6%8F%90%E7%A4%BA%E6%96%87%E5%AD%97.png)

10. 调整UI界面布局

![调整布局](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/11_UI.png)

11. 设置水平布局

将QFromLayout组件和TextEdit布局整理为垂直布局

![水平布局](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/12_%E5%9E%82%E7%9B%B4%E5%B8%83%E5%B1%80.png)

12. 添加标题

![标题](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/14_%E6%A0%87%E9%A2%98.png)

13. 为标题和其他组件设置水平布局

![设置垂直布局](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/15_%E6%B0%B4%E5%B9%B3%E5%B8%83%E5%B1%80.png)

14. 添加垂直垫片组件，设置垫片高度为200

![垫片设置](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/16_%E8%AE%BE%E7%BD%AE%E5%9E%AB%E7%89%87%E9%AB%98%E5%BA%A6.png)

15. 将标题组件设置为水平居中

![设置标题](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/17_%E6%A0%87%E9%A2%98%E5%B1%85%E4%B8%AD.png)

16. 编译运行程序，效果如下

![最终效果](https://github.com/ZHJ0125/QtLearning/blob/master/Image/08_QLayout/18_%E6%9C%80%E7%BB%88%E6%95%88%E6%9E%9C.png)
