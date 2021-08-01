#include <stdio.h>

int main(void)
{
    int i, count, result;
    int arr[10] = {
        0,
    };
    int input, mul;
    for (i = 0; i < 3; i++)
    {
        scanf("%d\n", &input);
        mul *= input;
    }
    for (i = 0; mul > 0; i++)
    {
        result = mul % 10;
        arr[result] += 1;
        mul /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}