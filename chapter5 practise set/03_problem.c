#include <stdio.h>

float force(float);

float force(float mass){
    return mass * 9.8;
}

int main(){
    float m = 45;
    printf("The force is %.2f N\n", force(m));
    return 0;
}