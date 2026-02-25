#include <stdio.h>
int main()
{
    int x,sum=0;
    for (x = 6; x >= 1; x--)
    {
loop:
        if (x >= 1)
        {
            sum=sum+x;
            x--;
            goto loop;
        }
        printf("%d\n", sum);
    }
}