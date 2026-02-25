#include <stdio.h>
int disp_rsum(void);
int main()
{
      int x=disp_rsum();
    printf("%d",x);
}
int disp_rsum()
{
    int i,sum=0;
    for(i = 6; i >= 1; i--)
    {
        sum=sum+i;
    }
    return sum;
}
