#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,j,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		sum=a[i]+a[i+1]+sum;
	}
	printf("%d",sum);
	return 0;
}
