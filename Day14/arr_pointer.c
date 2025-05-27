#include<stdio.h>
int main(){
    int arr[]={4,5,7,8,9};
    int* p=arr;
    for(int val=0;val<5;val++){
        printf("The array value is %d\n",*(p+val));
        printf("The address of value %p\n",arr[val]);
    }
    return 0;
}