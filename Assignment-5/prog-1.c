#include <stdio.h>
int main()
{
    int x;
    for (x = 1; x <= 5; x++)
    {
loop:
        if (x <= 5)
        {
            printf("%d\n", x);
            x++;
            goto loop;
        }
    }
}