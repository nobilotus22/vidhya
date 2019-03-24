#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,j,count,b[100],m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
				b[j]=j;
			}
		}
	}
	return 0;
}

