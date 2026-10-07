#include <stdio.h>

float average(int a, int b, int c);

float average(int a , int b , int c){
    return (a + b + c )/3.0;
}


int main(){
    int marks1 , marks2, marks3;
    printf("Enter a numbers a,b,c:\n");
    scanf("%d,%d,%d",&marks1,&marks2,&marks3);
    printf("the avarage of the three subjects is %f",average(marks1,marks2,marks3));
    return 0;
}