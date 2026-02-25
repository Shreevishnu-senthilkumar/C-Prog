#include <stdio.h>
int main()
{
    check_prime_and_sum14();
}
void check_prime_and_sum14()
{
    int n, temp, sum = 0, i, flag = 0;
    scanf("%d", &n);
    temp = n;
    while(temp != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    if(n <= 1)
    {
        flag = 1;
    }
    else
    {
        for(i = 2; i <= n - 1; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if(flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if(flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & Sum of Digits is not 14");
}
