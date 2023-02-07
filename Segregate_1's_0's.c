// C program to segregate 0s and 1s.

#include<stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);
   
    int count=0;
    for (int i=0; i<n; i++) 
    {
        if (a[i]==0) count++;
    }

    for (int i=0; i<count; i++) printf("0 ");
    for (int j=0; j<(n-count); j++) printf("1 ");
    return 0;
}