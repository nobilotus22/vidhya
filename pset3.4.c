#include <stdio.h>

int main()
{
    char a[100];
    int i,j=0,count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        j++;
        if(a[i]>=48 && a[i]<=57)
        {
            count++;
        }
    }
    if(count==j)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
