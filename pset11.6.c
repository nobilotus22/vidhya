#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,j,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]=j;
			}
		}
		if(count>0)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
