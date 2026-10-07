#include<stdio.h>
int main(){
	int total, lowest;
	int marks1, marks2, marks3;
	float average;
	printf("Enter marks of 3 subjects:\n");
	scanf("%d,%d,%d",&marks1,&marks2,&marks3);
	total = marks1 + marks2 + marks3;
	average = total/3;
	printf("Total:%d \n",total);
	printf("Average %f",average);
	
}
