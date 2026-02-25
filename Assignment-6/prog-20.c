#include <stdio.h>
int main()
{
    int n = 2, i, count = 0, flag;
    while (n <= 9)
    {
        i = 2;
        flag = 1;
        while (i < n)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
            i = i + 1;
        }
        if (flag == 1)
        {
            count = count + 1;
        }
        n = n + 1;
    }
    printf("%d", count);
}