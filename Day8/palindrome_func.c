#include<stdio.h>
int digit,val,org;
int palindrome(int n){
    org=n;
    while(n>0){
    digit=n%10;
    val=val*10+digit;
    n/=10;}
    if(org==val){
        printf("The Given number is a Palindrome");
    }
    else{
        printf("The Given number is not a Palindrome");
    }
    return val;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}