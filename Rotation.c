// C-program to perform rotation in a linked list

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
    int n, a;
    scanf("%d %d",&n, &a);
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
    
    while(a--)
    {
        temp=start;
        int b=temp->data;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        int l=temp->data;
        while(temp->pre->pre!=NULL)
        {
            temp->data=temp->pre->data;
            temp=temp->pre;
        }
        temp=temp->pre;
        temp->data=l;
        temp=start;
        temp->next->data=b;
    }
    
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}