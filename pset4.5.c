#include<stdio.h>
#include<conio.h>
void main()
{
 char a[100],b;
 int i,j;
 clrscr();
 for(i=0;i<100;i++)
 {
 a[i]='\0';
 }
 gets(a);
// scanf("%c",&b);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]=='a')
 {
 printf("\n");
 for(j=i+1;a[j]!='a';j++)
 {
 printf("%c",a[j]);
 }
 i=j-1;
 }
 }
getch();
}
