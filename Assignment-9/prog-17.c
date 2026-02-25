#include <stdio.h>
int main()
{
    int a[100];
    int n, i, carry;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 10)
        {
            carry = a[i] / 10;
            a[i] = a[i] % 10;
            a[i + 1] = a[i + 1] + carry;
        }
    }
    if (a[n] != 0)
    {
        n++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
