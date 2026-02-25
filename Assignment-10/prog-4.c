#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int num;

    printf("Enter a number: ");
    scanf("%s", str);

    num = atoi(str);

    printf("Integer value = %d\n", num);

    return 0;
}
