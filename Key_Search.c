//Write a C program using functions and pointers to search for a key in an array. 
//If the search key is found, the function should return its index in the array, else it should return -1.

#include <stdio.h>

int search(int n, int *ptr, int key)
    {
        for (int i=0; i<n; i++)
        {
            if (ptr[i]==key) return i;
        }
        return -1;
    }
    
int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n], *ptr;
    ptr=a;
    for (int i=0; i<n; i++) scanf("%d",&ptr[i]);
    
    int key;
    scanf("%d",&key);
    
    int found=search(n,ptr,key);
    
    printf("%d",found);
    
    return 0;
    
}