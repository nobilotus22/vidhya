#include<stdio.h>

int main() {
  int n,a[100],ans,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
 ans=a[0];
  for(i=0;i<n;i++)
  {
      ans=ans|a[i];}
  printf("%d",ans);
  return 0;
}
