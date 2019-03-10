#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,c=0;
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]==b[i]||a[i]==b[i]-32||a[i]==b[i]+32)
       {
           c++;
       }
    }
    if(c==i)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}
