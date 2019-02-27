#include <stdio.h>

int main()
{
    char a[100];
    int i,j;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            for(j=i;a[j]!='\0';j++)
            {
            a[j]=a[j+1];
            }
        }
    }
    puts(a);

    return 0;
}
