#include <stdio.h>

int main(void) {
	// your code goes here
	int n,k,rem,i=0;
	scanf("%d%d",&n,&k);
	while(n!=0)
	{
		rem=n%10;
		if(rem>k)
		{
			i=1;
			printf("no");
			break;
		}
		n=n/10;
	}
	if(i==0)
	{
		printf("yes");
	}
	return 0;
}
