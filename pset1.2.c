#include <stdio.h>

int main()
{
    int n,i,val=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      val=val*i;
    }
    printf("%d",val);

    return 0;
}
