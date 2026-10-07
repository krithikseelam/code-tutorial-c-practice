#include <stdio.h>

int main(){
    int factorial = 1;
    int fac_number;
    printf("give me number for factorial:\n");
    scanf("%d",&fac_number);
    for (int i = 1; i <=fac_number; i++)
    {
        factorial *=i;
    }
    printf("factorial of %d is %d",fac_number,factorial);
    return 0;
}