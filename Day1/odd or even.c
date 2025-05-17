#include <stdio.h>

int main() {
   int n;
   printf("Enter a value:");
   scanf("%d",&n);
   if(n%2==0)
   {
    printf("The given number is EVEN");
   }
   else{
    printf("The given number is ODD");
   }
    return 0;
}
