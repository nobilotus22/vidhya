#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[20];
	scanf("%s",str);
	int len,f;
	len=strlen(str);
	if(str[0]<'4' && str[1]<'10' && str[2]=='/' && str[3]<'2' && str[4]<'3' && str[5]=='/' && str[6]<'10' && str[7]<'10' && str[8]<'10' && str[9]<'10')
	{
		f=1;
	}
	else
	{
		f=0;
 
	}
	if(f==0)
	{
		printf("no");
	}
	if(f==1)
	{
		printf("yes");
	}
 
	return 0;
}
