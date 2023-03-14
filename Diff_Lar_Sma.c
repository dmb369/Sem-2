// Find the difference between largest number and smallest number in the given linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *new_node, *start, *temp, *temp1;
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
    
    int max=start->data;
    temp=start;
    while(temp!=NULL)
    {
        if (max<temp->data) max=temp->data;
        temp=temp->next;
    }

    
    int min=start->data;
    temp=start;
    while(temp!=NULL)
    {
        if (min>temp->data) min=temp->data;
        temp=temp->next;
    }
   
    int diff=(max-min);
    printf("%d ",diff);
    
    return 0;
}