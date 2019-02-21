#include <stdio.h>

int main()
{
    
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if((a==c)&&(a==e)||(b==d)&&(b==f))
    printf("yes");
    else if((a==b)&&(d==c)&&(e==f))
    printf("yes");
    else
    printf("no");

    return 0;
}
