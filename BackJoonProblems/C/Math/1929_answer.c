// m부터 n까지의 수 중에서 소수를 구하자.
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000001
int main(void)
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    int arr[SIZE] = {
        0,
    };
    // m부터 n까지 배열 초기화
    for (i = m; i <= n; i++)
    {
        arr[i] = i;
    }
    //2의배수부터 3의배수 4의 배수를 지워간다
    for (i = 2; i <= n; i++)
    {
        for (j = 2 * i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }

    for (i = m; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d\n", arr[i]);
        }
    }
}