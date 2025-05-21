#include<stdio.h>
int arr[2][3],i,j;
void Matrix(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter element at position [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
           
        }
    }
    }
    void  printmat(){
        printf("\nThe 2x3 array is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    }
int main(){
   Matrix();
   printmat();
    return 0;
}