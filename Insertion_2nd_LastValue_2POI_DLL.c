// Insertion of a node just before the last node in a doubly linkd list of size n 

// Using TWO POINTERS

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

int main()
{
    struct node *new_node, *temp1, *temp2, *start;
    int n;
    scanf("%d",&n);
    new_node=(struct node*)malloc(n*sizeof(struct node));
    scanf("%d",&new_node->data);
    start=new_node;
    temp1=start;
    new_node->pre=NULL;
    
    for (int i=2; i<=n; i++)
    {
        new_node=(struct node*)malloc(n*sizeof(struct node));
        scanf("%d",&new_node->data);
        temp1->next=new_node;
        new_node->pre=temp1;
        temp1=temp1->next;
    }
    
    temp1=start;
    while(temp1->next!=NULL)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    
    new_node=(struct node*)malloc(n*sizeof(struct node));
    scanf("%d",&new_node->data);
    
    temp2->next=new_node;
    new_node->pre=temp2;
    new_node->next=temp1;
    temp1->pre=new_node;
    
    temp1=start;
    while(temp1!=NULL)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
    
    return 0;
}