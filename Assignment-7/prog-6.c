#include <stdio.h>
int main()
{
    disp_2digit_odd();
}
void disp_2digit_odd()
{
    int i,sum=0;
    for(i = 11; i <= 19; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}

