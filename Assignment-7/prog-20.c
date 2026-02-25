#include <stdio.h>
int main()
{
    count_single_digit_primes();
}
void count_single_digit_primes()
{
    int i, count = 0;
    for(i = 2; i <= 9; i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
        {
            count++;
        }
    }
    printf("%d", count);
}