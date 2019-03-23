#include<stdio.h>

int main() {
   int n,a[100],i,s=0,temp=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   temp=a[1];
   a[1]=a[n-1];
   a[n-1]=temp;
   for(i=0;i<n-1;i++)
   {
       if(a[i]<a[i+1])
       {
           s=s+a[i+1];
   }
   else
   s=s+a[i];
   }
   printf("%d",s);
}
