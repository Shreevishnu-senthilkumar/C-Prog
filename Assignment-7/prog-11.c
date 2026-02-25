#include <stdio.h>
int main()
{
    count_total_digits();
}
void count_total_digits()
{
    int n, count = 0;
    printf("Enter a Number:");
    scanf("%d", &n);
    while(n != 0)
    {
        count++;
        n = n / 10;
    }
    printf("%d", count);
}