#include <stdio.h>

int main(void)
{
    printf("Hello Jonogon, we will learn about Arrays Today\n");

    int arr[] = {1, 5, 6, 7};
    // printing an array
    for (int i = 0; i < 4; ++i)
        printf("%d ", arr[i]);
    printf("\n");

    // changing array elements
    arr[3] = 169;
    for (int i = 0; i < 4; ++i)
        printf("%d ", arr[i]);
    printf("\n");

    // Notice: Array indexing occurs from "0" not "1";
    // arr[0] = 1;
    // arr[3] = 169 not arr[4] = 169;
    return 0;
}