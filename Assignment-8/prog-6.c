#include <stdio.h>
int disp_sum_all_digits(void);
int main()
{
   int x= disp_sum_all_digits();
   printf("%d", x);
}
int disp_sum_all_digits()
{
    int n, sum = 0;
    printf("Enter a Number:");
    scanf("%d", &n);
    while(n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}