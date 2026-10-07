#include <stdio.h>

int main(){
    int arr[10];
    for (int i = 1; i <= 10; i++)
    {
        arr[i] = 5*(i);
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("The value of 5 X %d = %d\n",i,arr[i]);
        
    }
    
    
    return 0;
}