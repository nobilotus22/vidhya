#include<stdio.h>
#include<conio.h>
void main()
{
long int a,deci=0,i,res=0,pow=1;
clrscr();
scanf("%ld",&a);
for(i=0;a>=1;i++)
{
deci=a%10;
res=deci*pow+res;
a=a/10;
pow=pow*2;
}
printf("%ld",res);
getch();
}

