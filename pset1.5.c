#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>10)
    {
        printf("X");
        n=n%10;
    }
    switch(n)
    {
        case 1 :printf("I");
        break;
        case 2 :printf("II");
        break;
        case 3 :printf("III");
        break;
        case 4 :printf("IV");
        break;
        case 5 :printf("V");
        break;
        case 6 :printf("VI");
        break;
        case 7 :printf("VII");
        break;
        case 8 :printf("VIII");
        break;
        default :printf("XI");
        break;
    }

    return 0;
}
