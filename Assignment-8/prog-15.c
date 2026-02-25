#include <stdio.h>
int disp_single_digit_prime(void);
int main()
{
    int x=disp_single_digit_prime();
    printf("%d",x);
}
int disp_single_digit_prime()
{
    int n, digit, count = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        digit = n % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}