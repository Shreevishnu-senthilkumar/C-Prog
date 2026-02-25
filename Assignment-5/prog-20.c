#include <stdio.h>
int main ()
{
    int x = 2, count = 0;
    for ( ; ; )
    {
loop:
        if (x <= 9)
        {
            if (x == 2 || x == 3 || x == 5 || x == 7)
                count++;

            x++;
            goto loop;
        }
        break;
    }
    printf("%d", count);
    return 0;
}