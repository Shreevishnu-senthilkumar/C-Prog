#include <stdio.h>
int main()
{
    int x,sum=0;
    for (x = 1; x <= 5; x++)
    {
loop:
        if (x <= 5)
        {
            sum=sum+x;
            x++;
            goto loop;
        }
        printf("%d\n", sum);
    }
}