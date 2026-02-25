#include <stdio.h>

int main()
{
    char str[51];
    int length = 0;

    printf("Enter a number (max 50 digits): ");
    scanf("%50s", str);

    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
