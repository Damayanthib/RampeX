#include<stdio.h>
int main(){
    int n;
    printf("Enter an year:");
    scanf("%d",&n);
    if(n%4==0)
    {printf("%d is a Leapyear");
    }
    else{
        printf("%d is not a leapyear");
    }
    return 0;
}