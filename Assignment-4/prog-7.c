#include <stdio.h>
int main ()
{
    int x=10,a,b;
loop:
    if (x<=99)
    {
        a=x/10;
        b=x%10;
        if(x%2!=0 && (a+b)==7)
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