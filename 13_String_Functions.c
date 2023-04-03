#include <stdio.h>
#include <string.h> // needed to add this header for string function operation

int main(void)
{
    printf("Hello World of string functions\n");

    // strcat
    char s[23] = "\"hello ";
    char t[23] = "world\"";
    strcat(s, t);
    printf("String = %s\n", s);

    // strlen
    int len = strlen(s);
    printf("Size is %d\n", len);

    // strcpy
    char p[111];
    strcpy(p, s);
    printf("Copied String : %s\n", p);

    // strcmp
    int cmp = strcmp(p, t); // not identical returns will be less than zero, if
                            // identical return zero
    printf("%s\n", p);
    printf("%s\n", s);
    printf("Comparison Result: %d\n", cmp);

    // strrev
    // char ss[] = "Kishor";
    // printf("Reversed String : %s", strrev(ss));

    return 0;
}