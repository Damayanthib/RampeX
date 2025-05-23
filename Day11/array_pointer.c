#include<stdio.h>
int main(){
    int arr[]={2,6,7,8,9};
    int *p=arr;
    for(int i=0;i<5;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}