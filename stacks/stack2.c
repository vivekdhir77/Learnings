#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
    
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr,int val)
{
     if (isFull(ptr))
    printf("stack overflow");
    else
    {
    ptr->top++;
    ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    printf("stack underflow");
    else
    {
        int temp= ptr->arr[ptr->top];
        ptr->top-=1;
        return temp;
    }
    return -1;
}

int main()
{
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element manually
    push(s, 45);
    push(s, 25);
    push(s, 40);
    push(s, 15);
    push(s, 490);
    push(s, 81);
    
    printf("%d\n",pop(s));
    printf("%d\n",pop(s));
    printf("%d\n",pop(s));
    printf("%d\n",pop(s));
    printf("%d\n",pop(s));
    printf("%d\n",pop(s));
    

    if(isEmpty(s))
        printf("The stack is empty");
    else
        printf("The stack is not empty");
    free(s->arr);
}// working in VSc but not in online compiler