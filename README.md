# nativeDLL
基于native方法实现的dll，供JNI、JNA、CppDemo调用

Java JNI方式调用c++类库的例子
其生成方式：1.首先在Java类中声明一个native的方法

          2.使用Javah命令生成native方法的声明的
          
          3.按照生成的C/C++头件来编写C/C++源
          
          4.将C/C++源件编译成动态链接库（DLL)

该nativeDLL可以给CppDemo、JNIDemo、JNADemo使用
