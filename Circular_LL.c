// Creating a circular linked list in a single linked list

#include <stdio.h> 
#include <stdlib.h>
struct node
{
int data;
struct node *next; 
};

int main() 
{
int n;
scanf("%d",&n);

struct node *new_node, *start, *temp; 

new_node=(struct node*)malloc(n*sizeof(struct node));
printf("Enter value in first node: ");
scanf("%d", &new_node->data);

start=new_node;
temp=new_node;

for (int i=2; i<=n; i++)
{
    new_node=(struct node*)malloc(n*sizeof(struct node));
    printf("Enter value in node: ");
    scanf("%d", &new_node->data);
    temp->next=new_node;
    temp=temp->next;
}

temp->next=start;

temp=start;
while(temp->next!=NULL)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d ",temp->data);

return 0;
}