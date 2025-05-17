#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two values: ");
    scanf("%d %d",&x &y);
    if(x>y){
        printf("the maximum value is %d",x);
    }
    else{
        printf("the maximum value is %d",y);
    }
return 0;
}