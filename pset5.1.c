#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k=0,z[200],flag,c=1,a=0,b=1;
 clrscr();
 scanf("%d",&n);
 for(i=1;i<100;i++)
 {
  flag=0;
   for(j=2;j<=i/2;j++)
   {
    if(i%j==0)
    {
     flag=1;
     break;
    }
   }
   if(flag==0)
   {
    z[k]=i;
    k++;
    z[k]=c;
    c=a+b;
    a=b;
    b=c;
    k++;
   }
  }
  for(i=0;i<n;i++)
  {
   printf(" %d",z[i]);
  }
  getch();
}
