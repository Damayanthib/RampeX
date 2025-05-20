#include<stdio.h>
void greet(char *a, char *b)
{
    printf("Hello %s,Welcome to %s Company",a,b); 
}
int main(){
  char a[20],b[30];
  printf("Enter your name:");
  scanf("%s",a);
  printf("Enter the company name:");
  scanf("%s",b);
  greet(a,b);
  return 0;
}