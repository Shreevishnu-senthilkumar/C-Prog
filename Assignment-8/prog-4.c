#include <stdio.h>
int disp_2digit_odd_sum_tens7(void);
int main()
{
   int x=disp_2digit_odd_sum_tens7();
   printf("%d",x);
}
int disp_2digit_odd_sum_tens7()
{
    int i, sum = 0;
    for(i = 70; i <= 79; i++)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
        }
    }
   return sum;
}