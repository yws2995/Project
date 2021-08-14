// 만약 스택이 동시에 2개 이상 필요하다면?
// 배열만 두 개를 만드는게 아니라 함수도 2개씩 만들어야 하는 문제가 있다.
//
// 서로 다른 타입의 데이터를 저장할 스택이 필요하다면?
// 위의 문제 해결을 위한 코드
#include "stackADT.h"
#include <stdlib.h>
#include <stdlib.h>

#define INIT_CAPACITY 100

struct stack_type
{ //각 struct가 하나의 스택이 된다.
    Item *contents;
    int top;
    int size;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(1);
}

Stack create()
{
    Stack s = (Stack)malloc(sizeof(struct stack_type)); //struct stack_type * == Stack 이므로
    if (s == NULL)
        terminate("Error in create: stack could not be created.");
    s->contents = (Item *)malloc(INIT_CAPACITY * sizeof(Item));
    if (s->contents == NULL)
    {
        free(s);
        terminate("Error in create: stack could not be created.");
    }
    s->top = -1;
    s->size = INIT_CAPACITY;
    return s;
}
void push(Stack s, Item i) //스택을 매개변수로 받도록 해야한다.
{
    if (is_full(s))
        reallocate(s);
    s->top++;
    s->contents[s->top] = i;
}

Item pop(Stack s)
{
    if (is_empty(s))
        terminate("Error in pop: stack is empty.");
    s->top--;
    return s->contents[s->top + 1];
}

Item peek(Stack s)
{
    if (is_empty(s))
        terminate("Error in peek: stack is empty.");
    return s->contents[s->top];
}
void reallocate(Stack s)
{
    Item *tmp = (Item *)malloc(2 * s->size * sizeof(Item));
    if (tmp == NULL)
    {
        terminate("Error in create: stack could not be created.");
    }
    for (int i = 0; i < s->size; i++)
        tmp[i] = s->contents[i];
    free(s->contents);
    s->contents = tmp;
    s->size *= 2;
}

void destroy(Stack s)
{
    free(s->contents);
    free(s);
}

void make_empty(Stack s)
{
    s->top = -1;
}

bool is_empty(Stack s)
{
    return s->top == -1;
}