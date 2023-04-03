#include <stdio.h> n

int main(void)
{
    printf("Hello World from Computer Memory Allocation\n");

    // malloc and calloc are quite same except
    // malloc initialize garbaze value and calloc initialise to zero
    // malloc pointer is void type and typecasted to any data type
    // calloc has to send as parameters the number of blocks

    int *ptr = 10;
    printf("%d\n", ptr);
    ptr = (int *)malloc(5 * sizeof(int));
    printf("%d\n", ptr);

    printf("Hello\n");
    // calloc
    printf("%d\n", ptr);
    ptr = (int *)calloc(5, sizeof(int));
    printf("%d\n", ptr);

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    printf("%d\n", ptr);

    free(ptr);
    printf("%d\n", ptr);

    return 0;
}