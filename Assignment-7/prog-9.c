#include <stdio.h>
int main()
{
    disp_2digit_ones5();
}
void disp_2digit_ones5()
{
    int i, sum = 0;
    for(i = 10; i <= 99; i++)
    {
        if(i % 10 == 5)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}