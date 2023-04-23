#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#define stack_size 100

int top=-1;
int arr[stack_size];

void push(int data) {
    if (top == stack_size - 1) 
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    arr[++top] = data;
}

int pop() {
    if (top == -1) 
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return arr[top--];
}

int main() {
    char pre[stack_size];
    printf("Enter a prefix expression: ");
    scanf("%s",&pre);
    
    int a=strlen(pre);
    for (int i = a-1; i >= 0; i--) 
    {
        if (isdigit(pre[i])) 
        {
            push(pre[i] - '0');
        }
        else 
        {
            int op1 = pop();
            int op2 = pop();

            switch (pre[i]) {
                case '+':
                    push(op1 + op2);
                    break;
                case '-':
                    push(op1 - op2);
                    break;
                case '*':
                    push(op1 * op2);
                    break;
                case '/':
                    push(op1 / op2);
                    break;
                case '%':
                    push(op1 % op2);
                    break;
                default:
                    printf("Invalid operator\n");
                    exit(1);
            }
        }
    }
    int result = pop();
    printf("Result = %d\n", result);
    return 0;
}