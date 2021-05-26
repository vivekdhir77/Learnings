#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

struct Node{
    int data;
    struct node* next;
};

short isEmpty(struct Node* top)
{
    if (top==NULL)
        return 1;
    else 
        return 0;
}

short isFull()
{
    struct Node* n=(struct Node*) malloc(sizeof(struct Node));
    if(n==NULL)
        return 1;
    else
        return 0;
    free(n);
}

struct Node* push(struct Node* top, int x)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
        return top;
    }
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data = x;
    n->next = top;
    top = n;
    return top;
}

int pop(struct Node** top)
{
    if(isEmpty(*top))
    {
        printf("Stack underflow");
        return -1;
    }
    int init_top_data = (*top)->data;

    struct Node* temp = *top;
    *top = (*top)->next;
    free(temp);
    return init_top_data;
}

int peek(struct Node* top, int pos)
{
    struct Node* ptr = top;
    for (int i=0;(ptr!=NULL && i<pos-1);i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL)
    return ptr->data;
    else
    return -1;
}

int stackTop(struct Node* top)
{
    return top->data;
}

int stackBottom(struct Node* top)
{
    struct Node* ptr =top;
    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}

void traversal(struct Node* head)
{
    while(head!= NULL)
    {
        printf("%d-> ", head->data);
        head= head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node* top=NULL;
    top = push(top,78);
    top = push(top,44);
    top = push(top,34);
    top = push(top,11);
    top = push(top,99);
    top = push(top,102);
    traversal(top);
    int a = pop(&top);
    printf("popped element is = %d\n",a);
    traversal(top);
    a = peek(top,4);
    printf("at pos 4= %d\n",a);
    printf("stack top= %d\n", stackTop(top));
    printf("stack bottom= %d\n", stackBottom(top));
}