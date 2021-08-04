#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    int cnt = 1;
    int range = 1;
    int tmp = 1;

    scanf("%d", &n);

    while (range < n)
    {
        tmp = 6 * cnt;
        range += tmp;
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}