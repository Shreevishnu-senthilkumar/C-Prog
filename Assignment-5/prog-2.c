#include <stdio.h>
int main()
{
    int x;
    for (x = 5; x >= 1; x--)
    {
loop:
        if (x >= 1)
        {
            printf("%d\n", x);
            x--;
            goto loop;
        }
    }
}