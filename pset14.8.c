#include<stdio.h>
void main()
{
 int num,pow=2;
 scanf("%d",&num);
 while(pow<num)
 {
  pow=pow*2;
  if(pow==num)
  {
   printf("Yes");
   break;
  }
 }
 if(pow>num)
 {
  printf("No");
 }
 getch();
}
