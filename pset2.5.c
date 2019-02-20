#include <stdio.h>

int main()
{
    char a[100];
    int i,n,j,k=0,count=0,b[100],max=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        count==0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        b[k]=count;
        k++;
    }
    for(i=0;i<k;i++)
    {
        if(max<b[i])
        {
            max=b[i];
            j=i;
        }
    }
    printf("%c",a[j]);

    return 0;
}
