#include<stdio.h>
int isPrime=1;
int Prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%2==0){
            isPrime=0;
            return isPrime;
        }
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    Prime(n);
    if(isPrime){
      printf("%d is a Prime number",n);
    }
    else{
       printf("%d is Not a Prime number",n); 
    }
}