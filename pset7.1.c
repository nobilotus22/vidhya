#include <stdio.h>

int main()
{
    int n,x,a[100],i;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]+a[i+1])==x)
        {
            printf("yes");
            break;
        }
    }
    return 0;
}
