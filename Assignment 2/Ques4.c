#include <stdio.h>

int main() {
    float balance, interest, charge, bonusFactor;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    printf("Enter interest amount: ");
    scanf("%f", &interest);
    balance += interest;
    printf("Updated Balance (After Interest): %.2f\n", balance);

    printf("Enter annual maintenance charge: ");
    scanf("%f", &charge);
    balance -= charge;
    printf("Updated Balance (After Charge): %.2f\n", balance);

    printf("Enter bonus factor: ");
    scanf("%f", &bonusFactor);
    balance *= bonusFactor;
    printf("Updated Balance (After Bonus): %.2f\n", balance);

    balance /= 2;
    printf("Final Balance (After Dividing between 2 accounts): %.2f\n", balance);

    return 0;
}