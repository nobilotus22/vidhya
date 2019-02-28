#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,n,multiply,div,modulo;
clrscr();
scanf("%d%d",&a,&b);
printf("enter any one option\n1.addition\n2.subtraction\n3.multiply\n4.divide\n5.modulo");
scanf("%d",&n);
switch(n)
{
case 1:
sum=a+b;
printf("sum of %d and %d is %d",a,b,sum);
break;
case 2:
sub=a-b;
printf("subtraction of %d and %d is %d",a,b,sub);
break;
case 3:
multiply=a*b;
printf("Multiplication of %d and %d is %d",a,b,multiply);
break;
case 4:
div=a/b;
printf("divide of %d and %d is %d",a,b,div);
break;
case 5:
modulo=a-b;
printf("modulo of %d and %d is %d",a,b,modulo);
break;
default:
printf("invalid");
break;
}
getch();
}
