#include <stdio.h>
int main ()
{
    int x=71,sum=0;
loop:
    if (x<=79)
    {
         if(x%2!=0)
         {
             sum=x+sum;
         } 
        x++;
        goto loop;
    }
    else
    {
        printf("%d", sum);
        return 0;
    }
}