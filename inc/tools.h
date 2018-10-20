#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <stdlib.h>
#include <time.h>

//返回两个数中较大一个
int max2(int a, int b);

//返回两个数中较小的一个
int min2(int a, int b);

//返回三个数中最大的一个
int max3(int a, int b, int c);

//返回3个数中最小的一个
int min3(int a, int b, int c);

//获取一个随机数组，可用于模拟大量数据输入的情形
void getRandomIntArray(int length, int *ouput);


#endif
