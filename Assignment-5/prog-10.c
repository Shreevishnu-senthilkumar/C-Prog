#include <stdio.h>
int main()
{
    int x,sum=0,a;
    for (x = 71; x <= 79; x++)
    {
    loop:
        if (x<=79)
        {
            a=x;
            if (x/10 == 7 && a%2!=0)
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