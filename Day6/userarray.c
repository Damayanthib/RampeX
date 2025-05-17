#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter a values of array: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
          printf("%d ",arr[i]);
    }
   
    return 0;
}