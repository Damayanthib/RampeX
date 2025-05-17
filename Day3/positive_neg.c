#include <stdio.h>
int main() {
    int number;
    int result;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0)
        result = 1;
    else if (number < 0)
        result = -1;
    else
        result = 0;
    switch(result){
        case 1:
            printf("The number is positive.\n");
            break;
        case -1:
            printf("The number is negative.\n");
            break;
        case 0:
            printf("The number is zero.\n");
            break;
    }
    return 0;
}
