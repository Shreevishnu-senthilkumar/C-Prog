#include <stdio.h>
int main()
{
    int n, temp, last, first, power = 1, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;
    if (last % 2 != 0)
    {
        first = first - 1;
    }
    result = first * power + (n % power);
    printf("%d", result);
}
