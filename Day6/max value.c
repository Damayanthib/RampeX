#include<stdio.h>
int main() {
    int arr[5], max, i;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if(i == 0) {
            max = arr[i];  
        } else if(arr[i] > max) {
            max = arr[i]; 
        }
    }
    printf("Maximum number is: %d\n", max);
    return 0;
}