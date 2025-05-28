#include <stdio.h>
int main() {
    int arr[100], n, i;
    int evenCount = 0, oddCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Even numbers in the array are:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            evenCount++;
        }
    }
    printf("\nOdd numbers in the array are:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            oddCount++;
        }
    }
    printf("\nTotal even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);
    return 0;
}
