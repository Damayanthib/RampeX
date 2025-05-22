#include <stdio.h>
int arr[2][3][2], sum1 = 0, sum2 = 0;
int array() {
    printf("Enter values for a 3D array [2][3][2]:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("\n3D Array Elements:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nMatrix block %d:\n", i);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 2; k++) {
            sum1 += arr[0][j][k]; 
        }
    }
    printf("\nSum of array1: ");
    return sum1;
}
int mat() {
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 2; k++) {
            sum2 += arr[1][j][k]; 
        }
    }
    printf("\nSum of array2: ");
    return sum2;
}
int main() {
    printf("Sum of 3D Array Sections\n");
    int s1 = array();
    printf("%d\n", s1);
    int s2 = mat();
    printf("%d\n", s2);
    return 0;
}
