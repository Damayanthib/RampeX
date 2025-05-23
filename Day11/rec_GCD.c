#include<stdio.h>
int GCD(int a,int b){
    if(b==0)
      return a;
    else
    return GCD(b,a%b);
}
int main(){
    int a,b;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("GCD value of two numbers: %d",GCD(a,b));
    return 0;
}  