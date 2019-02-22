#include <stdio.h>

int main()
{
    int a[100],n,k,i,j=0,b[100],l,max,m;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=n;i<n+k;i++)
    {
        a[i]=b[j];
        j++;
        m=n+1;max=0;
        for(l=0;l<m;l++)
        {
            if(max<a[l])
            {
              max=a[l];
            }
        }
        printf("%d ",max);
    }
    
    

    return 0;
}
