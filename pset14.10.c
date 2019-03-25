#include<stdio.h>
void main()
{
 char str[500];
 int i,flag=1;
 clrscr();
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]=='a' || str[i]=='b')
  {
   flag=0;
  }
  else
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
   printf("No");
 else
   printf("Yes");
 getch();
}
