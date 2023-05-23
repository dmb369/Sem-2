// Number of Swaps in Modified Bubble Sort

#include <stdio.h>
#include <stdbool.h>
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void Modified_bubbleSort(int a[], int n)
{
   bool flag;
   for (int i = 0; i < n-1; i++)
   {
     int count=0;
     flag = false;
     for (int j = 0; j < n-i-1; j++)
     {
        if (a[j] > a[j+1])
        {
           swap(&a[j], &a[j+1]);
           count++;
           flag = true;
        }
     }

    printf("Round %d: %d\n", i+1, count);

    if (flag == false)
        break;
   }
}
 
void display(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", a[i]);
}
 

int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);
    
    Modified_bubbleSort(a, n);
    display(a, n);
    
    return 0;
}