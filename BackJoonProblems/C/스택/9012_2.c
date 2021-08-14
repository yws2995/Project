#include <stdio.h>
#include <stdlib.h>
#define INIT_CAPACITY 51
struct stack_type
{
    char *contents;
    int top;
    int size;
};
typedef struct stack_type Stack;

Stack create()
{
    Stack s = malloc(sizeof(struct stack_type));
    s->contents = (char *)malloc(INIT_CAPACITY * sizeof(char));
    if (s->contents == NULL)
    {
        free(s);
    }
    s->top = -1;
    s->size = INIT_CAPACITY;
    return s;
}

void push(Stack s, char i)
{
    s->top++;
    s->contents[s->top] = i;
}

char pop(Stack s)
{
    s->top--;
    return s->contents[s->top + 1];
}

int is_empty(Stack s)
{
    if (s->top == -1)
        return 0;
    else if (s->top != -1)
        return 1;
}
int main(void)
{
    int t, i;
    char buffer[INIT_CAPACITY];
    scanf("%d\n", &t);
    for (i = 0; i < t; i++)
    {
        int n = 0;
        Stack s = create();
        scanf("%s\n", buffer);

        while (buffer[n] == '\0')
        {
            if (buffer[n] == '(')
            {
                push(s, buffer[n]);
            }
            else
            {
                if (is_empty(s))
                {
                    break;
                }
                pop(s);
            }
            n++;
        }
        if (!is_empty(s))
        {
            printf("NO");
        }
        else if (is_empty && buffer[n] != '\0')
        {
            printf("NO");
        }
        else if (is_empty && buffer[n] == '\0')
        {
            printf("YES");
        }
    }
}
