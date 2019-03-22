#include <stdio.h>

int main(void) 
{
	int n,p,k,i=0,n1,count=1,rem,sum,num;
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		n=n/10;
		count=count*10;
	}
	count=count/10;
	rem=n1%10;
	num=n1/count;

	sum=rem+num;
	printf("%d",sum);
	return 0;
}
