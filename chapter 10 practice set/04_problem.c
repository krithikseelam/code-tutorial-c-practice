
#include <stdio.h>

int main(){
    FILE *ptr;
    char name1[34], name2[34];
    int salary1, salary2;

    ptr = fopen("salary.txt","w");

    if(ptr == NULL){
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter the name of Employee 1\n");
    scanf("%33s",name1);

    printf("Enter the salary of Employee 1\n");
    scanf("%d",&salary1);

    printf("Enter the name of Employee 2\n");
    scanf("%33s",name2);

    printf("Enter the salary of Employee 2\n");
    scanf("%d",&salary2);

    fprintf(ptr,"%s, %d\n",name1,salary1);
    fprintf(ptr,"%s, %d\n",name2,salary2);

    fclose(ptr);

    return 0;
}
