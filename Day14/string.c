#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter a name :");
    fgets(name,sizeof(name), stdin);
    printf("%s",name);
    return 0;
}
