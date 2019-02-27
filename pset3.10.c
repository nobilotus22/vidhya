#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char a[100],b[100];
	int i,j,l1,l2,k,count=0;
	scanf("%s%s",a,b);
	scanf("%d",&k);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l1;j++)
		{
			if(a[i]==b[j])
			{
				count++;
				a[i]='$';
				break;
			}
		}
	}
	count=l1-count;
	if(count==k)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	}
	return 0;
}
