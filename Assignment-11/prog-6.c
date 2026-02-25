#include <stdio.h>
void strcpy(char *src, char *dst)
{
    while (*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';  
}
int main()
{
    char src[20] = "Hello";
    char dst[20];
    strcpy(src, dst);
    printf("Copied string: %s\n", dst);
    return 0;
}
