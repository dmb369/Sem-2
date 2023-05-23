// C program to print the level order of a binary tree

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

void level_order(struct node *node, int level)
{
    if (node==NULL) return;
    
    if (level==1) printf("%d ",node->data);
    
    else if (level>1)
    {
        level_order(node->left, level-1);
        level_order(node->right, level-1);
    }
}

void print_level(struct node *node)
{
    int h=max_depth(node);
    
    for (int i=1; i<=h; i++)
    {
        level_order(node,i);
        printf("\n");
    }
}

int main()
{
    struct node *r1=new_node(1);
    
    r1->left=new_node(2);
    r1->right=new_node(3);
    r1->left->right=new_node(4);
    r1->right->right=new_node(5);
    
    print_level(r1);
    
    return 0;
}