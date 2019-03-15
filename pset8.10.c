#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[100],i,j,dif,max,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	max=10;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dif=a[i]-a[j];
			if(dif<max)
			{
				max=dif;
			}
		}
	}
	printf("%d",max);
	return 0;
}
