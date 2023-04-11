// Creating a queue using a linked list

#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int front=-1, rear=-1;

struct node
{
    int data;
    struct node *next;
};

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
    struct node *start, *temp, *new_node;
    int choice;
    
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
            new_node=(struct node*)malloc(10*(sizeof(struct node)));
            scanf("%d",&new_node->data);
            
            if (isFull()) 
            {
                printf("Queue Overflow\n");
                exit(1);
            }
            
            else
            {
                if (rear==-1)
                {
                    start=new_node;
                    temp=start;
                    front=0;
                    rear=0;
                }
                
                else
                {   
                    temp->next=new_node;
                    rear++;
                }
            }
    
            break;
        
            case 2:
            
            if (isEmpty())
            {
                printf("Queue Underflow\n");
                exit(1);
            }
            else
            {
                printf("Dequeued item is: %d\n",start->data);
                temp=start;
                temp=temp->next;
                start=temp;
                if (front == rear)
                {
                    front=-1;
                    rear==-1;
                }
                else
                {
                    front++;
                }
            }
            
            break;
            
            case 3:
            if(isEmpty())
            {
                printf("Stack Underflow\n");
                exit(1);
            }
            temp=start;
            printf("Item at the front is %d\n",temp->data);
            break;
            
            case 4:
            temp=start;
            while(temp!=NULL)
            {
                printf("%d ",temp->data);
                temp=temp->next;
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
