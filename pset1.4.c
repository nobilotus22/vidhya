#include <stdio.h>

int main()
{
   char s[100];
   int i,count;
   scanf("%s",s);
   for(i=0;s[i]!='\0';i++);
   s[i-1]='.';
   printf("%s",s);
    return 0;
}
