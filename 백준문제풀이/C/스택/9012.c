#include <stdio.h>
#include <string.h>

#define MAX_CAPACITY 50
char result;
char stack[MAX_CAPACITY];
int idx = -1;
void paren_checker()
{
    char ch = getchar();
    while (ch != EOF)
    {
        if (idx == -1 && (!strcmp(ch, ")")))
        {
            result = "NO";
        }
        else if (stack[idx] == "(" && (!strcmp(ch, ")")))
        {
            pop();
        }
        else
        {
            push(ch);
        }
    }
    if (idx == -1)
    {
        result = "NO";
    }
    else
    {
        result = "YES";
    }
}

void push(char a)
{
    if (idx > MAX_CAPACITY - 1)
        return;
    else
        stack[++idx] = a;
}
void pop()
{
    stack[idx--] = 0;
}
int main(void)
{

    int t, i;
    scanf("%d\n", &t);
    for (i = 0; i < t; i++)
    {
        paren_checker();
        printf(result);
    }
    return 0;
}
