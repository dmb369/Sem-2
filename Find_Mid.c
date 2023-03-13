// C program to output a middle node of a linked list.

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
scanf("%d", &new_node->data);

start=new_node;
temp=new_node;

for (int i=2; i<=n; i++)
{
    new_node=(struct node*)malloc(n*sizeof(struct node));
    scanf("%d", &new_node->data);
    temp->next=new_node;
    temp=temp->next;
}

int mid;
if (n%2==0) mid=(n/2)+1;
else mid=(n+1)/2;

temp=start;
for (int j=1; j<mid; j++) temp=temp->next;
printf("%d", temp->data);


return 0;
}