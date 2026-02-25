#include <stdio.h>
int count_single_digit_primes(void);
int main()
{
   int x= count_single_digit_primes();
   printf("%d", x);
}
int count_single_digit_primes()
{
    int i, count = 0;
    for(i = 2; i <= 9; i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
        {
            count++;
        }
    }
   return count;
}