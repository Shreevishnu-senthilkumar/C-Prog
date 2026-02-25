#include <stdio.h>
int main()
{
    int x;
    for (x = 11; x <= 19; x=x+2)
    {
loop:
        if (x <= 19)
        {
            printf("%d\n", x);
            x=x+2;
            goto loop;
        }
    }
}