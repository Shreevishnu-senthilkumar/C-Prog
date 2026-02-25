#include <stdio.h>
int main ()
{
    int x, sum= 0;
    printf("Enter a number: ");
    scanf("%d", &x);

loop:
    if (x!= 0)
    {
        sum++;
        x= x/ 10;
        goto loop;
    }
    else
    {
        printf("%d",sum);
        return 0;
    }
}
