#include <stdio.h>
int main()
{
    int a[50], b[50], c[51];
    int n1, n2, i, carry = 0, sum;
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    i = 0;
    while (n1 > 0 || n2 > 0)
    {
        sum = carry;
        if (n1 > 0) sum += a[--n1];
        if (n2 > 0) sum += b[--n2];
        c[i++] = sum % 10;
        carry = sum / 10;
    }
    if (carry)
        c[i++] = carry;
    for (i = i - 1; i >= 0; i--)
        printf("%d", c[i]);

    return 0;
}
