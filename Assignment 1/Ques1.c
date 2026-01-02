#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;
    char c = 'A';
    double d = 123.456;

    printf("Value of int: %d\n", i);
    printf("Size of int: %zu bytes\n", sizeof(i));

    printf("Value of float: %f\n", f);
    printf("Size of float: %zu bytes\n", sizeof(f));

    printf("Value of char: %c\n", c);
    printf("Size of char: %zu bytes\n", sizeof(c));

    printf("Value of double: %lf\n", d);
    printf("Size of double: %zu bytes\n", sizeof(d));

    return 0;
}