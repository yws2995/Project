#include <stdio.h>

int fibonachi(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonachi(n - 1) + fibonachi(n - 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonachi(n));
}
