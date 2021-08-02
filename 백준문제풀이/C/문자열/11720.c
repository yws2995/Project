#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    scanf("%d\n", &n);
    char arr[n];
    scanf("%s\n", &arr);
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - '0';
    }
    printf("%d", sum);
    return 0;
}
