#include <stdio.h>


int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    long long int i,j,n,max=0,count=0;
	    scanf("%lld",&n);
	    long long int a[n];
	    for (int i=0; i<n; i++) scanf("%lld",&a[i]);
	    
	    for (i=0; i<n; i++)
	    {
	        if ((a[i]%2)==0)
	        {
	            count++;
	            if (count>max) max=count;
	        }
	        else count=0;
	    }
	    
	    printf("%lld\n",max);
	}
	return 0;
}

