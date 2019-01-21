#include <stdio.h>

int main()
{
    int a[50],i,n,j,b[50],k=0,lcm=1,sum,m=0,flag=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(j=2;j<max;j++)
    {
        flag=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%j==0)
            {
                sum=j;
                flag=1;
                a[i]=a[i]/j;
            }
        }
        if(flag==1)
        {
            b[k]=sum;
            j=j-1;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        lcm=lcm*b[i];
        //printf(" %d",b[i]);
    }
    printf(" %d ",lcm);
    return 0;
}

