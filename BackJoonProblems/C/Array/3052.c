#include <stdio.h>

int main(void)
{
    int i, input, j, arr[10], cnt = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d\n", &input);
        arr[i] = input % 42;
    }
    for (i = 0; i < 10; i++)
    {
        int result = 0;
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j]) // i 번쨰와 j번째의 원소가 같다면
                result++;
        }
        if (result == 0)
            cnt++;
    }

    printf("%d", cnt);
    return 0;
}