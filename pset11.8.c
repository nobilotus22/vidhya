#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		sum=a[i-1]+a[i];
		a[i]=sum;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
