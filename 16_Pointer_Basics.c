#include <stdio.h>

int main(void)
{
    printf("Hello World of Pointers\n");

    // (*) is called indirection operator, dereferencing operator
    // it is also an unary operator
    // it takes address as an argument
    // (&) is called direction/ referencing operator
    // gives address of a variable

    // pointers are used to dynamically allocate memory using methods
    // like malloc(), calloc(), realloc() and free()
    // pointers are used to point several containers such as arrays, structs   // and also for passing addresses of containers to functions
    // returns multiple values from a function
    // Rather than passing a copy of a container we can pass its pointer,
    // this reduces memory usage and improves the perfomance

    int a = 100;
    printf("Address is %d and value is %d", &a, *(&a));

    return 0;
}