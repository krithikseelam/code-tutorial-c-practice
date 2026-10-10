#include <stdio.h>

int main(){
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("krithik.txt","r");
    ptr2 = fopen("krithik2.txt","a");
    while (1)
    {
        ch = fgetc(ptr);
        if(ch == EOF){
            break;
        }
        else{
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);

        }
    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
