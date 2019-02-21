#include <stdio.h>

int main()
{
    int a,i,j,c=0;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    c=1;
                }
            }
            if(c==0)
            {
                printf("%d ",i);
            }
        }
    }

    return 0;
}
