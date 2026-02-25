#include <stdio.h>
int main()
{
    disp_two_digit_square();
}
void disp_two_digit_square()
{
    int n, prev, curr, num, count = 0;
    scanf("%d", &n);

    prev = n % 10;
    n = n / 10;

    while(n != 0)
    {
        curr = n % 10;
        num = curr * 10 + prev;
        if(num == 16 || num == 25 || num == 36 ||
           num == 49 || num == 64 || num == 81)
        {
            count++;
        }
        prev = curr;
        n = n / 10;
    }
    printf("%d", count);
}
