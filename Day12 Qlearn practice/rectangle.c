#include<stdio.h>
int main() {
    int l,b;
    scanf("%d %d",&l,&b);
    int perimeter=2*(l+b);
    int area=l*b;
    printf("%d %d",perimeter,area);
    return 0;
}