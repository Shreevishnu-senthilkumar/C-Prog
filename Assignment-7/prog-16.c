#include <stdio.h>
int main()
{
    check_prime();
}
void check_prime()
{
    int n, i, flag = 0;
    scanf("%d", &n);
    if(n <= 1)
    {
        printf("Not Prime");
        return;
    }
    for(i = 2; i <= n - 1; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}