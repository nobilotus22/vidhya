
#include <stdio.h>

int main()
{
    int n,l,i,j,a[100],temp;
    scanf("%d%d",&n,&l);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
       temp=a[n-1];
       for(j=n-1;j>=0;j--)
        {
          a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
