#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,sum=0,sum1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		sum1=a[i]+sum;
		printf("%d ",sum1);
		
	}
	return 0;
}
