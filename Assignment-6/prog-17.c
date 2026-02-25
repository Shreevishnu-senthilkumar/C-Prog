#include <stdio.h>
int main()
{
    int n, temp, i = 2, flag = 1, sum = 0;
    printf("Enter a Number:");
    scanf("%d", &n);
    if (n <= 1)
    {
        flag = 0;
    }
    while (i < n)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        i = i + 1;
    }
    temp = n;
    while (temp != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    if (flag == 1 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (flag == 0 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (flag == 1 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");
}
