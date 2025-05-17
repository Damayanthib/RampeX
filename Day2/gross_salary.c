#include<stdio.h>
int main() {
    float basic, hra, da, gross;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    printf("Enter HRA (in amount): ");
    scanf("%f", &hra);
    printf("Enter DA (in amount): ");
    scanf("%f", &da);
    gross = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
