// Write a C program to find k largest (or smallest) elements in an array using heap.

#include <stdio.h>

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Heapify(int a[], int n, int i) 
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left<n && a[left] < a[largest])
        largest = left;

    if (right<n && a[right] < a[largest])
        largest = right;

    if (largest != i) 
    {
        Swap(&a[i], &a[largest]);
        Heapify(a, n, largest);
    }
}

void HeapSort(int a[], int n) {

    for (int i = (n / 2) - 1; i >= 0; i--)
        Heapify(a, n, i);

    for (int i = n - 1; i > 0; i--) 
    {
        Swap(&a[0], &a[i]);
        Heapify(a,i,0);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    printf("Enter the number of highest elements:");
    int b;
    scanf("%d",&b);

    HeapSort(a, n);

    for (int i = 0; i < b; i++) printf("%d ", a[i]);

    return 0;
}