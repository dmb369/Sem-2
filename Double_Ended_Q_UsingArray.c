// C program to create following menu driven operation 
// on Double Ended Queue using Array

#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int queue_arr[MAX];

int front=-1, rear=-1;

int isFull()
{
    if ((front == 0 && rear == MAX-1) || (front == rear+1)) 
    return 1;
    else
    return 0;
}

int isEmpty()
{
    if (front==-1) return 1;
    else return 0;
}

void insert_from_front(int item)
{
    if (isFull())
    {
        printf("Queue Overflow\n");
        exit(1);
    }
    
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    
    else
    {
        if (front==0) front=MAX-1;
        else front-=1;
    }
    
    queue_arr[front]=item;
}

void insert_from_rear(int item)
{
    if (isFull())
    {
        printf("Queue Overflow\n");
        exit(1);
    }
    
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    
    else
    {
        if (rear == MAX-1) rear=0;
        else rear+=1;
    }
    
    queue_arr[rear]=item;
}

void delete_from_front()
{
    int x;
    if (isEmpty())
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    
    if (front==rear) 
    {
        front=-1;
        rear=-1;
    }
    
    else
    {
        x = queue_arr[front];
        if (front==MAX-1) front=0;
        else front+=1;
    }
    printf("Dequeued element from front is %d\n",x);
}

void delete_from_rear()
{
    int x;
    if (isEmpty())
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    
    if (front==rear) 
    {
        front=-1;
        rear=-1;
    }
    
    else
    {
        x = queue_arr[rear];
        if (rear==0) rear=MAX-1;
        else rear-=1;
    }
    
    printf("Dequeued element from rear is %d\n",x);
}

void display() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }
    printf("Deque elements are: ");
    int i;
    if (front <= rear) {
        for (i = front; i <= rear; i++) {
            printf("%d ", queue_arr[i]);
        }
    } else {
        for (i = 0; i <= rear; i++) {
            printf("%d ", queue_arr[i]);
        }
        for (i = front; i < MAX; i++) {
            printf("%d ", queue_arr[i]);
        }
        
    }
    printf("\n");
}

int main()
{
    int choice,item;
    
    printf("1.Insert from front\n");
    printf("2.Insert from rear\n");
    printf("3.Delete from front\n");
    printf("4.Delete from rear\n");
    printf("5.Display\n");
    printf("6.Quit\n");
    printf("Enter your choice:\n");
    while(1)
    {
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
            printf("Enter the item to be enqueued from front:\n");
            scanf("%d",&item);
            insert_from_front(item);
            break;
            
            case 2:
            printf("Enter the item to be enqueued from rear:\n");
            scanf("%d",&item);
            insert_from_rear(item);
            break;
        
            case 3:
            delete_from_front();
            break;
            
            case 4:
            delete_from_rear();
            break;
            
            case 5:
            display();
            break;
            
            case 6:
            exit(1);
            
            default:
            printf("Wrong Choice\n");
            exit(1);
        }
        printf("Enter your choice:\n");
    }
    return 0;
}
