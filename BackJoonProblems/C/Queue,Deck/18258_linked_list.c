#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
};

struct queue_type
{
    struct node *front;
    struct node *rear;
    int size;
};

typedef struct queue_type Queue;
// 필요한 함수 목록
int get_size(Queue q)
{
    printf("%d\n", q->size);
    return 0;
}
Queue create()
{
    Queue q = (Queue)malloc(sizeof(struct queue_type));
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
    return q;
}
int get_back(Queue q)
{
    if (q->rear->data == NULL)
    {
        printf("%d\n", -1);
    }

    printf("%d\n", q->rear->data);
    return 0;
}

int is_empty(Queue q)
{
    if (q == NULL)
        printf("%d\n", 1);
    printf("%d\n", 0);
    return 0;
}

int peek(Queue q)
{
    if (q->front->data == NULL)
    {
        printf("%d\n", -1);
    }

    printf("%d\n", q->front->data);
    return 0;
}

void enqueue(Queue q, int i)
{
    struct node *new_node = (Queue)malloc(sizeof(struct queue_type));
    //new_node==NULL의 경우는 생각하지 않는다.
    new_node->data = i;
    new_node->next = NULL;
    if (q->front == NULL)
    {
        q->front = new_node;
        q->rear = new_node;
    }
    else
    {
        q->rear->next = new_node;
        q->rear = new_node;
    }
    q->size++;
}

int dequeue(Queue q)
{
    int i;
    struct node *old_front;
    if (q->front == NULL)
    {
        printf("%d\n", -1);
        return 0;
    }
    old_front = q->front;
    i = old_front->data;
    q->front = old_front->next;

    free(old_front);
    q->size--;
    return i;
}
//main 시작
main(void)
{

    int n, i;
    scanf("%d\n", &n);

    Queue create();

    for (i = 0; i < n; i++)
    {
        char str;
        scanf("%s\n", str);
        if (!strcmp(str, "push")) //enqueue
        {
            int k;
            scanf("%d\n", &k);
            enqueue(q, k);
        }
        else if (!strcmp(str, "pop"))
        {
            pop(q); //dequeue
            printf("%d\n", i);
        }
        else if (!strcmp(str, "size")) //size
        {
            get_size(q);
        }
        else if (!strcmp(str, "empty")) //empty check
        {
            is_empty(q);
        }
        else if (!strcmp(str, "front")) //front->data (peek)
        {
            peek(q);
        }
        else if (!strcmp(str, "back")) // rear->data
        {
            back(q);
        }
    }

    return 0;
}