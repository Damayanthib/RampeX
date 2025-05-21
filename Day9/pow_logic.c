#include<stdio.h>
int result=1;
int Power(int a, int b){
    for(int i=1;i<=b;i++){
        result*=a;
    }
    return result;
}
int main(){
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter a power value:");
    scanf("%d",&b);
    Power(a,b);
    printf("The value is %d",result);
return 0;
}