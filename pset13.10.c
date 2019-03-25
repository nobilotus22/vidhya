#include<stdio.h>
void main()
{
 int a[50],i,num,sum=0;
 clrscr();
 scanf("%d",&num);
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<num;i++)
 {
  sum=sum+a[i];
  if(sum%2==0)
  {
   printf("%d ",sum);
  }
  else
  {
   printf("%d ",a[i]);
  }
 }
 getch();
}
