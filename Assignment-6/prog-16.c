#include <stdio.h>
int main()
{
    int n, i = 2, flag = 1;
    printf("Enter a Number:");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
        i = i + 1;
    }
    if (flag == 1 && n > 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
