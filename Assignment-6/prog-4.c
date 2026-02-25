#include<stdio.h>
int main()
{
    int x = 6, sum = 0;
    while (x>=1)
    {
        sum = sum + x;
        x = x - 1;
    }
    printf("%d", sum);
}