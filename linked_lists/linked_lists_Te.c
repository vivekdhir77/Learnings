#include <stdio.h>
#include <stdlib.h>
#define ll long long int

typedef struct linkedlist{
    int data;
    struct linkedlist *next;
}node;

node *head;


void addBeginning(int n)
{
    node *temp;
    temp = (node*) malloc(sizeof(node));
    temp->data=n;
    temp->next=head;
    head = temp;
}

void addKey(int index,int number)
{
    node *add;
    add=(node*)malloc(sizeof(node));
    add->data=number;
    node *temp=head;
    for(int j=0;j<(index-1);j++)
    {
        temp=temp->next;
    }
    node *temp1=temp;
    temp1=temp1->next;
    temp->next=add;
    add->next=temp1;

}

void deletefirst()
{
    node *temp;
    temp = head;
    head=temp->next;
    temp->next=NULL;
    free(temp);

}

void deletelast()
{
    node *temp;
    temp=head;
    while((temp->next)->next!=NULL)
    {
        temp=temp->next;
    }
    node *temp1=temp;
    temp1=temp1->next;
    free(temp1);
    temp->next=NULL;

}

void deleteKey(int n)
{
    node *temp=head;
    for(int i=0;i<(n-1);i++)
    {
        temp=temp->next;
    }
    node *next1=temp->next;
    temp->next=next1->next;
    next1->next=NULL;
    free(next1);
}

void printData(node *top)
{
    if(top!=NULL){
        printf("%d->",top->data);
        printData(top->next);
    }
    else
        printf("NULL\n");
}

void addEnd(int n)
{
    node *temp,*temp1;
    temp = (node *)malloc(sizeof(node));
    temp->data=n;
    temp->next=NULL;
    temp1 = head;
    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next=temp;

}

int search(node *top,int val)
{
    node *temp;
    temp= top;
    int i=0;
    int stat=0;
    while(temp!=NULL && stat==0)
    {
        if(temp->data==val)
            stat=1;
        i++;
        temp=temp->next;
    }
    if(stat==0)
        return -1;
    else
        return i;

}

int main()
{
    addBeginning(1);
    addBeginning(2);
    addBeginning(3);
    printData(head);
    deletefirst();
    printData(head);
    addEnd(5);
    printData(head);
    printData(head);
    int j=2;
    if(search(head,j)==-1)
        printf("%d Not Found\n",j);
    else
        printf("%d at location %d\n",j,search(head,j));
    return 0;
}