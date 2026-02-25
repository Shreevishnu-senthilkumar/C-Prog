#include <stdio.h>
int main()
{
    disp_count_sum14();
}
void disp_count_sum14()
{
    int i, temp, sum, count = 0;
    for(i = 1; i < 100000; i++)
    {
        temp = i;
        sum = 0;
        while(temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        if(sum == 14)
        {
            count++;
        }
    }
    printf("%d", count);
}