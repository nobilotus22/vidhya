#include <stdio.h>

int main()
{
    int a,b,i,count=0,sum;
    scanf("%d%d",&a,&b);
    for(i=2;i<b;i++)
    {
        sum=i*i;
        if(sum<=b && sum>=a)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
