#include <stdio.h>
int main()
{
    int n, temp, first, power = 1, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
loop:
    if (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
        goto loop;
    }
    first = temp;
    if (last % 2 != 0)
    {
        first = first - 1;
    }
    printf("%d", first * power + (n % power));
    return 0;
}
