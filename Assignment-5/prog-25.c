#include <stdio.h>
int main ()
{
    int x, num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for ( ; ; )
    {
loop:
        if (x != 0)
        {
            num = x % 10;
             if (num == 2 || num == 3 || num == 5 ||num == 7 )
                count++;
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d", count);
    return 0;
}
