#include <stdio.h>

int main(void)
{
    int a, b, v, height;
    int count = 1;
    scanf("%d %d %d", &a, &b, &v);

    count = (v - b - 1) / (a - b) + 1;
    printf("%d\n", count);
    return 0;
}