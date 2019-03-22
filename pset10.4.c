#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j,count,a[100],c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count>1)
		{
			c++;
		}
	}
	if(c!=0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
