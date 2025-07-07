# SM4查表加速

为了提升效率，可将S盒与后续的循环移位变换合并，通过4个表来快速查找结果。

## 使用方法

在终端中输入命令：
` g++ -std=c++11 main.cpp sm4run.cpp  -o sm4_table `

## 运行结果
以下是SM4算法的执行结果：

![SM4查找表运行结果](https://postimg.cc/1fxT57FD)