// Orderness of brackets

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    char b[n];
    for (int i=n-1; i>=0; i--) 
    {
        if (a[i]==')') b[n-i-1]='(';
        else if (a[i]=='(') b[n-i-1]=')';
        else if (a[i]==']') b[n-i-1]='[';
        else if (a[i]=='[') b[n-i-1]=']';
        else if (a[i]=='{') b[n-i-1]='}';
        else b[n-i-1]='{';
    }
    
    for (i=0; i<n; i++)
    {
        if (a[i]!=b[i])
        {
            printf("false\n");
            break;
        }
    }
    if (i==n) printf("true\n");
}