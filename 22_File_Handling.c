#include <stdio.h>
// typedef int *ptr; // google for difference between typedef and #define macros
int main(void)
{
    printf("Hello World of FILES\n");

    // r - opens a file for reading
    // w - opens a file for writing
    // a - opens a file for appending
    // r+ - opens a file for both reading and writing but can't create a new
    // w+ - opens a file for both reading and writing

    // fclose(ptr);

    // FILE *ptr;
    // make a .txt file in your local code compiler
    // ptr = fopen("kkp.txt", "r"); // read
    // ptr = fopen("kkp.txt", "w"); // write
    // char str[128];

    //   fscanf(ptr, ""%s", str);
    //   printf("%s\n", str);
    return 0;
}