## 程序说明

> 编写一个用户登陆界面，点击"登录"转到主界面，点击"注册"转到注册界面
>
> 项目地址：[https://github.com/ZHJ0125/QtLearning/tree/master/Projects/09_Tab](https://github.com/ZHJ0125/QtLearning/tree/master/Projects/09_Tab)

## 过程简述

1. 首先创建一个基于QWidget类的项目

2. 添加两个label和两个lineedit标签

![添加标签](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/01_%E6%B7%BB%E5%8A%A0%E6%A0%87%E7%AD%BE.png)

3. 设置组件之间的伙伴关系

![伙伴关系](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/02_%E4%BC%99%E4%BC%B4%E5%85%B3%E7%B3%BB.png)

![设置伙伴](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/03_%E8%AE%BE%E7%BD%AE%E4%BC%99%E4%BC%B4.png)

4. 设置Tab顺序

![Tab设置](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/04_Tab%E8%AE%BE%E7%BD%AE.png)

![设置Tab顺序](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/05_%E8%AE%BE%E7%BD%AETab%E9%A1%BA%E5%BA%8F.png)

5. 增加按钮和标题组件

![登录界面](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/06_%E7%99%BB%E5%BD%95%E7%95%8C%E9%9D%A2.png)

6. 修改字体大小，设置layout布局

![设置布局](hhttps://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/07_%E8%AE%BE%E7%BD%AE%E4%BD%8D%E7%BD%AE.png)

7. 添加一个新的Qt设计界面

![添加界面1](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/08_%E6%B7%BB%E5%8A%A0%E8%AE%BE%E8%AE%A1%E7%95%8C%E9%9D%A2.png)

![添加界面2](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/09_%E6%B7%BB%E5%8A%A0%E8%AE%BE%E8%AE%A1%E7%95%8C%E9%9D%A22.png)

![添加界面3](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/10_%E6%B7%BB%E5%8A%A0%E8%AE%BE%E8%AE%A1%E7%95%8C%E9%9D%A23.png)

8. 设计登录成功界面

![成功登录](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/11_%E7%99%BB%E5%BD%95%E6%88%90%E5%8A%9F.png)

9. 以同样的方式，编写注册界面，设计相关组件及布局

![注册界面](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/12_%E6%B3%A8%E5%86%8C%E7%95%8C%E9%9D%A2.png)

![Tab界面](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/13_Tab%E7%95%8C%E9%9D%A2.png)

10. 分别为登陆界面的两个按钮设置槽函数，同时设置标志位用于切换界面

![槽函数](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/14_%E8%AE%BE%E7%BD%AE%E6%A7%BD%E5%87%BD%E6%95%B0.png)

![判断语句](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/15_%E5%88%A4%E6%96%AD%E8%AF%AD%E5%8F%A5.png)

11. 编译运行，测试程序

登陆界面如下图所示：

![登录界面](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/16_%E7%99%BB%E5%BD%95%E7%95%8C%E9%9D%A2%E5%B1%95%E7%A4%BA.png)

登录成功界面如下图所示：

![登陆成功界面](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/17_%E7%99%BB%E9%99%86%E6%88%90%E5%8A%9F%E7%95%8C%E9%9D%A2.png)

注册界面如下图所示：

![注册界面展示](https://github.com/ZHJ0125/QtLearning/blob/master/Image/09_Tab/18_%E6%B3%A8%E5%86%8C%E7%95%8C%E9%9D%A2%E5%B1%95%E7%A4%BA.png)
