#include <stdio.h>

int main()
{
    int a,b,count=0,i,j,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        count=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
