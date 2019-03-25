#include<stdio.h>
void main()
{
 int a[50],i,num;
 long mul=1;
 clrscr();
 scanf("%d",&num);
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<num;i++)
 {
  mul=mul*a[i];
 }
 if(mul%2==0)
 {
  printf("even");
 }
 else
 {
  printf("odd");
 }
 getch();
}
