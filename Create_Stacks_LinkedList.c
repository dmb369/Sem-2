// Creating a stack using a linked list

#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int top=-1;

struct node
{
    int data;
    struct node *next;
};

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

int main()
{
    struct node *start, *temp, *new_node, *temp1;
    int choice;
    
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display the top element\n");
    printf("4.Display all stack elements\n");
    printf("5.Quit\n");
    printf("Enter your choice:\n");
    while(1)
    {
        int n=top;
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
            printf("Enter the item to be pushed:\n");
            new_node=(struct node*)malloc(10*(sizeof(struct node)));
            scanf("%d",&new_node->data);
            
            if (isFull()) printf("Stack Overflow\n");
            else 
            {
                if (top==-1)
                {
                    start=new_node;
                    temp=start;
                    top++;
                }
                else
                {   
                    int n=top;
                    temp=start;
                    while(n--)
                    {
                        temp=temp->next;
                    }
                    temp->next=new_node;
                    top++;
                }
            }
            break;
        
            case 2:
            if (isEmpty())
            {
                printf("Stack Underflow\n");
                exit(1);
            }
            int count=top;
            temp=start;
            while(count--)
            {
                temp1=temp;
                temp=temp->next;
            }
            printf("Popped item is: %d\n",temp->data);
            temp1->next=NULL;
            top--;
            free(temp);
            break;
            
            case 3:
            
            if(isEmpty())
            {
                printf("Stack Underflow\n");
                exit(1);
            }
            int n=top;
            temp=start;
            while(n--)
            {
                temp=temp->next;
            }
            printf("Item at the top is %d\n",temp->data);
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
