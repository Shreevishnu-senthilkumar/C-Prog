#include <stdio.h>
int check_last_digit_odd(void);
int main()
{
   int x= check_last_digit_odd();
   printf("%d",x);
}
int  check_last_digit_odd()
{
    int n, temp, first, last, pow10 = 1;
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while(temp >= 10)
    {
        temp = temp / 10;
        pow10 = pow10 * 10;
    }
    first = temp;
    if(last % 2 != 0)
    {
        first = first - 1;
    }
    int a=("%d", (first * pow10) + (n % pow10));
    return a;
}