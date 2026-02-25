#include <stdio.h>
int main()
{
   disp_2digit_odd_sum_tens7();
}
void disp_2digit_odd_sum_tens7()
{
    int i, sum = 0;
    for(i = 70; i <= 79; i++)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}