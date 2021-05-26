#include <stdio.h>
#include <stdlib.h>
typedef long int li;
typedef long long int ll;
#define VIVEK_DHIR

typedef struct queue
{
    int r;
    int f;
    int *arr;
    int size;
} Queue;

int isEmpty(struct queue *q)
{
    if (q->f == q->r)
        return 1;
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == q->size-1)
        return 1;
    return 0;
}

int dequeue(Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("No element in queue");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int main()
{
    VIVEK_DHIR
    struct queue q;
    q.size = 1;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    if (isEmpty(&q))
        printf("Queue is empty\n");
    enqueue(&q, 12);
    enqueue(&q, 15);

    printf("dequeing = %d\n", dequeue(&q));
    if (isEmpty(&q))
        printf("Queue is empty\n");
    if (isFull(&q))
        printf("Queue is full\n");
    //else
}