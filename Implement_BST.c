// Write a C program to create a BST & display the elements using:

// 1. Inorder
// 2. Preorder
// 3. Postorder

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
};

void Preorder(struct node* node)
{
    if (node == NULL) return NULL;
    printf("%d ", node->data);
    Inorder(node->left);
    Inorder(node->right);
}

void Inorder(struct node* node)
{
    if (node == NULL) return NULL;
    Inorder(node->left);
    printf("%d ", node->data);
    Inorder(node->right);
}

void Postorder(struct node* node)
{
    if (node == NULL) return NULL;
    Inorder(node->left);
    Inorder(node->right);
    printf("%d ", node->data);
}

int main()
{
    struct node *r1=newNode(3);
    
    r1->left=newNode(1);
    r1->right=newNode(4);
    r1->left->right=newNode(2);
    r1->right->right=newNode(5);
    
    printf("Preorder Traversal:\n");
    Preorder(r1);
    printf("\n");
    
    printf("Inorder Traversal:\n");
    Inorder(r1);
    printf("\n");
    
    printf("Postorder Traversal:\n");
    Postorder(r1);
    printf("\n");
    
    return 0;

}