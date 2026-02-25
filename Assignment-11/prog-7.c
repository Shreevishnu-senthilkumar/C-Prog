#include <stdio.h>
int memcomp(int *src, int *dst, int size)
{
    while (size > 0)
    {
        if (*src != *dst)
            return 0;   

        src++;
        dst++;
        size--;
    }
    return 1;  
}

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};

    if (memcomp(a, b, 5))
        printf("Success\n");
    else
        printf("Failure\n");

    return 0;
}
