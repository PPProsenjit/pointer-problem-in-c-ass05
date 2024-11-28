
#include <stdio.h>
int checkStrongNumber(int* n){
    int i = 1, sum = 0;
    while( i < *n){
        //factorial check 
        if( *n % i == 0){
            //factorial and add 
            sum = sum + i; 
        }
        i++;
    }
    
    return sum;
    
}
int main() {
    int num ;
    printf("Enter the number: ");
    scanf("%d", &num);
    int *ptr = &num;
    if(*ptr == checkStrongNumber(ptr)){
        printf("This number Perfect number.");
    }
    else 
    printf("This number is not a perfect number.");

    return 0;
}