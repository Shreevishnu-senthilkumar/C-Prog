#include <stdio.h>
int main ()
{
    int x=11;
loop:
    if (x<=19)
    {
        if(x%2!=0)
       {
         printf("%d\n", x);
       } 
        x++;
        goto loop;
    }
    else
    {
        return 0;
    }
}