#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int data[1001];
    int front, rear;
} Queue;
int size(Queue *q)
{
    if (q->front < q->rear)
        return q->rear - q->front;
    else
        return 1001 - q->front + q->rear;
}
void init(Queue *q)
{
    q->front = q->rear = 0;
}
void push(Queue *q, int n)
{
    q->rear = (q->rear + 1) % 1001;
    q->data[q->rear] = n;
}

int peek(Queue *q)
{
    q->front = (q->front + 1) % 1001;
    return q->data[q->front];
}

int main(void)
{
    Queue q;
    init(&q);
    int n, m, i, tmp, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        push(&q, i + 1);
    }
    printf("<");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m - 1; j++)
        {
            tmp = peek(&q);
            push(&q, tmp);
        }
        if (size(&q) == 1)
            break;
        tmp = peek(&q);
        printf("%d, ", tmp);
    }
    printf("%d>", peek(&q));

    return 0;
}