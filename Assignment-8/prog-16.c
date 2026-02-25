#include <stdio.h>
int  disp_biggest_4digit_div7_9(void);
int main()
{
   int x= disp_biggest_4digit_div7_9();
   printf("%d",x);
}
int disp_biggest_4digit_div7_9()
{
    int i;
    for(i = 9999; i >= 1000; i--)
    {
        if(i % 7 == 0 && i % 9 == 0)
        {
            return i;
            break;
        }
    }
}