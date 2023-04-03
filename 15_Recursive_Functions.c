#include <stdio.h>
int fact[1000];

int factorial(int num)
{
    if (num > 0)
        return num * factorial(num - 1);
    else
        return 1;
}

int main(void)
{
    printf("Hello World Programmers\n");
    printf("Enter a Value for factorial: \n");
    int a;
    scanf("%d", &a);

    printf("%d\n", factorial(5));
    printf("The Factorial of %d is %d\n", a, factorial(a));
    return 0;
}