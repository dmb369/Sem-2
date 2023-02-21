#include <stdio.h> 
struct node
{
int data;
struct node *next; 
};
int main() 
{
struct node node1, node2, node3; 

node1.data=15;
node2.data=20;
node3.data=25;

node1.next=&node2;
node2.next=&node3;
node3.next=NULL;

printf("node1.data: %d\n",node1.data);
printf("node2.data: %d\n",node2.data);
printf("node3.data: %d\n",node3.data);

return 0;
}