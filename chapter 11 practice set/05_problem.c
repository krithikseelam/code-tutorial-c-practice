#include <stdio.h>
#include<stdlib.h>

int main(){
    int n = 10;
    int* ptr;
    ptr = (int*)calloc(n,sizeof(int));
    
    for (int i = 1; i <= n; i++)
    {
        ptr[i] = 7*i;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    n = 15;
    printf("The table till 15:\n");
    ptr = (int*)realloc(ptr,10*sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        ptr[i] = 7*i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}