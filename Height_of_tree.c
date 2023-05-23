// C program to find the height and depth of a tree

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

int max_depth(struct node *node)
{
    if (node == NULL) return 0;
    
    else
    {
        int l=max_depth(node->left);
        int r=max_depth(node->right);
        
        if (l>r) return (l+1);
        else return (r+1);
    }
}

int main()
{
    struct node *r1=new_node(1);
    
    r1->left=new_node(2);
    r1->right=new_node(3);
    r1->left->right=new_node(4);
    r1->right->right=new_node(5);
    
    printf("%d", max_depth(r1));
    
    return 0;
}