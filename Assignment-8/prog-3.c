#include <stdio.h>
int disp_2digit_ones5(void);
int main()
{  
    int x= disp_2digit_ones5();
    printf("%d",x);
}
int disp_2digit_ones5()
{
    int i, sum = 0;
    for(i = 10; i <= 99; i++)
    {
        if(i % 10 == 5)
        {
            sum = sum + i;
        }
    }
   return sum;
}