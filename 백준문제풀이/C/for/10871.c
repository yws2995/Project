#include <stdio.h>

int main(void)
{
    int i, j, n, x, z;

    scanf("%d %d", &n, &x);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &z);
        if (z < x)
        {
            printf("%d", z);
        }
    }
    return 0;
}