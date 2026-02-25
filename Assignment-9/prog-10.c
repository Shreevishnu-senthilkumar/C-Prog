#include <stdio.h>
int main()
{
    int a[5];
    int b[5];
    int i, j = 0;
    int num, k, count;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        num = a[i];

        if(num <= 1)
        {
            b[j] = num;
            j++;
        }
        else
        {
            count = 0;
            for(k = 2; k <= num / 2; k++)
            {
                if(num % k == 0)
                {
                    count = 1;
                    break;
                }
            }

            if(count == 1)
            {
                b[j] = num;
                j++;
            }
        }
    }
    for(i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
