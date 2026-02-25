#include <stdio.h>
int main ()
{
    int x, n, i = 2, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &x);
    n = x % 100;  
     if (n <= 1)
        prime = 0;
    for ( ; ; )
    {
loop:
        if (i < n && prime == 1)
        {
            if (n % i == 0)
                prime = 0;
            i++;
            goto loop;
        }
        break;
    }

    if (prime == 1)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}