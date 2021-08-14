#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check;

typedef struct Queue
{
    int data[1000001];
    int front, rear;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = 0;
}

array_init(Queue *q, int k)
{
    int i;
    for (i = 0; i < k; i++)
    {
        q->data[i] = i + 1;
    }
    q->front = 0;
    q->rear = k - 1;
}

function(Queue *q)
{

    if (q->rear = q->front)
    {
        return q->data[q->front];
    }
    else
    {
        q->data[(q->front)] = 0;
        q->data[q->rear + 1] = q->data[++(q->front)];
        function(&q);
    }
}

int main(void)
{
    Queue q;
    init(&q);

    int n;
    scanf("%d\n", &n);

    array_init(&q, n);
    while (check == 1)
    {
        printf("%d\n", function(&q));
        check = 1;
    }
    return 0;
}