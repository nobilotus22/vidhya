#include <stdio.h>

int main()
{
    char a[100];
    int i,n;
    scanf("%s",a);
    for(i=0;a[i]!=0;i++);
    n=i;
    i=0;
    while(i<n)
    {
        printf("%c",a[i]);
        i=i+3;
    }

    return 0;
}
