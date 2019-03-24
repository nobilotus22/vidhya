#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
char hexi[32]={0};
int deci,i,cunt,de; 
gets(hexi);
cunt=0;
deci=0;
for(i=(strlen(hexi)-1);i>=0;i--)
{
 switch(hexi[i])
{
case 'A':
de=10; break;
case 'B':
de=11; break;
case 'C':
de=12; break;
case 'D':
de=13; break;
case 'E':
de=14; break;
case 'F':
de=15; break;
default:
de=hexi[i]-0x30;
}
deci= deci+ (de)*pow((double)16,(double)cunt);
cunt++;
}

printf("%d",deci);
return 0;
}
