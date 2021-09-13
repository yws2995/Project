#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    int size = n - m + 1;
    int *numPtr = (int *)malloc(sizeof(int) * size);

    for (i = m; i < n + 1; i++)
    {
        numPtr[i] = i;
    }

    for (i = 2; i * 2 < n + 1; i++)
    {

        for (j = 2 * i; j <= n + 1; j += i)
        {
            numPtr[j] = 0;
        }
    }
    for (i = m; i < n + 1; i++)
    {
        if (numPtr[i] != 0)
        {
            printf("%d\n", numPtr[i]);
        }
    }
    free(numPtr);
    return 0;
}

// 3, 16이라면 우선 3의 배수를 지우고 4의 배수를 지우고...