#include <stdio.h>

int *val()
{
    int a = 10;
    return &a;
}

int main()
{
    printf("Hello World Pallabi to the World of Dangling Pointer\n");

    // Dangling pointer points to a memory location which is freed or deleted
    // it comes into existence during object destruction, when an incoming
    // reference is deleted or de-allocated without modifying the value of
    // the pointer. Yet this pointer points to the memory location of
    // deallocated memory

    int a = 80;
    int *ptr = (int *)malloc(sizeof(int));
    ptr = &a;

    printf("%d\n", *ptr);
    free(ptr);
    // printf("%d\n",*ptr);

    *ptr = NULL;
    *ptr = val();
    printf("%d\n", *ptr);

    // wild pointer
    int *p; // this points an arbitray memory location
    printf("%d\n", *p);

    return 0;
}