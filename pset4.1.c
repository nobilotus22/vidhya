#include <stdio.h>

int main(void) {
	// your code goes here
	char a[100];
	int i,count1=0,count2=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==')')
		{
			count1++;
		}
		if(a[i]=='(')
		{
			count2++;
		}
	}
	if(count1==count2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
