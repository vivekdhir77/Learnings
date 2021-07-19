#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data =data;
    n->left = NULL;
    n->right = NULL;

    return n;
}
void preOrder(struct node* root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node* root)
{
    if(root != NULL)
    {
        preOrder(root->left);
        preOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct node* root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{
    /*
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data =2;
    p->left = NULL;
    p->right = NULL;


    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p->data  =1;
    p1->left = NULL;
    p1->right = NULL;

    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p->data  = 2;
    p2->left = NULL;
    p2->right = NULL;

// linking the root node
    p->left = p1;
    p->right = p2;
    */

//    constructing root node using functions

   struct node* p= createNode(4);
   struct node* p1= createNode(1);
   struct node* p2= createNode(6);
   struct node* p3= createNode(5);
   struct node* p4= createNode(2);

   p->left = p1;
   p->right = p2;

   p1->left = p3;
   p1->right = p4;
    /*
        4
       / \
      1   6
     / \
    5   2
    */
   preOrder(p);
   printf("\n");
   postOrder(p);
   printf("\n");
   inOrder(p);
}