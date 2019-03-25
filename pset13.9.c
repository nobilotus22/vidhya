#include<stdio.h>

int main() {
   int m,i,a[100],s=0;
   scanf("%d",&m);
   for(i=0;i<m;i++)
   scanf("%d",&a[i]);
   for(i=0;i<m;i++)
   {
      if(a[i]<=0)
      {
          s=s+a[i];
      }
   }
   printf("%d",s);
}
