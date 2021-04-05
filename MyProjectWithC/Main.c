/*
 * File:        Main.c
 * Author: 	    Michalis Iona
 * Description: Main file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Array.h"

#define SIZE 10

int main() {
    char *team;
 	  int *found = NULL; //if userguess matches number in array variable
  	char *teamptr; //pointer variable

    srand(time(NULL)); //seeds random team

  	printf("Formula 1 GRAND PRIX CONSTRUCTOR GUESS TEAM WINNER!!!\n");
  	teamptr = (char*)malloc(SIZE * sizeof(int)); //assigns the pointer as malloc
    arrayTeam(teamptr, SIZE);
    printf("Guess the team that will win the Grand Prix: ");
    scanf("%s", &team);
    found = guessTeam(teamptr, SIZE, team);

    if (found == NULL) {
      printf("RIP");
    }
    else {
      printf("Congrats, %s has won the grand prix. Spot on!!!");
    }
}
