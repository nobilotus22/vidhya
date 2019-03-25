#include<stdio.h>
void main()
{
 int num,i,j,flag=0,num1=2;
 clrscr();
 scanf("%d",&num);
 for(i=2;i<=num;i++)
 {
  for(j=2;j<i/2;j++)
  {
   if(num%i==0)
    {
   if(i%num1!=0)
    {
     printf("%d ",i);
     num1++;
     break;
    }
    else
    {
     num1++;
    }
   }
  }
 /* if(flag==1)
   {
    printf("%d ",i);
   // num1++;
   }*/
  }
 getch();
}    
