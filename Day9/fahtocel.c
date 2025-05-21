#include<stdio.h>
float FahToCel(float fah) {
    return(fah-32)*5.0/9.0;
}
int main() {
    float fah, cel;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cel = FahToCel(fah);
    printf("%.2f Fahrenheit = %.2f Celsius\n", fah, cel);
    return 0;
}