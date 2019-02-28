#include<stdio.h>
#include<conio.h>
void main()
{
int i,number,a=0,b=1,fib=0;
clrscr();
scanf("%d",&number);
for(i=1;i<number;i++)
{
a=b;
b=fib;
fib=a+b;
}
printf("%d term of fib is %d",number,fib);
getch();
}
