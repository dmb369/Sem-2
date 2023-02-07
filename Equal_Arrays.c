// C program to find equal arrays.
#include <stdio.h>

int main() {
    int m,n;
    scanf("%d %d",&m, &n);
    int a[m], b[n];
    for (int i=0; i<m; i++) scanf("%d",&a[i]);
    for (int i=0; i<n; i++) scanf("%d",&b[i]);

    if (m!=n) printf("They are not equal.");
    else 
    {
        for (int i=0; i<m; i++)
        {
            for (int j=i+1; j<m; j++)
            {
                if (a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (b[i]>b[j])
                {
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        
        int flag=0;
        for (int i=0; i<n; i++)
        {
            if (a[i]!=b[i]) 
            {
                flag++;
                break;
            }
        }
        
        if (flag==1) printf("They are not equal.");
        else printf("They are equal.");
        
    }
    return 0;
}