#include <stdio.h>
int  disp_interchange_first_last_digit(void);
int main()
{
   int x= disp_interchange_first_last_digit();
    printf("%d",x);
}
int disp_interchange_first_last_digit()
{
    int n, temp, first, last, digits = 0, pow10 = 1, middle;
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
        pow10 = pow10 * 10;
    }
    first = temp;
    middle = (n % pow10) / 10;
    int a=(last * pow10) + (middle * 10) + first;
    return a;
}