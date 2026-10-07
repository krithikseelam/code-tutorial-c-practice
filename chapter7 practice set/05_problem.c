#include <stdio.h>

void printArray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
}
void reverse(int a[],int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    printArray(arr,6);
    reverse(arr,6);
    return 0;
}