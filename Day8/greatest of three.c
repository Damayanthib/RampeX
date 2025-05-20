#include<stdio.h>
int max(int a, int b, int c){
    if(a>b && a>c){
        printf("The greatest value is %d",a);
    }else if(b>a && b >c){
        printf("The greatest value is %d",b);
    }else{
        printf("The greatest value is %d",c);
    }
    return a,b,c;
}
int main(){
    int a,b,c;
    printf("Enter a value for (a,b,c):\n");
    scanf("%d %d %d",&a,&b,&c);
    max(a,b,c);
    return 0;
}