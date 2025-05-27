#include<stdio.h>
int main(){
    int arr[]={4,5,7,8,9};
    int *p=&arr[4];
    for(int val=5;val>0;val--)
    {
        printf("The array value is %d\n",*p);
        printf("The address of value %p\n",arr[val]);
        p--;
    }
    return 0;
}