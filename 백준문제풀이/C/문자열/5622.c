#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[15];
    int t, i = 0;
    scanf("%s", arr);
    int len = strlen(arr);

    for (i = 0; i < len; i++)
    {
        if ('A' <= arr[i] && arr[i] <= 'C')
        {
            t += 3;
        }
        if ('D' <= arr[i] && arr[i] <= 'F')
        {
            t += 4;
        }
        if ('G' <= arr[i] && arr[i] <= 'I')
        {
            t += 5;
        }
        if ('J' <= arr[i] && arr[i] <= 'L')
        {
            t += 6;
        }
        if ('M' <= arr[i] && arr[i] <= 'O')
        {
            t += 7;
        }
        if ('P' <= arr[i] && arr[i] <= 'S')
        {
            t += 8;
        }
        if ('T' <= arr[i] && arr[i] <= 'V')
        {
            t += 9;
        }
        if ('W' <= arr[i] && arr[i] <= 'Z')
        {
            t += 10;
        }
    }
    printf("%d\n", t);
    return 0;
}