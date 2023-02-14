// Write a program in C to sort an array using Pointer.

#include <stdio.h>

void sortArray (int n, int *ptr)
    {
        int i,j,temp;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if (ptr[i]<ptr[j])
                {
                    temp=ptr[j];
                    ptr[j]=ptr[i];
                    ptr[i]=temp;
                }
            }
        }
    }
    
int main()
{   
    int n;
    scanf("%d",&n);
    int a[n], *ptr;
    ptr=a;
    
    for (int i=0; i<n; i++) scanf("%d", &ptr[i]);
    
    sortArray(n,a);
    
    for (int i=0; i<n; i++) printf("%d ",*(ptr+i));
    
    return 0;
}