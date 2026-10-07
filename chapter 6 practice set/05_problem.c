#include <stdio.h>

int* sum(int a, int b){
    int sum = a + b;
    int* ptr = &sum;
    return ptr;
    printf("the sum is %d\n", a+b);
}

int* average(int a, int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("the avarage is %f\n", avg);
    return ptr;
}

int main(){
    int x = 4;
    int y = 6;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    sum(x,y);
    average(x,y);

    printf("the address of sum is %p and of average is %u",ptr1,ptr2);

    return 0;
}