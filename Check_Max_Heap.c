// Given an array, how to check if the given array represents a Binary Max-Heap.


#include <stdio.h>

int check_MaxHeap(int a[], int n, int i)
{
    if (i >= (n - 1) / 2) return 1;
    if ((a[i]>=a[2*i+1]) && (a[i]>=a[2*i+2]) && check_MaxHeap(a, n, 2*i+1) && (check_MaxHeap(a, n, 2*i+2))) return 1;
    else return 0;

}

int main() 
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);
    
    if (check_MaxHeap(a, n, 0)) printf("True\n");
    else printf("False\n");

    return 0;
}