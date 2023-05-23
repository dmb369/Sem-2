// Tree Traversals

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

void print_preorder(struct node *node)
{
    
    if (node!=NULL)
    {
        printf("%d ",node->data);
        print_preorder(node->left);
        print_preorder(node->right);
    }

    else return NULL;
}

void print_inorder(struct node *node)
{
    if (node!=NULL)
    {
        print_inorder(node->left);
        printf("%d ",node->data);
        print_inorder(node->right);
    }

    else return NULL;
}

void print_postorder(struct node *node)
{
    if(node!=NULL)
    {
        print_postorder(node->left);
        print_postorder(node->right);
        printf("%d ",node->data);
    }

    else return NULL;
}

int main()
{
    struct node *r1=new_node(1);
    
    r1->left=new_node(2);
    r1->right=new_node(3);
    r1->left->right=new_node(4);
    r1->left->left=new_node(5);
    r1->right->right=new_node(6);
    r1->right->left=new_node(7);
    
    print_preorder(r1);
    printf("\n");
    print_inorder(r1);
    printf("\n");
    print_postorder(r1);
    
    return 0;
}