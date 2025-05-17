#include<stdio.h>
int main(){
    int a=1010;
    int b=1111;
    printf("AND: %d\n",a&b);
    printf("OR: %d\n",a|b);
    printf("NOT: %d\n",~b);
    printf("XOR: %d\n",a^b);
    printf("Left shift: %d\n",a<<3);
    printf("Right Shift: %d\n",b>>2);
    return 0;
}