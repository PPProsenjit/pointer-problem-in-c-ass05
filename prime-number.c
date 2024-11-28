// Online C compiler to run C program online
#include <stdio.h>
int checkPrimeNumber(int* n){
    int i = 2, sum = 0;
    if( *n <= 1){
        return 0;
    }
    while( i <= *n / 2){
      if( *n % i == 0){
          return 0;
      }
      i++;
    }
    
    return 1;
    
}
int main() {
    int num ;
    printf("Enter the number: ");
    scanf("%d", &num);
    int *ptr = &num;
    
    if(checkPrimeNumber(ptr)){
        printf("This number is prime number.");
    }
    else {
        printf("This number is not a prime number. ");
    }

    return 0;
}