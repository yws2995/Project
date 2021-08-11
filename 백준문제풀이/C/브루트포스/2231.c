#include <stdio.h>

int main(void)
{
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int temp = i;
        int num = i;

        while (temp > 0)
        {
            num = num + temp % 10;
            temp /= 10;
        }
        if (num == n)
        {
            printf("%d", i);
            n = 0;
            break;
        }
    }
    if (n != 0)
    {
        printf("%d", 0);
    }
}