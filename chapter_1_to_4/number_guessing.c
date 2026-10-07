#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int no_to_guess;
    int guessed_no, no_of_guesses;
    int count = 10;

    srand(time(NULL));
    no_to_guess = rand() % 100 + 1;

    for (no_of_guesses = 0; no_of_guesses < count; no_of_guesses++)
    {
        printf("guess the number:\n");
        scanf("%d",&guessed_no);

        if(guessed_no > no_to_guess){
            printf("The no is lesser than %d\n",guessed_no);
        }
        else if (guessed_no < no_to_guess)
        {
            printf("The no is greater than %d\n",guessed_no);
        }
        else{
            printf("You WON the number is %d and you guessed it in %d attempts\n",no_to_guess, no_of_guesses);
            break;
        }
    }

    if (no_of_guesses == count){
        printf("you lost the game you sucker!!");
    }

    return 0;
}