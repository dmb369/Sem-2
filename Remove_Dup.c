// C program to remove all the duplicate values in a linked list

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
    
    temp=start;
    while (temp!=NULL)
    {
        temp1=temp;
        while (temp1->next!=NULL)
        {
            if (temp->data==temp1->next->data)
            {
                temp1->next=temp1->next->next;
            }
            else { temp1=temp1->next; }
        }
        temp=temp->next;
    }
    
    temp=start;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    return 0;
    
    
}