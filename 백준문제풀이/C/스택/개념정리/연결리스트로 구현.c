#include <stdio.h>

struct node
{
    char *data;
    struct node *next;
};

typedef struct node Node;

Node *top = NULL;

void push(char *item)
{
    Node *p = (Node *)malloc(sizeof(Node));
    p->data = item;
    p->next = top;
    top = p;
}

char *pop()
{
    if (is_empty())
        return NULL;
    char *result = top->data;
    top = top->next; //malloc으로 할당한 메모리 어떻게 free? free(p)를 어떻게
    return result;
}

char *peek()
{
    if (is_empty())
        return NULL;
    return top->data;
}

int is_empty()
{
    return top == NULL;
}

// 만약 스택이 동시에 2개 이상 필요하다면?
// 배열만 두 개를 만드는게 아니라 함수도 2개씩 만들어야 하는 문제가 있다.
//
// 서로 다른 타입의 데이터를 저장할 스택이 필요하다면? 아스키 코드로 바꿔서?