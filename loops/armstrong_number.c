#include <stdio.h>
#include <math.h>

int main()
{
    int n, k, c=0, v, s=0, x;

    printf("\nEnter four digit no: ");
    scanf("%d", &n);

    x = n;
    v = n;

    for(; n > 0; )
    {
        c = c + 1;
        n = n / 10;
    }

    for(; v > 0; )
    {
        k = v % 10;
        s = s + (int)pow(k, c);
        v = v / 10;
    }

    if(x == s)
        printf("\nArmstrong no");
    else
        printf("\nNot Armstrong no");

    return 0;
} 
