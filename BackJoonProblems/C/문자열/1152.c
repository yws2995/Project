#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[1000000];
    int i, count = 0, len;

    scanf("%[^\n]", arr);
    len = strlen(arr);

    for (i = 1; i < len - 1; i++)
    {
        if (arr[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count + 1);

    return 0;
}