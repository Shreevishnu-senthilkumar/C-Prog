#include <stdio.h>
void strcon(char *src1, char *src2, char *dst)
{
    while (*src1)
    {
        *dst = *src1;
        dst++;
        src1++;
    }

    while (*src2)
    {
        *dst = *src2;
        dst++;
        src2++;
    }

    *dst = '\0';
}

int main()
{
    char a[] = "Hello ";
    char b[] = "World";
    char result[50];

    strcon(a, b, result);

    printf("%s\n", result);

    return 0;
}
