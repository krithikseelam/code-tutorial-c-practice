#include <stdio.h>
#include<string.h>

int main(){
    char c = 'k';
    int contains = 0;
    char str[] = "krithik";
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            contains = 1;
            break;
        }
    }
    if(contains){
        printf("yes it contains");
    }
    else{
        printf("No it doenst contain");
    }
    
    return 0;
}