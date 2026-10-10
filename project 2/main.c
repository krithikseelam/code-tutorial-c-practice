#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int player, computer = (rand()%3 + 0);
    // 0 -- Rock;
    // 1 -- Paper;
    // 2 -- Scissors;
    printf("Choose 0 for Rock. 1 for Paper. 2 for scissors\n");
    scanf("%d",&player);
    printf("Computer: %d\n",computer);

    if((player == 0 && computer == 0) ||(player == 1 && computer == 1)||(player == 2 && computer == 2)){
        printf("it will be a Draw!\n");
    }
    else if((player == 0 && computer == 1)||(player == 1 && computer == 2)||(player == 2 && computer == 0)){
        printf("you Loose!\n");
    }
    else if((player == 0 && computer == 2) || (player == 1 && computer == 0) ||(player == 2 && computer == 1)){
        printf("you win!!\n");
    }
    else{
        printf("Something went wrong\n");
        
    }
    return 0;
}