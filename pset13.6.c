#include<stdio.h>
int main()
{
 int n,a[50],i,j,count=0,b[50],min,k,count1=0,l=0,temp;
 clrscr();
 scanf("%d",&n);
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  count=0;
  for(j=0;j<n;j++)
  {
   if(a[i]==a[j])
   {
    count++;
   }
  }
  if(count<k)
  {
   b[l]=a[i];
   count1++;
   l++;
  }
 }
 for(i=0;i<count1;i++)
 {
  min=b[i];
  l=i;
  for(j=i+1;j<count1;j++)
  {
   if(b[j]<min)
   {
    min=b[j];
    l=j;
   }
  }
  if(k!=i)
  {
   temp=b[i];
   b[i]=b[l];
   b[l]=temp;
  }
 }
 for(i=0;i<count1;i++)
 {
  printf("%d ",b[i]);
 }
 return 0;
}   
