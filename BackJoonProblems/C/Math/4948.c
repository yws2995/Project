#include <stdio.h>

int main(void)
{
    int n, count = 0;
    int i, j, arr[246913] = {
                  0,
              };
    arr[0] = 1;
    arr[1] = 1;

    for (j = 2; j < 246913 / j; j++)
    {
        if (!arr[j] == 1)
            continue;
        for (i = j * j; i < 246913; i += j)
            if (i % j == 0)
                arr[i] = 1;
    }
    scanf("%d", &n);

    while (n != 0)
    {
        count = 0;
        for (i = n + 1; i <= n * 2; i++)
        {
            if (arr[i] == 0)
                count++;
        }
        printf("%d\n", &count);

        scanf("%d", &n);
    }

    return 0;
}
