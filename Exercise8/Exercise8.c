/*
 * File:        Exercise8.c
 * Author: 	Michalis Iona
 * Description: Exercise 8 - Using Dynamic Memories
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Array.h"
#include "Calculation.h"
#include "Finder.h"

#define SIZE 10

int main() {
 	int *found = NULL; //if userguess matches number in array variable
  	int *dynamicptr = NULL; //pointer variable
  	int userinput = 0; //input of user variable

  	randomgenerator(); //calls to seed number

  	dynamicptr = (int*)malloc(SIZE * sizeof(int)); //assigns the pointer as malloc 

  	memoryallocated(dynamicptr); //calls to check memory

  	fillArray(dynamicptr, SIZE); //calling function for filling
  	printArray(dynamicptr, SIZE); //calling function for printing random array

  	free(dynamicptr); //frees memory
  	memoryallocated(dynamicptr); //calls to check memory
 	printf("Status: Memory is free.\n");

  	//Question 4C

  	printf("Guess Game!!!\n");
  	dynamicptr = (int*)malloc(SIZE * sizeof(int)); //assigns the pointer as malloc
  	fillArray(dynamicptr, SIZE); //calling function for filling with different numbers
  	printf("\nGuess a number from 1 to 100 that could be in the array: ");
  	scanf("%d", &userinput); //scans input
  	found = guessNumber(dynamicptr, SIZE, userinput); //checks if input is in array

  	if ((found == NULL)) { //if its not in the array
    		printf("The number you inputted cannot be found.\n");
  	}
  	else { //if it is found in the array
  		printf("Congrats!! The number %d is in the array with a memory address of %p.\n", userinput, found);
  	}

  	free(dynamicptr); //frees memory
  	memoryallocated(dynamicptr); //calls to check memory
  	printf("Status: Memory is free.\n");

  	return 0; //ends program

}
