#include <stdio.h>
int main()
{
    disp_LCM2();
}
void disp_LCM2()
{
    int a, b, i, max;
    scanf("%d %d", &a, &b);
    if(a > b)
        max = a;
    else
        max = b;
    for(i = max; ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            printf("%d", i);
            break;
        }
    }
}