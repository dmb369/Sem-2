// C program to find the missing number.

#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    int count=1;
    for (int i=0; i<n; i++)
    {
        if (a[i]!=count)
        {
            printf("%d\n",a[i]);
            printf("%d",count);
            break;
        }
        count++;
    }
    
    return 0;
}