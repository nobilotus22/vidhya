#include <stdio.h>

int main()
{
    int n,k,a[100],b[100],i,j=0,temp;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        if(b[i]>b[i+1])
        {
            temp=b[i];
        b[i]=b[i+1];
        b[i+1]=temp;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d",b[i]);
    }

    return 0;
}
