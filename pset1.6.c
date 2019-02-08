#include <stdio.h>

int main()
{
    char a[100],b[100];
    int l1=0,l2=0,i,j,c=0;
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++);
    l1=i;
    for(j=0;b[j]!='\0';j++);
    l2=j;
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            if(a[i]==a[i+1] && b[i]==b[i+1])
            {
                c++;
            }
            if(a[i]!=a[i+1] && b[i]!=b[i+1])
            {
                c++;
            }
        }
    }
    if(c==l1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
