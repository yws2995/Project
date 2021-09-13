#include <stdio.h>
#include <stdlib.h>
#define SIZE 246913

int main(void)
{
    int n, i, j, count;
    int arr[SIZE] = {
        0,
    };
    arr[0] = 1, arr[1] = 1;

    for (j = 2; j < SIZE / j; j++)
    {
        if (arr[j] == 1)
            continue;
        for (i = j * j; i < SIZE; i += j)
        {
            if (i % j == 0)
                arr[i] = 1;
        }
    }

    scanf("%d", &n);

    while (n != 0)
    {
        count = 0;
        for (i = n + 1; i <= 2 * n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
        scanf("%d", &n);
    }
    return 0;
}