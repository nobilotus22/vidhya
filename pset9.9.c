#include <stdio.h>

int main()
{
    int n,r,per,i,j,nf=1,nr=1;
    scanf("%d%d",&n,&r);
    for(i=1;i<=n;i++)
    {
        nf=nf*i;
    }
    for(i=1;i<=(n-r);i++)
    {
        nr=nr*i;
    }
    per=nf/nr;
    printf("%d",per);

    return 0;
}
