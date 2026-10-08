#include <stdio.h>
#include<string.h>

int main(){
    char c = 'i';
    int count = 0;
    char str[] = "krithik";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}