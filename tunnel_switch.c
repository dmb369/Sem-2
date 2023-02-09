#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    long int n;
	    scanf("%ld",&n);
	    long int a[n], i, j, count=1, temp, sum=0;
	    for (i=0; i<n; i++) scanf("%ld",&a[i]);
	    long int max=0, start=0;

	    for (i=start; i<n; i++)
	    {
	        for (j=i+1; j<a[i]; j++)
	        {
	            if (j>n) break;
	            else if (max<=a[j])
	            {
	               max=a[j];
	               start=j;
	            }
	            count++;
	        }
	        max=0;
	    }
	    
	   
	   printf("%d\n",count);
	    
	}
	return 0;
}

