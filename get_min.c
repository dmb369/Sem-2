// Getting the minimum value in a stack

#include<stdio.h>
#include<stdlib.h>

#define max 10

int s_arr[max];
int top=-1;

int isFull()
{
    if (top==max-1) return 1;
    else return 0;
}

int isEmpty()
{
    if (top==-1) return 1;
    else return 0;
}

void push(int n)
{
    if (isFull()) 
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    else
    {
        top++;
        s_arr[top]=n;
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Undeflow\n");
        exit(1);
    }
    printf("Popped item is: %d\n",s_arr[top]);
    top--;
}

void peek()
{
    printf("Item at the top is %d\n",s_arr[top]);
}

void getMin()
{
    int min=s_arr[0];
    for (int i=1; i<=top; i++)
    {
        if (s_arr[i]<min) min=s_arr[i];
    }
    printf("The minimum value is %d\n",min);
}

int main()
{
    int choice, item;
    
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Mini\n");
    printf("5. Quit\n");
    printf("Enter your choice:");
        
    while(1)
    {
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("Enter the item to be pushed:");
            scanf("%d",&item);
            push(item);
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            peek();
            break;
            
            case 4:
            getMin();
            break;
            
            case 5:
            exit(1);
            break;
            
            default:
            printf("Wrong Choice\n");
        }
        printf("Enter your choice:");
    }
    return 0;
}