#include <stdio.h>

int main(){
    int isPrime;
    int number;
    printf("your number\n");
    scanf("%d",&number);
    if(number <= 1){
        isPrime =0;
    }
    else{
        for (int i = 2; i  < number; i++)
        {
            if (number %i == 0){
                isPrime = 0;
                break;
            }
            else{
                isPrime = 1;
            }
        }
        
    }
    if (isPrime == 0){
        printf("%d is not a prime number!!!",number);
    }
    else{
        printf("%d is a prime number.",number);
    }
    return 0;
}