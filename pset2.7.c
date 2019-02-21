#include <stdio.h>

int main()
{
    int r,l,i,min;
    scanf("%d%d",&l,&r);
    for(i=1;i<=l;i++)
    {
        if((l%i==0) && (r%i)==0)
        {
            min=i;
        }
    }
    min=(l*r)/min;
    printf("%d",min);

    return 0;
}
