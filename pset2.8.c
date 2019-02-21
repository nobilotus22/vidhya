#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0,l1,l2,n,x=0,k,c=0;
    char a[100]="kabali",b[100];
    scanf("%d",&n);
    l1=strlen(a);
    for(i=0;i<n;i++)
    {
        scanf("%s",b);
        l2=strlen(b);
        if(l1=l2)
        {
            for(j=0;a[j]!='\0';j++)
            {
                for(k=0;a[k]!='\0';k++)
                {
                    if(a[j]==a[k])
                    {
                        c++;
                        a[k]=' ';
                        break;
                    }
                    
                }
                if(c%6==0)
                {
                    x++;
                }
            }
        }
    }
    printf("%d",x);
    
    return 0;
}
