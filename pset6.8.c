#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,c=0,k=0,n,j,l=0;
    gets(a);
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++);
    n=i;
    for(i=0;a[i]!='\0';i++)
    {
        k=0;
       for(j=i;a[j]!=' ';j++)
       {
           if(a[i]==b[k])
           {
           c++;
           k++;
           }
       }
        if(c==n)
        {
        l++;
        }
    }
    if(l==0)
    {
        printf("no");
    }
    else
    {
        printf("%d",l);
    }
    return 0;
}
