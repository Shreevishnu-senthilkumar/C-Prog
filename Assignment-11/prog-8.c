#include <stdio.h>
int strcomp(char *src, char *dst)
{
    while (*src && *dst)
    {
        if (*src != *dst)
            return 0;

        src++;
        dst++;
    }

    if (*src == '\0' && *dst == '\0')
        return 1;

    return 0;
}

int main()
{
    char a[] = "Hello";
    char b[] = "Hello";

    if (strcomp(a, b))
        printf("Success\n");
    else
        printf("Failure\n");

    return 0;
}
