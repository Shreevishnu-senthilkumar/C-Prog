#include <stdio.h>
int main()
{
    check_last_digit_odd();
}
void check_last_digit_odd()
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
    printf("%d", (first * pow10) + (n % pow10));
}