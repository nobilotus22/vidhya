#include<stdio.h>
#include<conio.h>
void main()
{
int k,a[10][10],b[10][10],c[10][10],n,i,j,temp=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
temp=0;
for(k=0;k<n;k++)
{
temp=temp+a[i][k]*b[k][j];
c[i][j]=temp;
}
}
}
printf("aft mulptiply\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf(" %d",c[i][j]);
}
printf("\n");
}
getch();
}

