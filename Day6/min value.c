#include<stdio.h>
int main(){
    int arr[5]={45,67,34,56,23},min;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min){
              min=arr[i];
        }
    }  printf("The maximum value is %d ",min);
   
    return 0;
}
