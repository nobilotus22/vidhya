#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter no of rows");
scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
   for(j=i;j<n;j++)
   {
   printf(" ");
   }
   for(j=1;j<=2*i-1;j++)
   {
    printf("*");
   }
  printf("\n");
 }
 for(i=n;i>=1;i--)
  {
   for(j=i;j<=n;j++)
   {
   printf(" ");
   }
  for(j=1;j<2*(i-1);j++)
  {
  printf("*");
  }
  printf("\n");
 }
getch();
}
