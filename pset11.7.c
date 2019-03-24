#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,n,count=0,count1=0,c=0,c1=0;
	char s[100];
	char x[100];
    gets(s);
	scanf("%s",x);
	for(i=0;s[i]!='\0';i++)
	{
		c++;
	}
	for(i=0;x[i]!='\0';i++)
	{
		c1++;
	}
	for(i=0;i<c;i++)
	{
		if((s[i]==" ")||(i==0))
		{
			count++;
			if(s[i+1]==x[0])
			{
				j=0;
				for(k=i+1;s[k]!=" ";k++)
				{
					if(s[k]==x[j])
					{
						count1++;
						j++;
					}
				}
				if(count1==c1)
				{
					printf("%d",count);
				}
			}
		}
		
	}
	return 0;
}
