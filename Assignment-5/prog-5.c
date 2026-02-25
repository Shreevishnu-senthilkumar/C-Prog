#include <stdio.h>
int main()
{
    int x;
    for (x = 1; x <= 9; x=x+2)
    {
loop:
        if (x <= 9)
        {
            printf("%d\n", x);
            x=x+2;
            goto loop;
        }
    }
}