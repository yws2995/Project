#include <stdio.h>
#include <string.h>
#define MAX_CAPACITY 100000

int stack[MAX_CAPACITY];
int idx = -1;

void push(int x)
{
    if (idx >= MAX_CAPACITY - 1)
        return;

    stack[++idx] = x;
}

void pop()
{
    if (idx < 0)
        return;
    stack[idx--] = 0;
}

int main(void)
{
    int k, i, n, sum;
    scanf("%d", &k);
    // for (i = 0; i < k; i++)
    // {
    //     scanf("%d\n", &n);
    //     if (n != 0)
    //     {
    //         push(n);
    //     }
    //     else if (n == 0)
    //     {
    //         pop();
    //     }
    // }
    while (k--)
    {
        scanf("%d", &n);
        if (n == 0)
            pop();
        else
            push(n);
    }

    for (i = 0; i <= idx; i++)
    {
        sum += stack[i];
    }
    printf("%d\n", sum);
    return 0;
}
