#include <stdio.h>

int main()
{
    int num, temp, i = 0;
    char digits[20];

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    if (temp == 0)
    {
        printf("0\n");
        return 0;
    }

    if (temp < 0)
    {
        temp = -temp;  
    }

    while (temp > 0)
    {
        digits[i++] = (temp % 10) + '0';
        temp = temp / 10;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c\n", digits[j]);
    }

    return 0;
}
