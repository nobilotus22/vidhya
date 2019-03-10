#include <stdio.h>

int main()
{
    int i,j,k=0;
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                k=1;
            }
        }
    }
    if(k==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
