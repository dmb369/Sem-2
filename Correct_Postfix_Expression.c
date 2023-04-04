// Write c program to check whether postfix expression is correct or not if yes output should be 1 else 0.

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    
    int op_tor=0, op_and=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='%' || a[i]=='^') op_tor++;
        else op_and++;
    }
    
    if (op_and==(op_tor+1)) printf("1");
    else printf("0");
    
    return 0;
}