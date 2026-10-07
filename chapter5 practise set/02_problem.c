#include <stdio.h>

float c2f(float);

float c2f(float c){
    return (9*c)/5 + 32;
}

int main(){
    float c;
    printf("enter temperature in c\n");
    scanf("%f",&c);
    printf("the temperature %.2f C is %.2f F",c,c2f(c));
    return 0;
}