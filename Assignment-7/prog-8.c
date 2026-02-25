#include <stdio.h>
int main()
{
    disp_2digit_odd_sum6();
}
void disp_2digit_odd_sum6()
{
    int i, a, b;
    for(i = 10; i <= 99; i++)
    {
        if(i % 2 == 0)
        {
            a = i / 10;
            b = i % 10;
            if(a + b == 6)
            {
                printf("%d\n", i);
            }
        }
    }
}

