#include <stdio.h>

int main()
{
    char str[51];  
    int i = 0;
    int valid = 1;

    printf("Enter a number (max 50 digits): ");
    scanf("%50s", str);

    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            valid = 0;
            break;
        }
        i++;
    }

    if (valid == 1 && i > 0)
        printf("Valid number\n");
    else
        printf("Invalid number\n");

    return 0;
}
