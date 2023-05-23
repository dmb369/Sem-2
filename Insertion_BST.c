// Insertion in a binary tree

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

struct node *insert(struct node *node, int data)
{
    if (node==NULL) 
    {
        node=new_node(data);
        return node;
    }
    
    if (data < node->data) node->left=insert(node->left,data);
    
    else node->right=insert(node->right,data);
    
    return node;
}

void inorder(struct node *node)
{
    if (node!=NULL)
    {
        inorder(node->left);
        printf("%d ",node->data);
        inorder(node->right);
    }
}

int main()
{
    struct node *r1=NULL;
    
    r1=insert(r1,20);
    insert(r1,25);
    insert(r1,60);
    insert(r1,15);
    insert(r1,12);
    insert(r1,10);
    
    inorder(r1);
    
    return 0;
}