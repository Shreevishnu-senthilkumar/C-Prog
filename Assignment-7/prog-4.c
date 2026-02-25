#include <stdio.h>
int main()
{
    disp_rsum();
}
void disp_rsum()
{
    int i,sum=0;
    for(i = 6; i >= 1; i--)
    {
        sum=sum+i;
    }
     printf("%d\n", sum);
}
