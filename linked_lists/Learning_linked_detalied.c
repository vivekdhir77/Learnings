#include<stdio.h>
#include<stdlib.h>
/*
add at beginning
add at end
add at between

remove at beginning
remove at end
remove at between
*/
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* add_beg(Node* head, int val)// head = -> | 25 | + |-> | 7 | + |-> | 11 | + |->NULL
{
    Node* ptr= (Node *)malloc(sizeof(Node));// |  | + |
    ptr->data= val;// | val | + |
    ptr->next=head;//  | val | + | ->   | 25 | + |->   | 7 | + |->    | 11 | + |->NULL
    return ptr;
}
void add_end(Node* head, int val)
{
    Node* ptr= (Node *)malloc(sizeof(Node));// |  | + |
    ptr->data= val;// | val | + |
    ptr->next =NULL;
    while(head->next!=NULL)
    {
        head = head->next;
    }
    head->next = ptr;// | 25 | + |->   | 7 | + |->    | 11 | + |->   | val | + |->NULL
}

Node* add_bet(Node* head, int val, int index)
{
    Node* p= head;
    int i=0;// checks if we reached the specific index or not
    Node* ptr= (Node *)malloc(sizeof(Node));// |  | + |
    ptr->data= val;// | val | + |

    while(i<index-1)
    {
        p = p->next;
        i++;
    }
    // | 25 | +. |      <@> | 7 | + |->    | 11 | + |-> NULL
                
    //       +.| val | <@> |
    ptr->next= p->next;
    p->next = ptr;// breaking the link
    return head;
}

void traversal(Node* head)
{
    while(head!= NULL)
    {
        printf("%d-> ", head->data);
        head= head->next;
    }
    printf("NULL\n");
}

Node* rm_beg(Node* head)
{
    Node* p= head->next;
    free(head);
//   head           p
    // | 25 | + |-> | 7 | + |-> | 11 | + |->NULL
// p
// | 7 | + |-> | 11 | + |->NULL
    return p;
}

void rm_end(Node* head)
{
    Node* prev_end = head;
    Node* end = head->next;
    while(end->next!= NULL)
    {
        prev_end=prev_end->next;
        end = end->next;
    }
    prev_end->next = NULL;
    free(end);
}

Node* rm_bet(Node* head, int index)
{
    Node* p= head;
    Node* q= head->next;
    int i=0;
    while(i!=index-1)
    {
        p= p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}
int main()
{
    Node* head;
    Node* first;
    Node* sec;

    head = (Node *)malloc(sizeof(Node));//  |  | + |

    first = (Node *)malloc(sizeof(Node));//  |  | + |

    sec = (Node *)malloc(sizeof(Node));//  |  | + |

    

    head->data= 25;
    head->next= first;// | 25 | +)-> |  | + |

    first->data= 7;
    first->next= sec;// | 25 | +)-> | 7 | +)-> |  | + |


    sec->data= 11 ;
    sec->next= NULL;//| 25 | + |-> | 7 | + |-> | 11 | + |->NULL
    printf("before adding at beginning\n");
    traversal(head);
    head = add_beg(head, 45);
    printf("\nafter adding at beginning\n");
    traversal(head);

    printf("\nbefore atting at end\n");
    traversal(head);
    add_end(head, 77);
   printf("After atting at end\n");
   traversal(head);

   printf("\nbefore adding at index\n");
   traversal(head);
   head = add_bet(head, 102 , 2);
   printf("After adding at the index\n");
   traversal(head);


    printf("\nbefore removing from beg\n");
    traversal(head);
    head = rm_beg(head);
    printf("\nAfter removing from beg\n");
    traversal(head);


    printf("\nbefore removing from End\n");
    traversal(head);
    rm_end(head);
    printf("\nAfter removing from End\n");
    traversal(head);


    printf("\nbefore removing from the index\n");
    traversal(head);
    head = rm_bet(head, 2);
    printf("\nAfter removing from the index\n");
    traversal(head);
}
