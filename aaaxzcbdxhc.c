#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,j=0,b[100],min,k=0,l=0,max=0,m=0,count[100],pos[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count[0]=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
			count[l]++;
		}
		else
		{
			printf("")
		l++;
		count[l]=0;
		}
	}
	for(i=0;i<l;i++)
	{
		if(max<count[i])
		{
			max=count[i];
			k=i;
		}
	}min=100;

	max=k+max;
//	k=pos[k];
	for(i=k-1;i<max-1;i++)
	{
		if(min>b[i])
		{
			min=b[i];	
		}
		//printf("%d",b[i]);
	}
	printf("%d",min);
	return 0;
}
