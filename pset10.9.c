#include<stdio.h>
int main(void)
{
	long int b;
	int rem,sum,pos=1;
	scanf("%ld",&b);
	while(b!=0)
	{
		rem=b%10;
		sum=sum+rem*pos;
		pos=pos*2;
		b=b/10;
	}
	printf("%lo",sum);
}
