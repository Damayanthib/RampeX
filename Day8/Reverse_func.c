#include<stdio.h>
int digit,rev;
int reverse(int n){
    while(n!=0){
    digit=n%10;
    rev=rev*10+digit;
    n/=10;}
    return rev;
}
int main(){
    int n;
    printf("Enter the number to reverse:");
    scanf("%d",&n);
    reverse(n);
    printf("The reversed number is %d",rev);
    return 0;
}