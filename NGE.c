// Next Greater Element

// Creating a stack using an array

#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int stack_arr[MAX];

int top=-1;
int first_time=0;

int isFull()
{
    if (top==MAX-1) return 1;
    else return 0;
}

int main()
{
    int choice,item;
    
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display the top element\n");
    printf("4.Display all stack elements\n");
    printf("5.Next Greater Element\n");
    printf("6.Quit\n");
    printf("Enter your choice:\n");
    while(1)
    {
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("Enter the item to be pushed:\n");
            scanf("%d",&item);
            
            if (isFull()) printf("Stack Overflow\n");
            
            top++;
            stack_arr[top]=item;
            
            break;
        
            case 2:
            if (top==-1)
            {
                printf("Stack Underflow\n");
                exit(1);
            }
            
            item=stack_arr[top];
            top--;
            printf("Popped item is: %d\n",item);
            break;
            
            case 3:
            if(top==-1)
            {
                printf("Stack Underflow\n");
                exit(1);
            }

            printf("Item at the top is %d\n",stack_arr[top]);
            break;
            
            case 4:
            
            for (int i=0; i<=top; i++)
            {
                printf("%d ",stack_arr[i]);
            }
            printf("\n");
            break;
            
            case 5:
            
            for (int i=0; i<=top; i++)
            {
                int count=0;
                for (int j=i+1; j<=top; j++)
                {
                    if (stack_arr[i] < stack_arr[j]) 
                    {
                        printf("%d -> %d\n", stack_arr[i], stack_arr[j]);
                        count=-1;
                        break;
                    }
                }
                if (count==0)
                {
                    printf("%d -> -1\n", stack_arr[i]);
                }
            }
            break;
            
            case 6:
            exit(1);
            
            default:
            printf("Wrong Choice\n");
        }
        printf("Enter your choice:\n");
    }
    return 0;
}
