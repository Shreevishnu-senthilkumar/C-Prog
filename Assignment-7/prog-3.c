#include <stdio.h>
int main()
{
    disp_sum();
}
void disp_sum()
{
    int i,sum=0;
    for(i = 1; i <= 5; i++)
    {
        sum=sum+i;
    }
     printf("%d\n", sum);
}
