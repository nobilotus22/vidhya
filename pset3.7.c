#include <stdio.h>

int main()
{
    char a[100];
    int i,j;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        else
        {
            continue;
        }
    }
    printf("%s",a);

    return 0;
}
