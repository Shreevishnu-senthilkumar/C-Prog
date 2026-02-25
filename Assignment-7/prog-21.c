#include <stdio.h>
int main()
{
    disp_total_odd_digits();
}
void disp_total_odd_digits()
{
    int n, digit, count = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        digit = n % 10;
        if(digit % 2 != 0)
        {
            count++;
        }
        n = n / 10;
    }
    printf("%d", count);
}