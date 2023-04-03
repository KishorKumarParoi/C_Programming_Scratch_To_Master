#include <stdio.h>

int main(void)
{
    printf("Hello Folks, Welcome to Data type World\n");
    int a = 20;
    float b = 20.22;
    double c = 20.23243243435;
    char d = 'd';
    short int e = 12;
    long int f = 1320324353;
    unsigned g = 234;
    unsigned long long int h = 100000023;

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", d);
    printf("%lf\n", c);
    printf("%uld\n", h);
    printf("%ld\n", f);

    // constant variable which value can't be changed
    const int MOD = 1e9 + 7;
    printf("%d\n", MOD);

    return 0;
}