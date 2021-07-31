#include <stdio.h>
int main(void)
{
    int n,i;
    int sum = 0;
    scanf("%d", &n);
    for (i = 0; i < (n + 1); i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}