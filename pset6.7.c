#include <stdio.h>

int main()
{
    char a[100],b;
    int i,c=0;
    scanf("%c",&b);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]==b)
       {
           c++;
       }
    }
    printf("%d",c);
    if(c==0)
    {
        printf("no");
    }
    
    
    return 0;
}
