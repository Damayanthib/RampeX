#include<stdio.h>
int main(){
    int a=14;
    int *p=&a;
    printf("value is %p\n",&a);
    printf("value is %d\n",*p);
    printf("value is %p\n",p);
    printf("value is %p\n",p+1);
    return 0;
}