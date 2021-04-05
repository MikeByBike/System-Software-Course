/*
 * File:	   Array.c
 * Author:	 Michalis Iona
 * Description: Anything to do with what is included within the array
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int arrayTeam(char randomteam, int size) {
    int count = 0; //
    char* formulateam[10] = {
                      "Mercedes",
                      "Ferrari",
                      "Red Bull Racing",
                      "Mclaren",
                      "Aston Martin",
                      "Alpine",
                      "Alfa Rome",
                      "AlphaTauri",
                      "Haas",
                      "Williams"
                    };

  	for (count = 0; count < size; count++) {//0 to size of array
    		randomteam = *formulateam[rand() % 10]; //random numbers are filled accordingly to the counter
  	}
    return randomteam;
}

int *guessTeam(char *arrayPointer, int size, char* input) {
  	int counter = 0; //counter variable
  	char *arrayGuess; //array value variable
  	char team; //pointer variable

  	for (counter = 0; counter < size; counter++) { //For every number
  		arrayGuess = *(arrayPointer + counter);

  		if (arrayGuess == input) { //Checks if user guess is correct
  			team = (arrayPointer + counter); //position of number
  		}
  	}
  	return team; //returns the guessed number
}
