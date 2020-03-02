## 程序说明

> 编写一个具有滑块组件的Qt程序

## 过程简述

1. 创建一个基于QWidget类的工程
2. 在UI界面中分别添加horizontalScrollBar、horizontalSlider、verticalScrollBar、verticalSlider、spinBox以及dial组件

![添加组件](https://github.com/ZHJ0125/QtLearning/blob/master/Image/07_Slider/01_%E6%B7%BB%E5%8A%A0%E7%BB%84%E4%BB%B6.png)

3. 转到信号和槽，为滑块组件设置槽函数，关联dial的值

![关联信号](https://github.com/ZHJ0125/QtLearning/blob/master/Image/07_Slider/02_%E5%85%B3%E8%81%94%E4%BF%A1%E5%8F%B7.png)

![信号展示](https://github.com/ZHJ0125/QtLearning/blob/master/Image/07_Slider/03_%E4%BF%A1%E5%8F%B7%E5%B1%95%E7%A4%BA.png)

4. 为dial和spinbox设置相互关联

![dial_to_spinBox](https://github.com/ZHJ0125/QtLearning/blob/master/Image/07_Slider/04_dial_to_spinBox.png)

![spinBox_to_dial](https://github.com/ZHJ0125/QtLearning/blob/master/Image/07_Slider/05_spinBox_to_dial.png)

![所有信号展示](https://github.com/ZHJ0125/QtLearning/blob/master/Image/07_Slider/06_%E6%89%80%E6%9C%89%E4%BF%A1%E5%8F%B7%E5%B1%95%E7%A4%BA.png)

5. 退出信号编辑模式，编译运行测试

![运行测试](https://github.com/ZHJ0125/QtLearning/blob/master/Image/07_Slider/07_%E8%BF%90%E8%A1%8C%E6%B5%8B%E8%AF%95.png)

滑动dial组件，周围的滑块会随之滑动，spinBox组件会改变数值；改变spinBox数值，其余组件也会随之变动。
