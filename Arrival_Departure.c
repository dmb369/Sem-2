//Given arrival and departure times of all trains that reach a railway station. 
//Find the minimum number of platforms required for the railway station so that no train is kept waiting.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arrival[n], departure[n];
    for (int i=0; i<n; i++) scanf("%d",&arrival[i]);
    for (int i=0; i<n; i++) scanf("%d",&departure[i]);
    
    int sum_1, sum_2=1;
    for (int i=0; i<n; i++)
    {
        sum_1=1;
        for (int j=0; j<n; j++)
        {
            if (i!=j)
            {
                if ((arrival[i]>=arrival[j]) && (departure[j]>=arrival[i]))
                sum_1++;
            }
        }
        if (sum_1 > sum_2) sum_2=sum_1;
    }
    
    printf("%d",sum_2);
}

