#include <stdio.h>

int main()
{
    int n,r,com,i,j,nf=1,nr=1,rf=1;
    scanf("%d%d",&n,&r);
    for(i=1;i<=n;i++)
    {
        nf=nf*i;
    }
    for(i=1;i<=r;i++)
    {
        rf=rf*i;
    }
    for(i=1;i<=(n-r);i++)
    {
        nr=nr*i;
    }
    com=nf/(rf*nr);
    printf("%d",com);

    return 0;
}
