#include <stdio.h>
#include <string.h>

typedef struct Queue
{
    int data[2000000];
    int front, rear;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = -1;
}

int empty(Queue *q)
{
    return (q->front == q->rear);
}

int size(Queue *q)
{
    if (empty(q))
        return 0;
    return (q->rear) - (q->front);
}
void push(Queue *q, int i)
{
    q->data[++(q->rear)] = i;
}

int pop(Queue *q)
{
    if (empty(q))
        return -1;
    return q->data[++(q->front)];
}
int front(Queue *q)
{
    if (empty(q))
        return -1;
    return q->data[q->front + 1];
}
int back(Queue *q)
{
    if (empty(q))
        return -1;
    return q->data[q->rear];
}
int main(void)
{
    Queue q;
    init(&q);

    int n, i;
    scanf("%d\n", &n);

    for (i = 0; i < n; i++)
    {
        char str[6];
        scanf("%s\n", str);
        if (!strcmp(str, "push"))
        {
            int k;
            scanf("%d", &k);
            push(&q, k);
        }
        else if (!strcmp(str, "pop"))
        {
            printf("%d\n", pop(&q));
        }
        else if (!strcmp(str, "size"))
        {
            printf("%d\n", size(&q));
        }
        else if (!strcmp(str, "empty"))
        {
            printf("%d\n", empty(&q));
        }
        else if (!strcmp(str, "front"))
        {
            printf("%d\n", front(&q));
        }
        else if (!strcmp(str, "back"))
        {
            printf("%d\n", back(&q));
        }
    }

    return 0;
}