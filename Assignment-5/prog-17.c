#include <stdio.h>
int main ()
{
    int x, n, i = 2, prime = 1, sum = 0, d;
    printf("Enter a number: ");
    scanf("%d", &x);
    n = x;
    if (x <= 1)
        prime = 0;
    for ( ; ; )
    {
loop:
        if (i < x && prime == 1)
        {
            if (x % i == 0)
                prime = 0;
            i++;
            goto loop;
        }
        break;
    }
    for ( ; ; )
    {
sum_loop:
        if (n != 0)
        {
            d = n % 10;
            sum = sum + d;
            n = n / 10;
            goto sum_loop;
        }
        break;
    }
    if (prime == 1 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (prime == 0 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (prime == 1 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");
    return 0;
}