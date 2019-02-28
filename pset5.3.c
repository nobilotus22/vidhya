#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k=1;
clrscr();
printf("enter no of rows");
scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
   for(j=i;j<n;j++)
   {
   printf(" ");
   }
   for(j=1;j<=i;j++)
   {
   if(k<10)
   {
    printf("%d ",k);
    k++;
    }
    else
    {
    k=0;
    printf("%d",k);
    k++;
    }
   }
  printf("\n");
 }
 getch();
 }
