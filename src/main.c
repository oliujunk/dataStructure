#include "main.h"

int main(void)
{
    long runTime = 0;
    
    int value = 0;
    int array[100] = {0};

    GetRandomIntArray(100, array);

    value = MaxSubsequenceSum4(array, 100);

    value = Gcd(10, 15);

    runTime = GetRunTime();

    return 0;
}

void BubbleSort(int *source, int length)    //降序
{
    int temp = 0;
    for(int i=1; i<length; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(source[i-j] > source[i-1-j])
            {
                temp = source[i-1-j];
                source[i-1-j] = source[i-j];
                source[i-j] = temp;
            }
        }
    }
}

int F(int x)
{
    if(x == 0)
        return 0;
    else
        return 2*F(x-1)+x*x;
}

int MaxSubsequenceSum1(int array[], int N)
{
    int thisSum = 0, maxSum = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=i; j<N; j++)
        {
            thisSum = 0;
            for(int k=i; k<=j; k++)
                thisSum += array[k];
            if(thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    return maxSum;
}

int MaxSubsequenceSum2(int array[], int N)
{
    int thisSum = 0, maxSum = 0;
    for(int i=0; i<N; i++)
    {
        thisSum = 0;
        for(int j=i; j<N; j++)
        {
            thisSum += array[j];

            if(thisSum > maxSum)
                maxSum = thisSum;
        }
    }

    return maxSum;
}

static int MaxSubSum(int A[], int left, int right)
{
    int maxLeftSum = 0, maxRightSum = 0;
    int maxLeftBorderSum = 0, maxRightBorderSum = 0;
    int leftBorderSum = 0, rightBorderSum = 0;
    int center = 0, i = 0;

    if(left == right)
    {
        if(A[left] > 0)
            return A[left];
        else
            return 0;
    }

    center = (left + right) / 2;
    maxLeftSum = MaxSubSum(A, left, center);
    maxRightSum = MaxSubSum(A, center+1, right);

    for(int i = center; i >= left; i--)
    {
        leftBorderSum += A[i];
        if(leftBorderSum > maxLeftBorderSum)
            maxLeftBorderSum = leftBorderSum;
    }

    for(int i = center+1; i <= right; i++)
    {
        rightBorderSum += A[i];
        if(rightBorderSum > maxRightBorderSum)
            maxRightBorderSum = rightBorderSum;
    }

    return Max3(maxLeftSum, maxRightSum, maxLeftBorderSum+maxRightBorderSum);
}

int MaxSubsequenceSum3(int array[], int N)
{
    return MaxSubSum(array, 0, N-1);
}

int MaxSubsequenceSum4(int array[], int N)
{
    int thisSum = 0, maxSum = 0;
    for(int i = 0; i < N; i++)
    {
        thisSum += array[i];

        if(thisSum > maxSum)
            maxSum = thisSum;
        else if(thisSum < 0)
            thisSum = 0;
    }

    return maxSum;
}

int BinarySearch(int array[], int X, int N)
{
    int low = 0, mid = 0, high = N - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(array[mid] < X)
            low = mid + 1;
        else if(array[mid] > X)
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}
