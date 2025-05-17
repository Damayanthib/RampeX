#include<stdio.h>
int main(){
    int arr[5],rev;
    printf("Enter a values of an array: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Reversed arrays are\n");
    for(int i=4;i>=0;i--){
        rev=arr[i];
       printf("%d ",arr[i]);
    }
}