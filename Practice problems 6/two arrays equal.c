#include <stdio.h>
int areEqual(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}
int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 3, 4};
    int n = sizeof(a)/sizeof(a[0]);
    if (areEqual(a, b, n))
        printf("Arrays are equal");
    else
        printf("Arrays are not equal");
    return 0;
}
