// Removing duplicate elements using stack

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#define stack_size 100

int top=-1;
int arr[stack_size];

void push(int data) 
{
    if (top == stack_size - 1) 
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    arr[++top] = data;
}

int pop() 
{
    if (top == -1) 
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return arr[top--];
}

void display()
{
    for (int i=0; i<=top; i++)
    {
        printf("%c",arr[i]);
    }
}

int main() {
    char str[stack_size];
    printf("Enter a string: ");
    scanf("%s",&str);
    
    int a=strlen(str);
    for (int i = 0; i<=a-1; i++) 
    {   
        if (top==-1 || str[i]!=arr[top]) push(str[i]);
        else pop();
    }
    
    printf("The new string is:");
    display();
    return 0;
}