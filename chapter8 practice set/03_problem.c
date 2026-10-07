#include <stdio.h>

int main(){
    char str[] = "Krithik";
    int i = 0,count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i-1;
    
    printf("%d", count);
    return 0;
}