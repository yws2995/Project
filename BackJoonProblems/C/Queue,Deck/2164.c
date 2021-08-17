#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 500001
int check;

typedef struct
{
    int data[SIZE];
    int front, rear;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = 0;
}

int is_empty(Queue *q)
{
    return (q->front == q->rear);
}

int is_full(Queue *q)
{
    return ((q->rear + 1) % SIZE == q->front);
}
void push(Queue *q, int n)
{
    if (is_full(q))
        return;
    q->rear = (q->rear + 1) % SIZE;
    q->data[q->rear] = n;
}

int pop(Queue *q)
{
    if (is_empty(q))
        return -1;
    q->front = (q->front + 1) % SIZE;
    return q->data[q->front];
}

int peek(Queue *q)
{
    return q->data[q->front + 1];
}

int size(Queue *q)
{
    return (q->rear) - (q->front);
}
int main(void)
{
    Queue q;
    init(&q);

    int n, i;
    int tmp, j;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        push(&q, i + 1);
    }

    while (!is_empty(&q))
    {

        tmp = pop(&q);
        if (is_empty(&q))
            break;
        tmp = pop(&q);
        push(&q, tmp);
    }
    printf("%d", tmp);

    return 0;
}