#include <stdio.h>
int main()
{
    disp_descend();
}
void disp_descend()
{
    int i;
    for(i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}
