#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i= 0, isEqual = 1;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }
    if (isEqual)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
