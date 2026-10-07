#include <stdio.h>

int main(){
    int arr[10];
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        arr[i] = n*(i);
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("The value of %d X %d = %d\n",n,i,arr[i]);
        
    }
    
    
    return 0;
}