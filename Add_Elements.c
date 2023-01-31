// C program to add elements in the array.

#include <stdio.h>

int main(void)
{
    int n, loc, b;
    scanf("%d %d %d",&n,&loc,&b);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);

    if (loc<=n)
    {
        for (int i=n; i>=loc; i--) a[i]=a[i-1];
        a[loc-1]=b;
        for (int i=0; i<n+1; i++) printf("%d ",a[i]);
    }
    else printf("Invalid Position");
    
}