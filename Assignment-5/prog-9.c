#include <stdio.h>
int main()
{
    int x,sum=0;
    for (x = 10; x <= 99; x++)
    {
    loop:
        if (x<=99)
        {
            if (x % 10 == 5)
            {
                sum = sum + x;
            }
            x++;
            goto loop;
        }
             else
        {
            printf("%d", sum);
            return 0;
            
        }
    }
}