#include <stdio.h>

int main()
{
    int n,k,a[100],i,j=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
           j++;
        }
    }
    printf("%d",j);

    return 0;
}
