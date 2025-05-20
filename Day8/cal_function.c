#include<stdio.h>
int add(int a, int b){
return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int mod(int a,int b){
    return a%b;
}
int main(){
    int c,d;
    printf("Enter a value for c:");
    scanf("%d",&c);
    printf("Enter a value for d:");
    scanf("%d",&d);
    printf("Addition of two values: %d\n",add(c,d));
      printf("Subtraction of two values: %d\n",sub(c,d));
        printf("Multiplication of two values: %d\n",mul(c,d));
          printf("Division of two values: %d\n",div(c,d));
            printf("Modulus of two values: %d\n",mod(c,d));
return 0;
}
