// Online C compiler to run C program online
#include <stdio.h>
int checkStrongNumber(int* n){
    int i, sum = 0;
    while( *n > 0){
        int fact = 1;
        for(i = 1; i <= *n % 10; i++){
            fact = fact * i ;
        }
        sum = sum + fact;
        *n = *n / 10;
    }
    
    return sum;
    
}
int main() {
    int num ;
    printf("Enter the number: ");
    scanf("%d", &num);
    int *ptr = &num;
    if(*ptr == checkStrongNumber(ptr)){
        printf("number is strong number.");
    }
    else 
    printf("This number is not a strong number.");

    return 0;
}