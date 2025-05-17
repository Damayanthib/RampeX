#include <stdio.h>
#include <string.h>
int main(){
    char username[20], password[20];
    char correctUsername[]="xyz";
    char correctPassword[]="123";
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(username, correctUsername)==0 && strcmp(password, correctPassword)==0) {
        printf("Login successful.\n");
    } 
    else {
        printf("Invalid username or password.\n");
    }
    return 0;
}
