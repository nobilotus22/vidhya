#include <stdio.h>

int main()
{
    int i,n;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]!='A' && a[i]!='E'&& a[i]!='I'&& a[i]!='O'&& a[i]!='U'&& a[i]!='a' && a[i]!='e'&& a[i]!='o'&& a[i]!='u'&& a[i]!='i')
        {
            printf("%c",a[i]);
        }
    }

    return 0;
}
