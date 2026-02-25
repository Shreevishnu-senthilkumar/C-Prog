#include <stdio.h>
int main()
{
    int x = 10, sum = 0;
    while (x <= 99)
    {
        int d=x;
        int c=x/10;
        //printf("%d",c);
        if(c==7 && (d%2!=0)){
            sum = sum + d;
        }
        x = x + 1;
    }
    printf("%d", sum);
}