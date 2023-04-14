// Program to sort a stack using another stack

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int top=-1;
int stack[MAX];

int isFull()
{
    if (top==MAX-1) return 1;
    else return 0;
}

int isEmpty()
{
    if (top==-1) return 1;
    else return 0;
}

void push(int item)
{
    ++top;
    stack[top]=item;
}

void pop()
{
    printf("Popped item is: %d\n", stack[top]);
    top--;
}

int peek()
{
    return stack[top];
}

int display(int i)
{
    return stack[i];
}

void sort(int stack[], int n)
{
    int tmpStack[n];
    int head=-1;
    while(n>=0)
    {
        int tmp = stack[n];
        n--;
        while (head>=0 && tmpStack[head] < tmp)
        {
            stack[++n]=tmpStack[head];
            head--;
        }
        tmpStack[++head]=tmp;
    }
    printf("Sorted stack is: ");
    while(head>=0)
    {
        printf("%d ", tmpStack[head]);
        head--;
    }
    printf("\n");
}

int main()
{
    int choice, item;
    while(1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Sort\n");
        printf("6. Quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            if (isFull())
            {
                printf("Stack Overflow");
                exit(1);
            }
            else
            {
                printf("Enter the element to be pushed:");
                scanf("%d",&item);
                push(item);
            }
            break;
            
            case 2:
            if (isEmpty())
            {
                printf("Stack Underflow");
                exit(1);
            }
            else 
            {
               pop();
            }
            break;
            
            case 3:
            if (isEmpty())
            {
                printf("Stack Underflow");
                exit(1);
            }
            else 
            {
                printf("Element at the top is: %d\n",peek());
            }
            break;
            
            case 4:
            for (int i=0; i<=top; i++)
            {
                printf("%d ", display(i));
            }
            printf("\n");
            break;
            
            case 5:
            int n=top;
            sort(stack, n);
            break;
            
            case 6:
            exit(1);
            break;
            
            default:
            printf("Wrong Choice");
        }
    }
    return 0;
}