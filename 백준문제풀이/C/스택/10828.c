#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000
#define TRUE 1
#define FALSE 0

int stack[MAX_SIZE];
int idx = -1;

int main(void)
{
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        char command[6];
        scanf("%s", command);

        if (strcmp(command, "push") == 0)
        {
            int x;
            scanf("%d\n", &x);
            push(x);
        }
        else if (strcmp(command, "pop") == 0)
        {
            printf("%d\n", pop());
        }
        else if (strcmp(command, "size"))
        {
            printf("%d\n", size());
        }
        else if (strcmp(command, "empty"))
        {
            printf("%d\n", empty());
        }
        else if (strcmp(command, "top") == 0)
        {
            printf("%d\n", top());
        }
    }
    return 0;
}

int push(int x)
{
    stack[idx + 1] = x;
    idx++;
}

int pop()
{
    if (empty())
        return -1;
    else
    {
        idx--;
        return stack[idx - 1];
    }
}

int size()
{
    return idx + 1;
}

int empty()
{
    if (idx == -1)
    {
        return TRUE;
    }
    else
        return FALSE;
}

int top()
{
    if (idx == -1)
        return -1;
    else
        return stack[idx];
}