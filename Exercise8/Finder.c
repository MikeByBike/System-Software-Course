/*
 * File:	Finder.c
 * Author:	Michalis Iona
 * Description:	Finder Program
*/

#include <stdio.h>
#include "Finder.h"

int *guessNumber(int *arrayPointer, int size, int input) {
  	int counter = 0; //counter variable
  	int arrayNumber = 0; //array value variable
  	int *number = 0; //pointer variable

  	for (counter = 0; counter < size; counter++) { //For every number
  		arrayNumber = *(arrayPointer + counter);

  		if (arrayNumber == input) { //Checks if user guess is correct
  			number = (arrayPointer + counter); //position of number
  			printf("Position of number is: %d\n", counter + 1); //outputs position
  		}
  	}
  	return number; //returns the guessed number
}

int arraySize(int *array) {
	int count = 0; //counter
	while (*(array + count) != 757935405) { //while the array elements doesnt equal
		count++; //increase counter
	}
	return count; //return size of array
}
