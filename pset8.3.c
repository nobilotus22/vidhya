#include <stdio.h>

int main()
{
    int n,a[100],i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("%d",i+1);
            break;
        }
    }

    return 0;
}
