// Deleting last node in a circular linked node
// Single Linked List
// Using 1 pointer

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *new_node, *start, *temp;
    int n;
    scanf("%d",&n);
    new_node=(struct node*)malloc(n*(sizeof(struct node)));
    scanf("%d",&new_node->data);
    
    start=new_node;
    temp=new_node;
    
    for (int i=2; i<=n; i++)
    {
        new_node=(struct node*)malloc(n*(sizeof(struct node)));
        scanf("%d",&new_node->data);
        temp->next=new_node;
        temp=temp->next;
    }
    
    temp=start;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=start;
    
    temp=start;
    while(temp->next!=start)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    return 0;
    
    
}