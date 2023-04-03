#include <stdio.h>

int main(void)
{
    printf("Hello World of \"Loops\"\n");

    // for loop ->
    for (int i = 1; i <= 5; ++i)
    {
        printf("I am KKP\n");
    }

    // while loop
    int i = 1;
    while (i <= 5)
    {
        printf("Ami Ekta Gadha\n");
        i++;
    }
    // beware of infinite loop in while

    // do-while loop
    // i = 1;
    // i is now 5
    do
    {
        printf("It will run at least for one time\n");
        i++;
    } while (i <= 5);

    return 0;
}