#include <stdio.h>

int main()
{
    char num;

    printf("Enter a single digit: ");
    scanf(" %c", &num);

    printf("ASCII value of %c = %d\n", num, num);

    return 0;
}
