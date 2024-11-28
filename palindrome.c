#include<stdio.h>
#include<string.h>

int main(){
    char ch[100];
    int len = 0, flag = 1;
    printf("Enter the string: ");
    gets(ch);
    char *str = ch;
    char *start = str;
    char *end = str + strlen(str) - 1;
    while(end > start){
        //not palindrome
        if( *start != *end){
            flag = 0;
        }
        start++;
        end--;
    }
    //boolean logic flag is true means flag = 1, false flag = 0
    if(flag){
        printf("%s is a palindrome.\n",ch);
    }
    else{
        printf("%s is not a palindrome.\n",ch);
    }
    return 0;
}