//Given an array of prices[] of length N, representing the prices of the stocks on different days.
// the task is to find the maximum profit possible for buying and selling the stocks on different days using transactions where at most one transaction is allowed. 

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);
    
    int sum=0;
    for (int i=0; i<n-1; i++)
    {
        if (a[i]<a[i+1]) sum+=(a[i+1]-a[i]);
    }
    
    printf("%d",sum);
    return 0;
}