#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    celsius=(fahrenheit-32)*5.0/9.0;
    printf("Temperature in celsius:%.2f\n",celsius);
    return 0;
}
