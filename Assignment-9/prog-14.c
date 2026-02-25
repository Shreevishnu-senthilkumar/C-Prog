#include <stdio.h>

int main()
{
    int a[100];
    int i = 0;
    int mid;

    while (i < 100)
    {
        scanf("%d", &a[i]);

        if (a[i] == 0)
        {
            break;
        }

        i++;
    }

    if (i == 0)
    {
        return 0;   // no numbers entered
    }

    if (i % 2 != 0)
    {
        mid = i / 2;
        printf("%d", a[mid]);
    }
    else
    {
        mid = i / 2;
        printf("%d", (a[mid - 1] + a[mid]) / 2);
    }

    return 0;
}
