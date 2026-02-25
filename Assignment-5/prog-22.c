#include <stdio.h>
int main ()
{
    int x, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for ( ; ; )
    {
loop:
        if (x >= 10)
        {
            digit = x % 100;
            if (digit % 2 != 0)
                count++;
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d", count);
    return 0;
}
