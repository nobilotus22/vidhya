#include <stdio.h>

int main()
{
    char a[1000];
    int i,j;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ' && a[i+1]==' ')
        {
            for(j=i;a[j]!='\0';j++)
            {
                a[j+1]=a[j+2];
            }
        }
        if(a[i]==' ' && a[i-1]==' ')
        {
            for(j=i-1;a[j]!='\0';j++)
            {
                a[j+1]=a[j+2];
            }
        }
        
    }
    puts(a);
    return 0;
}
