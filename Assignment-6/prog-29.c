#include <stdio.h>
int main()
{
    int a, b, c, lcm;
    scanf("%d %d %d", &a, &b, &c);
    lcm = a;
    if (b > lcm)
        lcm = b;
    if (c > lcm)
        lcm = c;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            printf("%d", lcm);
            break;
        }
        lcm = lcm + 1;
    }
}
