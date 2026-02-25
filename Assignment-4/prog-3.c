#include <stdio.h>
int main ()
{
    int x=1,sum=0;
loop:
    if (x<=5)
    {
       sum = sum + x; 
        x++;
        goto loop;
    }
    else
    {
        printf("%d\n", sum);
        return 0;
    }
}
