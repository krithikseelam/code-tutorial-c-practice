#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("give which tables you want (n1,n2,n3)");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    int arr[3][10];
    int mul[3] = {n1,n2,n3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i]*(j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d     ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}