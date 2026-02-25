#include <stdio.h>
int main()
{
    int x = 10, sum = 0;
    while (x <= 99)
    {
        if (x % 10 == 5)
        {
            sum = sum + x;
        }
        x = x + 1;
    }
    printf("%d", sum);
}