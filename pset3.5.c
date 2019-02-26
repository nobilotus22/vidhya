#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,count,max,l;
   char str[25][25],temp[25];
   scanf("%d",&count);
   for(i=0;i<count;i++)
      scanf("%s",&str[i]);
   for(i=0;i<count;i++)
      for(j=i+1;j<count;j++){
          max=strlen(str[i]);
          l=strlen(str[j]);
         if(max>l)
         {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   for(i=0;i<count;i++)
      printf("\n%s",str[i]);
   
   return 0;
}
