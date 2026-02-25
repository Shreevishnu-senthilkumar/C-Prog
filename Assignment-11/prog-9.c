#include <stdio.h>
void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    while (size1 > 0)
    {
        *dst = *src1;
        dst++;
        src1++;
        size1--;
    }

    while (size2 > 0)
    {
        *dst = *src2;
        dst++;
        src2++;
        size2--;
    }
}

int main()
{
    int a[3] = {1,2,3};
    int b[2] = {4,5};
    int result[5];

    intcon(a, 3, b, 2, result);

    for (int i = 0; i < 5; i++)
        printf("%d ", result[i]);

    return 0;
}
