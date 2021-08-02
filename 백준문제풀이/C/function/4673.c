#include <stdio.h>

int main(void)
{
    int arr[10001], i, check;

    for (i = 1; i < 10001; i++)
    {
        check = sum(i);
        if (check < 10001)
            arr[check] = 1;
    }
    for (i = 1; i < 10001; i++)
    {
        if (arr[i] != 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

int sum(int n) //셀프넘버가 아닌 수
{
    int sum = n;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}