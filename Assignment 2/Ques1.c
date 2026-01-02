#include <stdio.h>

int main() {
    char name[50];
    float basic, hra, da, gross, tax, net;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.10 * basic;
    gross = basic + hra + da;
    tax = 0.05 * gross;
    net = gross - tax;

    printf("\n--- Salary Slip ---\n");
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA (20%%): %.2f\n", hra);
    printf("DA (10%%): %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);
    printf("Income Tax (5%%): %.2f\n", tax);
    printf("Net Salary: %.2f\n", net);

    return 0;
}