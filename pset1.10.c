#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,count,l1,l2;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++);
    l1=i;
    for(i=0;b[i]!='\0';i++);
    l2=i;
    if(l2==l1)
    {
        count=0;
        for(i=0;i<l1;i++)
        {
            if(a[i]!=b[i])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("no");
    }
    return 0;
}
