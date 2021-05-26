#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void traversal(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d-> ", ptr->data);
        ptr= ptr->next;
    }
}

struct node* insert_Atbegining(struct node *head, int input)
{
    struct node* p;
    p = (struct node*) malloc (sizeof(struct node));
    p->data= input;
    p->next=head;
    
    return p;
}

struct node* insert_Atbetween(struct node *head, int index, int input)
{
    struct node* p= head;
    struct node* ptr;
    
    
    ptr = (struct node*) malloc (sizeof(struct node));
    ptr->data= input;
    int i=0;
    while(i<index-1)
    {
        p = p->next;
        i++;
    }
    
    ptr->next = p->next;
    p->next = ptr;
    
    return head;
}

struct node* insertion_AtEnd(struct node *head, int input)
{
    struct node *ptr = head;
    
    struct node *p = (struct node*) malloc (sizeof(struct node));
    p->data = input; 
    p->next= NULL;
    
    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    
    return head;
}

struct node* insertion_AtGivenNode(struct node *head, struct node *given,
int input)
{
    struct node* p = (struct node*) malloc (sizeof(struct node));
    p->data = input;
    p->next = given->next;
    given->next = p;

    return head;
}

void Delete_list(struct node *head)
{
    struct node* ptr;
    while(head!=NULL)
    {
        ptr = head;
        head = head->next;
        free(ptr);
    }
}

struct node* First_Node_deltion(struct node *head)
{
    struct node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node* Delete_AtIndex(struct node *head, int index)
{
    struct node* p= head;
    struct node* q= head->next;
    for(int i=0; i<index-1; i++)
    {
        p = p->next;
        q= q->next; 
    }
    p->next = q ->next;
    free(q);
    return head;
    
}

void Delete_lastElement(struct node* head)
{
    struct node* a= head;
    struct node* b= head->next;
    while(b->next!=NULL)
    {
        a=a->next;
        b=b->next;
    }
    a->next=NULL;
    free(b);
}

struct node* Delete_A_given_val(struct node *head, 
                            int val)
{
    struct node* p = head;
    while(p->next != NULL)
    {
        if (p->data == val)
        {
            
        }
    }
    
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    
    head = (struct node*) malloc (sizeof(struct node));
    first = (struct node*) malloc (sizeof(struct node));
    second = (struct node*) malloc (sizeof(struct node));
    third = (struct node*) malloc (sizeof(struct node));
    
    head->data = 44;
    head->next = first;
    
    first->data = 30;
    first->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 15;
    third->next = NULL;
    
    traversal(head);
    //head = insert_Atbegining(head, 99);
    //head = insert_Atbetween(head, 1, 99);
    //head = insertion_AtEnd(head, 77);
    //head=insertion_AtGivenNode(head, second,62);
    //head= First_Node_deltion(head);
    Delete_lastElement(head);
    printf("\nafter deleting 1st node\n");
    traversal(head);
    
    Delete_list(head);
}
