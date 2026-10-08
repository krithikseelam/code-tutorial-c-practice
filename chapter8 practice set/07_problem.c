#include <stdio.h>

int mystrlen(char str[]){
    int i = 0, count;
    char c = str[i];
    while(c != '\0'){
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

void decrypt(char str[]){
    for (int i = 0; i < mystrlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    
}

int main(){
    char str[] = "nz!qj{{b!jt!jo!ipnf";
    decrypt(str);
    printf("%s ",str);
    return 0;
}