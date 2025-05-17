#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("The maximum value is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The maximum value is %d\n", b);
    } else {
        printf("The maximum value is %d\n", c);
    }

    return 0;
}
