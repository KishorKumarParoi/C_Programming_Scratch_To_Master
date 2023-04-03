#include <stdio.h>

union Books
{
    char title[20];
    char author[100];
    double price;
    int pages;
};
int main(void)
{
    // union Books book1 = {"C Programming", "Harvard Shielt", 125.54, 500};
    // this will throw error as union can handle only one item in one time
    // key difference betweenn union and struct is that union member shares c
    // common memory whereas struct allocates unique storage
    // changing one value in union changes totally, whereas struct remains
    //  same except the changed item

    union Books book1;
    strcpy(book1.title, "C Programming");
    printf("%s\n", book1.title);
    strcpy(book1.author, "Balagurswamy");
    printf("%s\n", book1.author);

    book1.price = 124.3442;
    printf("%lf\n", book1.price);

    book1.pages = 600;
    printf("%d\n", book1.pages);
    return 0;
}