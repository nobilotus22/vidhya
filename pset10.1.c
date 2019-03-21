#include<stdio.h>
#include<conio.h>
void main()
{
long int a,deci=0,i,res=1,pow=1;
clrscr();
printf("enter value");
scanf("%ld",&a);
for(i=0;a>=1;i++)
{
deci=a%2;
res=deci*pow+res;
a=a/2;
pow=pow*10;
}
printf("%ld",res);
getch();
}

