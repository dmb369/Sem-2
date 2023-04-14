// Reverse individual words (using stack)
// Time Complexity: O(n)

#include <stdio.h>
#include <stdbool.h>
#define MAX 20

int top=-1;
char stack[MAX];

bool isEmpty()
{
    if (top==-1) return true;
    else return false;
}

void push(char item)
{
    ++top;
    stack[top]=item;
}

void pop()
{
    printf("%c", stack[top]);
    top--;
}

int main()
{
    char str[20];
    scanf("%[^\n]%*c",str);
    
    for (int i=0; str[i]!='\0'; ++i)
    {
        if (str[i]!=' ') push(str[i]);
        else
        {
            while (isEmpty()==false)
            {
                pop();
            }
            printf(" ");
        }
    }
    while (isEmpty()==false)
    {
        pop();
    }
    return 0;
}