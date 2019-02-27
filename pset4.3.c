#include <stdio.h>

int main()
{
    int a[10][10],i,j,iland=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                iland++;
            }
        }
    }
    printf("%d",iland);

    return 0;
}
