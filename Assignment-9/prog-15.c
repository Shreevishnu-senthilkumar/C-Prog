#include <stdio.h>
int main()
{
    int a[100], b[100];
    int i = 0, j, n, sum, temp;
    while (i < 100)
    {
        scanf("%d", &a[i]);

        if (a[i] == 0)
        {
            break;
        }

        i++;
    }
    for (j = 0; j < i; j++)
    {
        n = a[j];
        sum = 0;

        while (n > 0)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }

        b[j] = sum;
    }
    for (j = 0; j < i - 1; j++)
    {
        for (n = j + 1; n < i; n++)
        {
            if (b[j] > b[n])
            {
                temp = b[j];
                b[j] = b[n];
                b[n] = temp;
            }
        }
    }
    for (j = 0; j < i; j++)
    {
        printf("%d ", b[j]);
    }

    return 0;
}
