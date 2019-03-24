#include <stdio.h>
 
int main()
{
 int NUM,ra,bina=0,bas=1,cunt=0;
 scanf("%d",&NUM);
 while(NUM)
 {
     ra=NUM%2;
     NUM=NUM/2;
     cunt++;
     bina=bina+(ra*bas);
     bas=bas*10;
  }
if(NUM==0)
 printf("1");
else
 printf("%d",cunt);

return 0;
}
