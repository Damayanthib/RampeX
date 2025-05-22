#include <stdio.h>
int power(int a, int b) {
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}
int main() {
    int a, b;
    printf("Enter a base value: ");
    scanf("%d", &a);
    printf("Enter a power value: ");
    scanf("%d", &b);
        printf("The value is %d\n", power(a, b));
    return 0;
}
