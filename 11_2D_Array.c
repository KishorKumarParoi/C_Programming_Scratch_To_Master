#include <stdio.h>

int main(void)
{
    printf("Hello smart folks, we will learn about 2D array today\n");
    int arr[10][20] = {0}; // initialised all array elements to be zero

    printf("Make an 2D array by giving input: \n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 20; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}