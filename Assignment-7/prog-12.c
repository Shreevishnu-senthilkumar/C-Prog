#include <stdio.h>
int main()
{
    disp_sum_all_digits();
}
void disp_sum_all_digits()
{
    int n, sum = 0;
    printf("Enter a Number:");
    scanf("%d", &n);
    while(n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("%d", sum);
}