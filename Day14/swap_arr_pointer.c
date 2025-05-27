#include<stdio.h>
int main(){
    int arr[]={2,9,5,4,3,8};
    int *start=arr;
    int *end=arr+5;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
        for(int val=0;val<6;val++)
        {
            printf("%d ",arr[val]);
        }
    return 0;
}