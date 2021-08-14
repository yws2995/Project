#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[1000000];
    int cnt[26] = {
        0,
    };
    int i, j, number;
    scanf("%s", arr);

    for (i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            number = arr[i] - 'A';
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            number = arr[i] - 'a';
        }
        cnt[number]++;
    }
    for (i = 0; i < 26; i++)
    {
        int max;
        if (cnt[0] < cnt[i])
            max = cnt[i];
    }

    return 0;
}