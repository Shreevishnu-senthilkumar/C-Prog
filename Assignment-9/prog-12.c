#include <stdio.h>
int main()
{
    int a[100];
    int i = 0;
    int sum = 0;
    while (i < 100)
    {
        scanf("%d", &a[i]);

        if (a[i] == 0)
        {
            break;
        }

        sum = sum + a[i];
        i++;
    }
    printf("Total numbers: %d\n", i);
    printf("Sum: %d", sum);
    return 0;
}
