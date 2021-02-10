//File name:	Exercise4Part3.c
//Author:	Michalis Iona
//Description:	Rock, Paper, Scissors game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//implementing Rock = 1. Paper = 2, Scissord = 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomNumber(int n){
    srand(time(NULL));
    return rand() % n;
}

int outcome(char c1, char c2){
    if(c1 == c2) {
        return -1;
    }
    else if (c1 == 'p' && c2 == 'r') {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r') {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p') {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p') {
        return 0;
    }
    else if (c1 == 'r' && c2 == 's') {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's') {
        return 0;
    }
    return 0;
}

int main(){
    int UserScore = 0, ComputerScore = 0, choice;
    char UserSelect, ComputerSelect;
    char dict[] = {'R', 'P', 'S'};
    printf("Rock Paper Scissors Game!\n");

    for (int input =0; input<3; input++){
        printf("Choose - 1 is Rock - 2 is Paper - 3 is Scissors\n");
        printf("Your Turn; ");
        scanf("%d", &choice);
        getchar();
        UserSelect = dict[choice - 1];
        printf("Your choice: %c \n", UserSelect);

        printf("Choose - 1 is Rock - 2 is Paper - 3 is Scissors\n");
        printf("Computer's turn:\n");
        choice = RandomNumber(3) + 1;
        ComputerSelect = dict[choice - 1];
        printf("Computers choice: %c \n", ComputerSelect);


        if (outcome(ComputerSelect, UserSelect) == 1){
            ComputerScore++;
            printf("Round lost!\n");
        }
        else if(outcome(ComputerSelect, UserSelect) == -1){
            ComputerScore++;
            UserScore++;
            printf("Draw. Both computer and you got 1 point!\n");
        }
        else {
            UserScore++;
            printf("Round won!\n\n");
        }

        printf("You: %d \n", UserScore);
        printf("Computer: %d \n", ComputerScore);

    }

        printf("FINAL SCORE : \n");
        printf("user | computer \n");
        printf(" %d | %d \n", UserScore, ComputerScore);

        //Comparing score
        if(UserScore > ComputerScore)
        {
            printf("You Win!\n");
        }
        else if(UserScore < ComputerScore)
        {
            printf("Game Over!\n");
        }
        else
        {
            printf("Draw!\n");
        }

        return 0;
    }
