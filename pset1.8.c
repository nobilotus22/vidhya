#include <stdio.h>

int main()
{
    char s[100],temp;
    int i,j;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(i==0)
        {
            s[i]=s[i]-32;
        }
        if(s[i]==' ')
        {
           s[i+1]=s[i+1]-32;
        }
    }
    puts(s);
    return 0;
}
