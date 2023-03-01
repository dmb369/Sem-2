// Updating of any value before a node having value 3 in a doubly linked list of size n

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
    struct node *new_node, *temp, *start;
    int n;
    scanf("%d",&n);
    new_node=(struct node*)malloc(n*sizeof(struct node));
    scanf("%d",&new_node->data);
    start=new_node;
    temp=start;
    new_node->pre=NULL;
    
    for (int i=2; i<=n; i++)
    {
        new_node=(struct node*)malloc(n*sizeof(struct node));
        scanf("%d",&new_node->data);
        temp->next=new_node;
        new_node->pre=temp;
        temp=temp->next;
    }
    
    temp=start;
    while(temp->data!=3)
    {
        temp=temp->next;
    }
    temp->pre->data=55;
    
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    return 0;
}