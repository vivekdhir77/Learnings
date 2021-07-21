#include <iostream>
#include <cstdlib>

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

struct node* BSTsearch(struct node* root, int key)
{
    if(root==NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data>key){
        BSTsearch(root->left,key);
    }
    else{
        BSTsearch(root->right,key);
    }
}

struct node* BSTsearchIter(struct node* root, int key){
    while(root!=NULL){
        if(root->data==key){
        return root;
        }
        if(root->data>key){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}

int isBST(struct node* root)
{
    static struct node *prev = NULL;
    if(root != NULL)
    {
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

void insert(struct node* root, int key){
    struct node* prev = NULL;
    while(root!= NULL){
        prev = root;
        if(key == root->data){
            printf("cannot insert  %d, already in BST",key);
            return;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node* link = createNode(key);
    if(key<prev->data){
        prev->left =link;
    }
    else{
        prev->right =link;
    }
}

int main()
{

   struct node* p= createNode(5);
   struct node* p1= createNode(3);
   struct node* p2= createNode(6);
   struct node* p3= createNode(1);
   struct node* p4= createNode(4);

   p->left = p1;
   p->right = p2;

   p1->left = p3;
   p1->right = p4;
    /*
        5
       / \
      3   6
     / \
    1   4
    */
//    preOrder(p);
//    printf("\n");
//    postOrder(p);
//    printf("\n");
//    inOrder(p);
//    printf("\n%d",isBST(p));

   insert(p,16);
   printf("%d",p->right->right->data);
}