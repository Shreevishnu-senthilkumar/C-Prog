#include <stdio.h>
int disp_sum(void);
int main()
{
    
    int x=disp_sum();
    printf("%d",x);

}
int disp_sum()
{
    int i,sum=0;
    for(i = 1; i <= 5; i++)
    
    {
        sum=sum+i;
    }
     return sum;
}
