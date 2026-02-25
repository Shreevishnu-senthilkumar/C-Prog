#include <stdio.h>
int main()
{
    int n, temp, first, last;
    int power = 1, result;
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
    result = last * power + (n % power);
    result = result / 10;
    result = result * 10 + first;
    printf("%d", result);
}