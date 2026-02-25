#include <stdio.h>
int main()
{
    int n, first, last, temp, pow = 1, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;      
    temp = n;
loop:
    if (temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
        goto loop;
    }
    first = temp;
    result = last * pow + (n % pow) / 10 * 10 + first;
    printf("%d", result);
    return 0;
}
