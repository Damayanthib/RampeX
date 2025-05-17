#include<stdio.h>
int main(){
    int x,y;
    printf("Enter your age:");
    scanf("%d",&x);
    printf("Do you have license(yes-1 or no-0)?:");
    scanf("%d",&y);
    if(x>=18 && y==1)
    {
        printf("Eligible for voting and driving!");
    }
    else{
        printf("You are not eligible for voting and driving!");
    }
    return 0;
}