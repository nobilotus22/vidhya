#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,row,col;
clrscr();
scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n0 & 360:");
printf("\n---------\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("\n90:\n----\n");
for(i=0;i<col;i++)
{
for(j=0;j<row;j++)
{
printf("%d ",a[j][i]);
}
printf("\n");
}
printf("180:\n-----\n");
for(i=row-1;i>=0;i--)
{
for(j=col-1;j>=0;j--)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("270:\n-----\n");
for(i=col-1;i>=0;i--)
{
for(j=row-1;j>=0;j--)
{
printf("%d ",a[j][i]);
}
printf("\n");
}
getch();
}



