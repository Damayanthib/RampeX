#include<stdio.h>
int main() {
    char ch;
    int n = 0;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
        n=1;
    else if(ch>='a' && ch<='z')
        n=2;
    else
        n=3;
    switch(n){
        case 1:
            printf("The character is Uppercase.\n");
            break;
        case 2:
            printf("The character is Lowercase.\n");
            break;
        default:
            printf("The character is not an alphabet letter.\n");
    }
    return 0;
}
