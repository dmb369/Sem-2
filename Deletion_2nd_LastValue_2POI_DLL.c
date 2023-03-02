// Delete the second node in a doubly linked list
// Using 2 pointer 

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
    temp1=new_node;
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

    temp2->pre->next=temp1->pre;
    temp1->pre=temp2->pre;
    
    temp1=start;
    while(temp1!=NULL)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
    
    return 0;
}