#include <stdio.h>

typedef struct emp{
    int salary;
    float score;
} Employee;


int main(){
    Employee e1;
    Employee* ptr = &e1;
    // (*ptr).salary = 56;
    // (*ptr).score = 45.3;

    ptr->salary = 56;
    ptr->score = 45.3;
    printf("the value of the salary is %d and value of score is %.1f",ptr->salary,ptr->score);
    return 0;
}