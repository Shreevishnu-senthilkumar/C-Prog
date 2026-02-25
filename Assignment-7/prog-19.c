#include <stdio.h>
int main()
{
    middle_2digits_prime();
}
void middle_2digits_prime()
{
    int n, mid, i, flag = 0;
    scanf("%d", &n);
    mid = (n / 10) % 100;
    if(mid <= 1)
    {
        printf("Not Prime");
        return;
    }
    for(i = 2; i <= mid - 1; i++)
    {
        if(mid % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}