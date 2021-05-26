#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* Add_Beg(struct node* head, int val)
{
    struct node* temp;
    temp= (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = temp;
    
    return temp;
}

void Add_last(struct node* head, int val)
{
    struct node* p= head;
    struct node* temp;
    temp= (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    
    while(p->next!=head)
    {
        p = p->next;
    }
    p->next = temp;
}

void traversal(struct node* head)
{ 
    struct node* p= head;
    while(p->next != head)
    {
        printf("%d,", p->data);
        p = p->next;
    }
    printf("%d\n", p->data);
}
struct node* last2nd(struct node* head)
{
    struct node* p=head;
    while(p->next!=head)
    {
        p= p->next;
    }
    return p;
}

int main(){   
struct node* head; 
int size;
scanf("%d", &size);
    
int temp;
scanf("%d", &temp);
head = Add_Beg(head, temp);
for(int i = 1; i < size; i++){//scanning of array is done here.
    scanf("%d", &temp);
    Add_last(head, temp);
}
for(int i = 0; i < size; i++){
    head = last2nd(head);//Making the last element comes first and 
    //all the other elements shift to the right by one place.
    traversal(head);//printing the array
  }	
  return 0;
}
