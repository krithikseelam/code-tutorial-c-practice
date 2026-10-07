#include <stdio.h>

int factorial(int);

int factorial(int n){
	if(n == 1 || n == 0){
		return 1;
	}
	return factorial(n -1)*n;
}

int main(){
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	printf("The factorial of %d is %d",a,factorial(a));
	return 0;
}
