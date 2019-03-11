#include <stdio.h>

int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n&&i+1<n;i++)
    {
        if(a[i]<a[i+1])
        {
            printf("%d",a[i+1]);
        }
        else
        {
            printf("%d",a[i]);
        }
    }

    return 0;
}
