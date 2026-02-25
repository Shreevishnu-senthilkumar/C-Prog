#include <stdio.h>
int main ()
{
    int x, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (; ; ) 
loop:
    if (x != 0)
    {
        digit = x % 10;          
        rev = rev * 10 + digit;
        x = x / 10;            
        goto loop;
    }
    else
    {
        printf("%d", rev);
        return 0;
    }
}
