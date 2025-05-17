#include <stdio.h>
int main() {
    int arr[5], sum = 0,avg;
    printf("Enter 5 values: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        avg=sum/5;
    }
    printf("Sum of the array elements: %d\n",sum);
    printf("Average of the array elements is: %d\n", avg);
    return 0;
} 