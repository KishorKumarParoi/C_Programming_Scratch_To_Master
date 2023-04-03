#include <stdio.h>

// there are two type functions
// library functions
// user defined functions

int fun(int a, int b)
{
    return a + b;
}
int main(void)
{
    printf("Hello World of Function\n");
    int a, b;
    printf("Enter Two Value: \n");
    scanf("%d %d", &a, &b);
    printf("Sum is %d\n", fun(a, b));
    return 0;
}