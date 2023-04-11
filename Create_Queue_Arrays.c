// Creating a queue using an array

#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int queue_arr[MAX];

int front=-1, rear=-1;
int first_time=0;

int isFull()
{
    if (rear==MAX-1) return 1;
    else return 0;
}

int isEmpty()
{
    if (front==-1) return 1;
    else return 0;
}

int main()
{
    int choice,item;
    
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display the front element\n");
    printf("4.Display all queue elements\n");
    printf("5.Quit\n");
    printf("Enter your choice:\n");
    while(1)
    {
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
            printf("Enter the item to be enqueued:\n");
            scanf("%d",&item);
            
            if (isFull()) printf("Queue Overflow\n");
            
            else
            {
                if (rear==-1)
                {
                    front=0;
                    rear=0;
                }
                else 
                {
                    rear++;
                }
                queue_arr[rear]=item;
            }
            
            break;
        
            case 2:
            
            if (isEmpty()) printf("Queue Underflow\n");
            
            else
            {
                item=queue_arr[front];
                if (front == rear)
                {
                    front=-1;
                    rear=-1;
                }
                else
                {
                    front++;
                }
                printf("Dequeued item is: %d\n",item);
            }
            break;
            
            case 3:
            
            if (isEmpty()) printf("Queue Underflow\n");
            printf("Item at the top is %d\n",queue_arr[front]);
            break;
            
            case 4:
            
            for (int i=front; i<=rear; i++)
            {
                printf("%d ",queue_arr[i]);
            }
            printf("\n");
            break;
            
            case 5:
            exit(1);
            
            default:
            printf("Wrong Choice\n");
        }
        printf("Enter your choice:\n");
    }
    return 0;
}
