#include <stdio.h>

int main(void)
{
    char arr1[3];
    char arr2[3];
    int i = 0;

    scanf("%d %d", arr1, arr2);
    for (i = 0; i < 3; i++)
    {
        arr1[i] = arr1[2 - i];
        arr2[i] = arr2[2 - i];
    }
    if (arr1 > arr2)
        printf("%s", arr1);
    else
        printf("%s", arr2);
}