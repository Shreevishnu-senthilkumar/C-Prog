#include <stdio.h>
int count_total_digit(void);
int main()
{
    int x=count_total_digits();
     printf("%d", x);
}
int count_total_digits()
{
    int n, count = 0;
    printf("Enter a Number:");
    scanf("%d", &n);
    while(n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}