#include <stdio.h>
int  disp_single_digit_square(void);
int main()
{
    int x=disp_single_digit_square();
    printf("%d",x);
}
int disp_single_digit_square()
{
    int n, digit, count = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        digit = n % 10;
        if(digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}