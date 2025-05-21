#include<stdio.h>
   int sum=0;
int divisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    divisors(n);
    printf("The Sum of Divisors are %d",sum);
    return 0;
}