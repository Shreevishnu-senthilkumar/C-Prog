#include <stdio.h>
void incrementArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        *(arr + i) = *(arr + i) + 1;
    }
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    incrementArray(arr, 5);
    printf("Updated array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
