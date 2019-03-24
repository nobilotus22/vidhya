#include <stdio.h>
int main()
{
    char str[100];
    int i,j=0,br[100],max=0,cunt=0,sum=0,temp,flag,count,k;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            cunt++;
        }
        else
        {
            br[j]=cunt;
            j++;
            cunt=0;
        }
    }
    br[j]=cunt;
    j++;
for(i=0;i<j;i++)
{
    sum++;
        if(max<br[i])
        {
            max=br[i];
            temp=sum;
            k=i;
        }
}
for(i=0;i<k;i++)
{
    count+=br[i];
}
flag=count+temp;
for(i=flag-1;i<flag+max;i++)
{
    printf("%c rev is",ar[i]);
}
    return 0;
}
