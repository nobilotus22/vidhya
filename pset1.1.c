#include <stdio.h>

int main()
{
    char str[100];
    int i,count;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);
    count=i;
    for(i=count-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
