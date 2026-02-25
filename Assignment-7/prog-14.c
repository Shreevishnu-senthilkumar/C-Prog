#include <stdio.h>
int main()
{
    disp_interchange_first_last_digit();
}
void disp_interchange_first_last_digit()
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
    printf("%d", (last * pow10) + (middle * 10) + first);
}