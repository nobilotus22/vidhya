#include <stdio.h>

int main()
{
    int a[100],n,i,sum=0,j,k,count=0,count1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           count++;
           j=i;
       }
      if(a[i]%2==1)
       {
           count1++;
           k=i;
       }
    }
    if(count==1)
    {
       printf("%d",a[j]); 
    }
    else
    {
        printf("%d",a[k]);
    }

    return 0;
}
