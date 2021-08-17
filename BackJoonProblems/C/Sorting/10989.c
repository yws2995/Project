#include <stdio.h>
#define SIZE 10001

int cnt[SIZE] = {
    0,
};
int main()
{
    int n, i, num, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        cnt[num]++;
    }

    for (i = 0; i <= SIZE; i++)
    {
        if (cnt[i] == 0)
            continue;

        for (j = 0; j < cnt[i]; j++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
