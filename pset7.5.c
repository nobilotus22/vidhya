#include <stdio.h>

int main()
{
    int n,k,a[100],b[100],i,j=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=n)
        {
           printf("%d",a[i]);
        }
    }

    return 0;
}
