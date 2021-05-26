#include <stdio.h>
#include <stdlib.h>
typedef long int li;
typedef long long int ll;
#define VIVEK_DHIR

typedef struct CircularQueue
{
    int r;
    int f;
    int *arr;
    int size;
} CircularQueue;

int isEmpty(struct CircularQueue *q)
{
    if (q->f == q->r)
        return 1;
    return 0;
}

int isFull(struct CircularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
        return 1;
    return 0;
}

int deCircularQueue(CircularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("No element in CircularQueue");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

void enCircularQueue(struct CircularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("CircularQueue Overflow\n");
    }
    else
    {
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int main()
{
    VIVEK_DHIR
    struct CircularQueue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    if (isEmpty(&q))
        printf("CircularQueue is empty\n");
    enCircularQueue(&q, 12);
    enCircularQueue(&q, 15);

    printf("dequeing = %d\n", deCircularQueue(&q));
    if (isEmpty(&q))
        printf("CircularQueue is empty\n");
    if (isFull(&q))
        printf("CircularQueue is full\n");
    //else
}