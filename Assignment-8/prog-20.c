#include <stdio.h>
int disp_count_HCF2(void);
int main()
{
    int x=disp_count_HCF2();
    printf("%d",x);
}
int disp_count_HCF2()
{
    int a, b, i, hcf = 1, min;
    scanf("%d %d", &a, &b);

    if(a < b)
        min = a;
    else
        min = b;

    for(i = 1; i <= min; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}