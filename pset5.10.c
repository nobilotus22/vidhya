#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=2;i<=9;i++)
    {
        if(i!=n && n%i==0)
        {
            printf("yes");
            j=1;
            break;
            
        }
    }
    if(j==0)
    {
        printf("no");
    }
    return 0;
}
