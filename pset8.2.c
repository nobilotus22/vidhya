#include <stdio.h>

int main()
{
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]<a[i])
        {
            printf("%d",a[i]);
            break;
        }
    }

    return 0;
}
