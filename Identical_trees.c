// Determine if the given two trees are identical or not

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* new_node (int n)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=n;
    node->left=NULL;
    node->right=NULL;
    
    return (node);
};

int identical(struct node* c, struct node* d)
{
    if (c==NULL && d==NULL) return 1;
    
    if (c!=NULL && d!=NULL)
    {
            return (c->data == d->data && identical(c->left, d->left) && identical(c->right, d->right));
    }
    
    return 0;
}

int main()
{
    struct node *r1=new_node(1);
    struct node *r2=new_node(1);
    
    r1->left=new_node(2);
    r1->right=new_node(3);
    r1->left->right=new_node(4);
    r1->right->right=new_node(5);
    
    r2->left=new_node(2);
    r2->right=new_node(3);
    r2->left->right=new_node(4);
    r2->right->right=new_node(5);
    
    if (identical(r1, r2)) printf("Yes\n");
    else printf("No\n");
    
    //printf("Yes\n");
    
    return 0;

}

