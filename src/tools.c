#include "tools.h"

int max2(int a, int b)
{
    return a > b ? a : b;
}

int min2(int a, int b)
{
    return a < b ? a : b;
}

int max3(int a, int b, int c)
{
    int temp = 0;
    temp = a > b ? a : b;
    return temp > c ? temp : c;
}

int min3(int a, int b, int c)
{
    int temp = 0;
    temp = a < b ? a : b;
    return temp < c ? temp : c;
}

void getRandomIntArray(int length, int *ouput)
{
    srand(time(NULL));
	for(int i = 0; i < length; i++)
	{
        ouput[i] = rand() * (rand() % 2 == 0 ? 1 : -1);
	}
}
