#include <stdio.h>

int main()
{
    int a,b,i,divd;
    scanf("%d%d",&a,&b);
    for(i=2;i<a ||i<b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            divd=i;
        }
    }
    printf("%d",divd);

    return 0;
}
