#include <stdio.h>

int main(void)
{
    printf("Hello World of \"Coders\", We will learn User input\\/output Today\n");

    int marks;
    char name[30];
    printf("Enter Student's Name: ");
    scanf("%s", name);
    printf("Enter the marks in Discrete Mathmatics: ");
    scanf("%d", &marks);
    printf("Hello %s! You Have Scored %d in Discrete Mathmatics", name, marks);
    return 0;
}