#include <stdio.h>
 
int main()
{
   char ar[20],rb[20];
   int cunt=0,tep=0,i,k;
   gets(ar);
   gets(rb);
   for(i=0;ar[i]!='\0';i++)
   {
       cunt++;
   }
   for(i=0;rb[i]!='\0';i++)
   {
      tep++;    
   }
    if(cunt>tep)
    {
    for(i=cunt;i>tep;i--)
    {
        ar[i-1]=0; 
     }
    }
    else 
    {
    for(i=tep;i>c;i--)
    {
        rb[i-1]=0;    
    }       
    }   
   tep=0;
   for(i=0;ar[i]!='\0';i++)
   {
       if(ar[i]!=0)
     {
       ar[k]=ar[i];
       k++;
   }
}
    for(i=0;rb[i]!='\0';i++)
   {if(rb[i]!=0)
     {
       ar[k]=rb[i];
       k++;
   }
  ar[k]='\0';
   }
     for(i=0;ar[i]!='\0';i++)
     {
   printf("%c",ar[i]);
     }
}   
