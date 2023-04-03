#include <stdio.h>

int main(void)
{

    // void pointers or general purposed pointer variables
    int var = 1;
    void *voidpointer = &var; // datatype typecasted as integer

    char c = 'c';
    voidpointer = &c; // typecasted as char

    // printf("%c",*voidpointer); // error throwing because of not typecasting
    printf("%c\n", *(char *)voidpointer);
    // printf("%c\n", &voidpointer);

    // Nulll Pointer
    int *ptr = NULL;

    return 0;
}