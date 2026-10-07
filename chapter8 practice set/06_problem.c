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

void encrypt(char str[]){

    for (int i = 0; i < mystrlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    
}

int main(){
    char str[] = "my pizza is in home";
    encrypt(str);
    printf("%s",str);
    return 0;
}