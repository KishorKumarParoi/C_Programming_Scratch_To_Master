#include <stdio.h>

struct Books
{
    char title[20];
    char author[100];
    double price;
    int pages;
};
int main(void)
{
    struct Books book1 = {"C Programming", "Harvard Shielt", 125.54, 500};
    printf("%s\n", book1.title);
    printf("%s\n", book1.author);
    printf("%lf\n", book1.price);
    printf("%d\n", book1.pages);
    return 0;
}