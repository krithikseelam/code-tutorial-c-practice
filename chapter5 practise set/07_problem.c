#include <stdio.h>

int main(){
    int height_of_triangle ;
    printf("which height triangle do you need:");
    scanf("%d",&height_of_triangle);
    for (int i = 0; i < height_of_triangle; i++)
    {
        for (int j = 0; j < 2*i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
} 
