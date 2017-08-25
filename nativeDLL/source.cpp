#include<iostream>
#include"bingcao_TestJNI.h"
#include <ctime>
#include <cmath>
#include <windows.h>
using namespace std;

double FibFun(double n)
{
	if (fabs(n - 0.0) < 0.000001)
		return 0;
	if (fabs(n - 1.0) < 0.000001)
		return 1;
	if (n > 1.0)
		return FibFun(n - 1) + FibFun(n - 2);
}


JNIEXPORT jdouble JNICALL Java_bingcao_TestJNI_nativeMethod
(JNIEnv *env, jobject obj) {

	
	double sum = 0.0, count=1.0;

	for (int i = 1; i <= 1000000; i++) {
		sum += ((i << 2) + 7896320145.523698741) * sin((double)i);
		sum -= ((i << 2) + 7896320145.523698741) / cos((double)i);
	}
	
	return sum;
}
