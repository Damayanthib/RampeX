#include <stdio.h>

int main() {
    int age, sal;
    char address[100]; 
    printf("Enter your age: ");
    scanf("%d", &age); 
    printf("Age: %d\n", age);  
    printf("Enter your salary: ");
    scanf("%d", &sal); 
    printf("Salary: %d\n", sal);  
    printf("Enter your address: ");
    scanf("%[^\n]%*c", address);  
    printf("Address: %s\n", address); 
    return 0;
}
