#include<stdio.h>
int main(){
    int a=5,b=9;
    int *x=&a;
    int *y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
      printf("Address of a: %p\n", &a);
        printf("Address of b: %p\n", &b);
         printf("Value of x: %p\n", x);
          printf("Value of y: %p\n", y);
           printf("Value pointed to by x: %d\n", *x);
           printf("Value pointed to by y: %d\n", *y);
    return 0;
}