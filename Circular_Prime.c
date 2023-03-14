// Create a circular linked list of size n and find prime number in list.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int isPrime(int n)
{
    int i;
    for (i=2; i<=(n/2); i++)
    {
        if (n%i==0) break;
    }
    if ((i-1) == (n/2)) printf("%d ",n);
}

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
    temp->next=start;
    
    temp=start;
    while(temp->next!=start)
    {
        isPrime(temp->data);
        temp=temp->next;
    }
    isPrime(temp->data);
    
    return 0;
}