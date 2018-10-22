#include "tools.h"

int Max2(int a, int b)
{
    return a > b ? a : b;
}

int Min2(int a, int b)
{
    return a < b ? a : b;
}

int Max3(int a, int b, int c)
{
    int temp = 0;
    temp = a > b ? a : b;
    return temp > c ? temp : c;
}

int Min3(int a, int b, int c)
{
    int temp = 0;
    temp = a < b ? a : b;
    return temp < c ? temp : c;
}

void GetRandomIntArray(int length, int *ouput)
{
    srand(time(NULL));
	for(int i = 0; i < length; i++)
	{
        ouput[i] = rand() * (rand() % 2 == 0 ? 1 : -1);
	}
}

long GetRunTime(void)
{
    return clock();
}
