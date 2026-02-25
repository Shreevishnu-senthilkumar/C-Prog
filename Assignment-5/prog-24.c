#include <stdio.h>
int main ()
{
    int x, num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for ( ; ; )
    {
loop:
        if (x >= 10)
        {
            num = x % 100;
             if (num == 16 || num == 25 || num == 36 ||
                num == 49 || num == 64 || num == 81)
                count++;
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d", count);
    return 0;
}
