#include <stdio.h>

int main(void) 
{
	int n,p,k,i=0,n1,count=1,rem,d;
	scanf("%d%d%d",&n,&p,&k);
	n1=n;
	d=p+k;
	while(n!=0)
	{
		n=n/10;
		count=count*10;
	}
	while(n1>9)
	{
		count=count/10;
		rem=n1/count;
		n1=n1-count;
		i++;
		if(i==d)
		{
			printf("%d  ",rem%10);
			break;
		}
	}
	return 0;
}
