#include<stdio.h>
#include<conio.h>
int main()
{
char str[20];
int i=0,count=0;
gets(str);
while(str[i]!='\0')
{
if(str[i]=='}')
{
count--;
if(str[i]=='{')
{
count++;
}
if(count<0)
{
printf("invalid");
break;
}
}
i++;
}
if(count==0)
{
printf("valid");
}
return 0;
}
