
#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("int.txt","r");
    fscanf(ptr,"%d",&num);

    fclose(ptr);
    ptr = fopen("int.txt","w");
    fprintf(ptr,"%d",num*2);

    return 0;
}
