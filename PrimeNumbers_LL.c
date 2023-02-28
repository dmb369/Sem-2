// Create a linked list of size n and find prime number in list.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *new_node, *temp, *start;
    int n;
    scanf("%d",&n);
    new_node=(struct node*)malloc(n*(sizeof(struct node)));
    scanf("%d",&new_node->data);
    start=new_node;
    temp=start;
    
    for (int i=2; i<=n; i++)
    {
        new_node=(struct node*)malloc(n*(sizeof(struct node)));
        scanf("%d",&new_node->data);
        temp->next=new_node;
        temp=temp->next;
    }
    
    temp=start;
    while(temp!=NULL)
    {
        int i;
        for (i=2; i<=((temp->data)/2); i++)
        {
            if ((temp->data)%i==0) break;
        }
        if ((i-1) == (temp->data)/2) printf("%d ",temp->data);
        temp=temp->next;
    }
    
    return 0;
}