#include <stdio.h>

int sum_natural(int);

int sum_natual(int n){
    if (n == 1 ){
        return 1;
    }
    return sum_natual(n-1) + n;
}


int main(){
    int n;
    printf("which sum of natural numbers do you want\n");
    scanf("%d",&n);
    printf("sum of %d natural numbers is %d\n",n,sum_natual(n));
    return 0;
} 
