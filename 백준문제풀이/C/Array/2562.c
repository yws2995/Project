#include <stdio.h>

int main(void)
{
    int i, num, index, max = 0;
    int arr[9];
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 9; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i + 1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", index);

    return 0;
}