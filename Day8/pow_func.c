#include<stdio.h>
#include<math.h>
int power(int a, int b){
    return pow(a,b); 
}
int main(){
    int a,b;
    printf("Enter a value for a:");
    scanf("%d",&a);
    printf("Enter a Power value for b:");
    scanf("%d",&b);
    printf("%d ",power(a,b));
    return 0;
    
}