// Creating a stack using a linked list

#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int count=1;
int first_time=0;

struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

int isFull()
{
    if (count==MAX) return 1;
    else return 0;
}

int main()
{
    struct node *start, *temp, *new_node;
    int choice;
    
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display the top element\n");
    printf("4.Display all stack elements\n");
    printf("5.Quit\n");
    printf("Enter your choice:\n");
    while(1)
    {
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
            printf("Enter the item to be pushed:\n");
            new_node=(struct node*)malloc(10*(sizeof(struct node)));
            scanf("%d",&new_node->data);
            
            if (isFull()) printf("Stack Overflow\n");
            else if (first_time==0)
            {
                start=new_node;
                new_node->pre=NULL;
                temp=start;
                first_time=-1;
                count++;
            }
            else
            {   
                temp->next=new_node;
                new_node->pre=temp;
                count++;
            }
            break;
        
            case 2:
            if (start==NULL)
            {
                printf("Stack Underflow\n");
                exit(1);
            }
            printf("Popped item is: %d\n",temp->data);
            temp->pre->next=NULL;
            free(temp);
            count--;
            break;
            
            case 3:
            if(start==NULL)
            {
                printf("Stack Underflow\n");
                exit(1);
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
