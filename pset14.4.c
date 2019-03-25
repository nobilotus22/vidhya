#include<stdio.h>
void main()
{
 int num,a[50],l,r,i;
 clrscr();
 scanf("%d %d %d",&num,&l,&r);
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<num;i++)
 {
  if(a[i]==l)
  {
   printf("%d",l);
   break;
  }
 }
 getch();
}
