#include <stdio.h>
int main()
{
    int n,a[10],i,j,c,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c>=m)
        {
            m=c;
        }
    }
    printf("%d",m);
    return 0;
}
