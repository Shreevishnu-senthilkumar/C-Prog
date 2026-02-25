#include <stdio.h>
int main()
{
    int n, last, prev, num, count = 0;
    printf("Enter a Number:");
    scanf("%d", &n);
    last = n % 10;
    n = n / 10;
    while (n != 0)
    {
        prev = n % 10;
        num = prev * 10 + last;
        if (num % 2 != 0)
        {
            count = count + 1;
        }
        last = prev;
        n = n / 10;
    }
    printf("%d", count);
}