#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* next;
};

struct Node* f = NULL;
struct Node* r = NULL;

void Traversal(struct Node* ptr)
{
    printf("printing the elements of linked list\n");
    while(ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node* n = (struct Node*) malloc(sizeof(struct Node));
    if(n == NULL)
    {
        printf("Queue is full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if(f==NULL)
        r = f = n;
        else
        {
            r->next = n;
            r = n;
        }  
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f ;

    if(f==NULL)
    {
        printf("The queue is empty");
        return -1;
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
        return val;
    }
}


int main()
{
    printf(" %d\n",dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(3);
    enqueue(1);
    enqueue(9);

    Traversal(f);
}