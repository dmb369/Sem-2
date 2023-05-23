// Search in Integer Matrix

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
     flag = false;
     for (int j = 0; j < n-i-1; j++)
     {
        if (a[j] > a[j+1])
        {
           swap(&a[j], &a[j+1]);
           flag = true;
        }
     }

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
    printf("Enter the size of the integer matrix of the size N*M:");
    int n, m;
    scanf("%d %d",&n, &m);
    
    printf("Enter the target integer:");
    int key;
    scanf("%d",&key);
    
    int a[n*m];
    for (int i=0; i<n*m; i++) scanf("%d",&a[i]);
    Modified_bubbleSort(a, n*m);
    
    int b[n][m];
    int count=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            b[i][j]=a[count];
            count++;
        }
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    int i,j, flag=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (b[i][j]==key)
            {
                printf("Found Item at %d %d\n",i,j);
                flag=-1;
            }
        }
    }
    
    if (i==n && j==m && flag==0) printf("Element not present.");
    
    return 0;
}