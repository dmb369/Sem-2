// Write a c program to create a linked list of size 5 without using malloc function and find number of nodes having value even and odd.

#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n;
    printf("Enter the no. of nodes:");
    scanf("%d",&n);
    struct node list[n];
    
    for (int i=0; i<n; i++)
    {
        scanf("%d",&list[i].data);
        list[i].next=&list[i+1];
    }
    
    int even=0, odd=0;
    for (int i=0; i<n; i++)
    {
        if ((list[i].data%2)!=0) odd++;
        else even++;
    }
    
    printf("Even value node: %d\n",even);
    printf("Odd value node: %d",odd);
}