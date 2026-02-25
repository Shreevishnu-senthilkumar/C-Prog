#include <stdio.h>
int  disp_total_2digit_odd(void);
int main()
{
    int x=disp_total_2digit_odd();
    printf("%d",x);
}
int disp_total_2digit_odd()
{
    int n, prev, curr, count = 0;
    scanf("%d", &n);
    prev = n % 10;
    n = n / 10;
    while(n != 0)
    {
        curr = n % 10;
        if(prev % 2 != 0)
        {
            count++;
        }
        prev = curr;
        n = n / 10;
    }
    return count;
}