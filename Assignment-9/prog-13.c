#include <stdio.h>
int main()
{
    int a[100];
    int i = 0;
    while (i < 100)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            break;
        }
        i++;
    }
    if (i == 4 && a[0] == a[i - 1])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}