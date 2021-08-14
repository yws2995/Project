#include <stdio.h>

int main(void)
{
    int n, i;
    int x;
    int max = -1000001;
    int min = 1000001;
    int arr[n];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }
    printf("%d %d", min, max);
    return 0;
}