#include <stdio.h> 
struct node
{
int data;
struct node *next; 
};
int main() 
{
struct node node1, node2, node3, *start, *temp; 

node1.data=15;
node2.data=20;
node3.data=25;

node1.next=&node2;
node2.next=&node3;
node3.next=NULL;

start=&node1;
temp=start;

while(temp!=NULL)
{
    printf("%d\n",temp->data);
    temp=temp->next;
}

return 0;
}