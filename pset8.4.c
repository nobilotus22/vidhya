#include <stdio.h>

int main()
{
    int n,k,i,sum;
    scanf("%d%d",&n,&k);
    sum=n;
    for(i=1;i<k;i++)
    {
        sum=sum*n;
    }
    printf("%d",sum);
    return 0;
}
