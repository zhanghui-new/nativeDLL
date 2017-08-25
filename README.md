
首先在Java类中声明一个native的方法
使用Javah命令生成native方法的声明的
按照生成的C/C++头件来编写C/C++源
将C/C++源件编译成动态链接库（DLL)
将DLL件加入到PATH环境变量下
Java类中加载DLL，然后调用声明方法
