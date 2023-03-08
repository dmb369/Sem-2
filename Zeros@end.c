// Moving all the zeros in the end
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);
    int count=0;
    
    for (int i=0; i<n; i++)
    {
        if (a[i]!=0)
        {
            int temp=a[i];
            a[i]=a[count];
            a[count]=temp;
            count++;
        }
    }
    
    for (int i=0; i<n; i++) printf("%d",a[i]);

    return 0;
}