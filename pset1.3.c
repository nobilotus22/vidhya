
#include <stdio.h>

int main()
{
    int n,val=0,pos=1,rem,i;
    scanf("%d",&n);
    while(n!=0)
    {
      rem=n%10;
      val=val*10+rem;
      
      n=n/10;
    }
    printf("%d",val);

    return 0;
}
