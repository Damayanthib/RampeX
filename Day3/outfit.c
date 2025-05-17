#include <stdio.h>
int main() {
    float temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);
    if (temp< 10){
        printf("outfit: Jacket\n");
    } 
    else if (temp>= 10 && temp<= 20) 
    {
        printf("outfit: Sweater\n");
    } 
    else{
        printf("outfit: T-shirt\n");
    }
    return 0;
}
