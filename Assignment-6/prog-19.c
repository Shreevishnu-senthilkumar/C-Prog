#include <stdio.h>
int main()
{
    int n, x, i = 2, flag = 1;
    printf("Enter A Number:");
    scanf("%d", &n);
    x = (n / 10) % 100;  
    if (x <= 1)
    {
        flag = 0;
    }
    while (i < x)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
        i = i + 1;
    }
    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}