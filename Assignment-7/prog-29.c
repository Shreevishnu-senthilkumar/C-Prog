#include <stdio.h>
int disp_LCM3(void);
int main()
{
    int x=disp_LCM3();
    printf("%d",x);
}
int disp_LCM3()
{
    int a, b, c, i, max;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c)
        max = a;
    else if(b >= a && b >= c)
        max = b;
    else
        max = c;

    for(i = max; ; i++)
    {
        if(i % a == 0 && i % b == 0 && i % c == 0)
        {
           return i;
            break;
        }
    }
}