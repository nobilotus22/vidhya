#include<stdio.h>
void main()
{
 long num,rem,sum=0;
 clrscr();
 scanf("%ld",&num);
 while(num>0)
 {
  rem=num%10;
  sum=sum+rem;
  num=num/10;
 }
 if(sum%2==0)
  printf("E");
 else
  printf("O");
 getch();
}
