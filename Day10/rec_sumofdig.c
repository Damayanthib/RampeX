#include<stdio.h>
int Sum(int n,int sum){
    if(n==0){
        return sum;
    }
    else {
       return (n/=10,sum+n%10);
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("\nThe sum of digits is: %d",Sum(num,0));
    return 0;
}