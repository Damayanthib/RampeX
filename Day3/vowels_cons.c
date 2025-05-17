#include<stdio.h>

int main() {
    char n;
    printf("Enter a Character: ");
    scanf("%c", &n);
    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
        switch(n) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("The Character is a Vowel");
                break;
            default:
                printf("The Character is a Consonant");
        }
    } else {
        printf("Not an Alphabet Character");
    }

    return 0;
}
