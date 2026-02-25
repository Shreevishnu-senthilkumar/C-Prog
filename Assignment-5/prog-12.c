#include <stdio.h>
int main ()
{
    int x, sum=0, b;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (; ; ) 
loop:
    if (x != 0)
    {
        b= x % 10;     
       sum= sum+ b; 
        x = x / 10;        
        goto loop;
    }
    else
    {
        printf("%d", sum);
        return 0;
    }
}
