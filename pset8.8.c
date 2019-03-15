#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,m,a[100],b[100],j,t;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	j=0;
	for(i=n;i<(n+m);i++)
	{
		a[i]=b[j];
		j++;
	}
	for(i=0;i<(n+m);i++)
	{
		for(j=i+1;j<(n+m);j++)
		{
			if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	for(i=0;i<(n+m);i++)
	{
		printf("  %d",a[i]);
	}
	return 0;
}
