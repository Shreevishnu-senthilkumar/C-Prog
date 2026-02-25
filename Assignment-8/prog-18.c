#include <stdio.h>
int disp_LCM2(void);
int main()
{
   int x= disp_LCM2();
   printf("%d",x);
}
int disp_LCM2()
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
            return i;
            break;
        }
    }
}