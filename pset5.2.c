#include<stdio.h>
#include<conio.h>
void main()
{
float time;
clrscr();
scanf("%f",&time);
if(time<=12)
{
printf("%0.2fam",time);
}
else
{
time=time-12;
printf("%0.2fpm",time);
}
getch();
}
