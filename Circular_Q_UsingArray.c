//C program to create following menu driven operation 
//on Circular Queue using array

#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int queue_arr[MAX];

int front=-1, rear=-1;

void enqueue(int item)
{
    if ((front==0 && rear==MAX-1) || (front==rear+1))
    {
        printf("Queue Overflow\n");
        exit(1);
    }
    else
    {
        if (front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            if (rear == MAX-1) rear=0;
            else rear+=1;
        }
        queue_arr[rear]=item;
    }
}

void dequeue()
{
    int x;
    if (front == -1)
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    
    else
    {
        x = queue_arr[front];
        {
            if (front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                if (front == MAX-1) front=0;
                else front+=1;
            }
        }
    }
    
    printf("Dequeued element is %d\n", x);
}

int main()
{
    int choice,item;
    
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Quit\n");
    printf("Enter your choice:\n");
    while(1)
    {
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
            printf("Enter the item to be enqueued:\n");
            scanf("%d",&item);
            enqueue(item);
            break;
        
            case 2:
            dequeue();
            break;
            
            case 3:
            exit(1);
            
            default:
            printf("Wrong Choice\n");
            exit(1);
        }
        printf("Enter your choice:\n");
    }
    return 0;
}
