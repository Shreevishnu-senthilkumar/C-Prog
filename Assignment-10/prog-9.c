#include <stdio.h>

int main()
{
    char str[51];
    int i = 0;

    printf("Enter a number (max 50 digits): ");
    scanf("%50s", str);
    while (str[i] == '0')
    {
        i++;
    }
    if (str[i] == '\0')
    {
        printf("0\n");
    }
    else
    {
        while (str[i] != '\0')
        {
            printf("%c", str[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}
