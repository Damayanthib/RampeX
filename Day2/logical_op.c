#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a value for a:");
    scanf("%d",&a);
    printf("Enter a value for b:");
    scanf("%d",&b);
    printf("a AND b: %d\n",a&&b);
    printf("a OR b: %d\n",a||b);
    printf("a NOT b: %d\n",a!=b);
    return 0;
}