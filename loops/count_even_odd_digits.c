#include <stdio.h>

int main()
{
    int n, k, e = 0, d = 0;

    printf("\nEnter any no: ");
    scanf("%d", &n);

    for(; n > 0; )
    {
        k = n % 10;

        if(k % 2 == 0)
            e = e + 1;
        else
            d = d + 1;

        n = n / 10;
    }

    printf("\nEven = %d", e);
    printf("\nOdd = %d", d);

    return 0;
}
