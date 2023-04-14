// Implementation of queues using stacks

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int top=-1;
int head=-1;
int stack1[MAX];
int stack2[MAX];

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

void enqueue(int item)
{
    ++top;
    stack1[top]=item;
}

void dequeue()
{
    for (int i=0; i<=top; i++)
    {
        ++head;
        stack2[head]=stack1[top-i];
    }
    top=-1;
    printf("Dequeued element is: %d\n", stack2[head]);
    head--;
    
    for (int i=0; i<=head; i++)
    {
        ++top;
        stack1[top]=stack2[head-i];
    }
    head=-1;
}

int peek()
{
    return stack1[top];
}

int display(int i)
{
    return stack1[i];
}

int main()
{
    int choice, item;
    while(1)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Quit\n");
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
                printf("Enter the element to be enqueued:");
                scanf("%d",&item);
                enqueue(item);
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
               dequeue();
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
            exit(1);
            break;
            
            default:
            printf("Wrong Choice");
        }
    }
    return 0;
}