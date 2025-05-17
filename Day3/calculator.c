#include <stdio.h>
int main() {
    char operator;
    double x, y, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    switch (operator){
        case '+':
            result = x + y;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = x - y;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = x * y;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (y != 0)
                result = x / y;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}
