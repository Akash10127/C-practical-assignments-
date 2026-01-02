#include <stdio.h>

int main() {
    int x = 10;
    int result;

    result = x++ + 5;
    printf("Post-increment (x++): Result = %d, Final x = %d\n", result, x);

    x = 10; 
    result = ++x + 5;
    printf("Pre-increment (++x): Result = %d, Final x = %d\n", result, x);

    return 0;
}