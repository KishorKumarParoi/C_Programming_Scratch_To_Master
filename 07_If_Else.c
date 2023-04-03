#include <stdio.h>

int main(void)
{
    // printf("Hello World\n");
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("This Number what you have given is : ");
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    printf("This Number is ");
    if (num > 100)
        printf("Bigger than 100\n");
    else if (num < 100)
        printf("Less than 100\n");
    else
        printf("Equal to 100\n");
    return 0;
}