#include<stdio.h>
int main()
{
 int num,a[50],i,j,count=0;
 clrscr();
 scanf("%d",&num);
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=1;;i++)
 {
  count=0;
  for(j=0;j<num;j++)
  {
   if(i%a[j]==0)
   {
    count++;
   }
  }
  if(count==num)
  {
   printf("%d",i);
   break;
  }
 }
 return 0;
}
