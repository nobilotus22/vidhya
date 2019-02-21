#include <stdio.h>

int main()
{
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]+3;
    }
    puts(a);

    return 0;
}
