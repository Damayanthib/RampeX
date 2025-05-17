#include <stdio.h>
int main() {
    int i = 2;  
    printf("The even numbers between 1 to 50");
    
    while (i <= 50) {
        printf("%d ", i);  
        i += 2;
    }
    return 0;
}