#include <stdio.h>

int main(void)
{
    int num1, num2, n1, n2 = 0;

    scanf("%d %d", &num1, &num2);
    n1 = (num1 / 100) + (num1 % 10 * 100) + ((num1 / 10) % 10 * 10);
    n2 = (num2 / 100) + (num2 % 10 * 100) + ((num2 / 10) % 10 * 10);
    if (n1 > n2)
        printf("%d", n1);
    else
        printf("%d", n2);
    return 0;
}