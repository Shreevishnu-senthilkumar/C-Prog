#include <stdio.h>
void find_2digit_odd_sum7()
{
    int num;
    int tens, units;
    for (num = 10; num <= 99; num++)
    {
        if (num % 2 != 0)   
        {
            tens = num / 10;
            units = num % 10;
            if (tens + units == 7)
            {
                printf("%d ", num);
            }
        }
    }
}
int main()
{
    find_2digit_odd_sum7();
    return 0;
}
