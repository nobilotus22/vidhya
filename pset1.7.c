#include <stdio.h>

int main()
{
    char s[100],temp;
    int i,j;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            temp=s[i];
            s[i]=s[i-1];
            s[i-1]=temp;
        }
    }
    puts(s);
    return 0;
}
