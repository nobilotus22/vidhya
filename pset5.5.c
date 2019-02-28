#include<stdio.h>
#include<conio.h>
void main()
{
int z[200],a=1,b=1,n,k=0,j,i;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
z[k]=a;
a=a*2;
k++;
z[k]=b;
b=b*3;
k++;
}
for(j=0;j<n;j++)
{
printf(" %d",z[j]);
}
getch();
}
