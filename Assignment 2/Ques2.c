#include <stdio.h>

int main() {
    float balance1, balance2;

    printf("Enter first account balance: ");
    scanf("%f", &balance1);

    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    printf("Both balances are equal: %d\n", balance1 == balance2);
    printf("First balance is greater than the second: %d\n", balance1 > balance2);
    printf("Second balance is greater than the first: %d\n", balance2 > balance1);

    return 0;
}