#include <stdio.h>

int main(void)
{
    int j, n, i;
    scanf("%d", &n);
    for (i = 1; i < n + 1; i++)
    {
        for (j = n - 1; j > 0; j--)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}