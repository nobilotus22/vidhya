#include <stdio.h>
int main(void) {
	int a[10],i,n,result,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
		result=i&j;
	}
	printf("%d",result);
	return 0;
}
