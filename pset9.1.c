#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[100],i,j,dif=0,max,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		max=i&j;
		if(dif<max)
			{
				dif=max;
			}
		}
		
	}
	
	printf("%d",max);
	return 0;
}
