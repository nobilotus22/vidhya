#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    
     if(n>=-2147483648&& n<=2147483647)
     {
         printf("INT");
     }

    return 0;
}
