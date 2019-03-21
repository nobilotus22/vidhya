#include <stdio.h>

int main()
{
    int a[100],n,i,ans,j,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            ans=a[i] | a[j];
            if(max<ans)
            {
                max=ans;
            }
        }
    }
    printf("   %d",max);

    return 0;
}
