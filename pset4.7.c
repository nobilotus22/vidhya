#include <stdio.h>

int main()
{
    int a[100],b[100],n,i,max,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
