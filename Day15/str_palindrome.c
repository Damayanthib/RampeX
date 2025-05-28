#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[1000],ispal=1;
    int length=0;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    int start=0;
    while(str[length]!='\0'&& str[length]!='\n'){
    length++;
    }
    int end=length-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            ispal=0;
            break;
        } 
        start++;
        end--;
    } 
    if(str[length]=='\n')
    str[length]='\0';
    if(ispal){
     printf("%s is a palindrome",str);
    }
    else{
     printf("%s is not a palindrome",str);
    }
   return 0;
}