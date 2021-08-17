#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 101

typedef struct
{
    int data[SIZE];
    int front, rear;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = 0;
}

int is_full(Queue *q)
{
    return ((q->rear + 1) % SIZE == q->front);
}

int is_empty(Queue *q)
{
    return (q->front == q->rear);
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

int main(void)
{

    int t, m, n, i, num, j, check = 0;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        Queue q;
        init(&q);

        scanf("%d %d", &n, &m); //4,2
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num); // 1 2 3 4
            push(&q, num);     //
        }
        if (n == 1)
        {
            printf("%d", 1);
            check = 1;
        }

        else if (n != 1)
        {
            for (j = 0; j < m - 1; j++) //m이 2라고하면 2번째에 있는 값을 c출력해야 하므로 idx=2까지 pop한다.
            {
                int tmp = pop(&q);
                push(&q, tmp);
            }
        }
        if (check == 0)
            printf("%d", pop(&q)); // q->front는 idx=3을 가리키고 있다.
    }

    return 0;
}
