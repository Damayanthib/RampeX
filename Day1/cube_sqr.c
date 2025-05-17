#include<stdio.h>
int main(){
  int a, square, cube;
  printf("Enter a value for a:");
  scanf("%d",&a);
  square=a*a;
  cube=a*a*a;
  printf("Value of square is %d\n",square);
  printf("Value of cube is %d\n",cube);
  return 0;
}