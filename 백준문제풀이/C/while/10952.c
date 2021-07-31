#include <stdio.h>

int main(void)
{
    int True = 1;
    while (True)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b == 0)
            break;
        else
            printf("%d\n", a + b);
    }
    return 0;
}