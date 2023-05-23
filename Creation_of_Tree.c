// Creation of a tree

# include <stdio.h>
# include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *new_node (int n)
{
    struct node *node = (struct node*)malloc(sizeof(struct node));
    
    node->data=n;
    node->left=NULL;
    node->right=NULL;
    
    return (node);
};

int main()
{
    struct node *r1=new_node(1);
    
    r1->left=new_node(2);
    r1->right=new_node(3);
    r1->left->right=new_node(4);
    r1->right->right=new_node(5);
    
    getchar();
    
    return 0;
}