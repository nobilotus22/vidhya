#include <stdio.h>
#include<string.h>

int main()
{
  char str[100],ar[100];
  int temp=0,i,len;
  gets(str);
  len=strlen(s);
  for(i=len-1;i>=0;i--)
  {   
     ar[temp]=str[i];
     temp++;      
  }
   for(i=0;ar[i]!='\0';i++)
  {   
      if(ar[i+1]!='\0')
        printf("%c-",ar[i]);
      else
    printf("%c",ar[i]);  
  }
    return 0;
}
