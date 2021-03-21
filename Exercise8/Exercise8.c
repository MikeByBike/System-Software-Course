/*
 * File:        Exercise8.c
 * Author: 	Michalis Iona
 * Description: Exercise 8 - Using Dynamic Memories
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Array.h"
#include "Calculation.h"
#include "Finder.h"

#define SIZE 10
#define MAXSUM 243

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

	//Question 5

	char *userFile = "Numbers.txt"; //numbers to be filled
  	char *testFile = "Test.txt"; //test file to check calculation
	int *inputPtr = NULL; //first array ptr to pass into function text to fill
  	int *q5Array = NULL; //array to hold first filled array from numbers.txt
  	int *sumTest = NULL;//texttofill function
  	int *filledTest = NULL;//filled array from file text.txt
  	int q5ArraySize = 0; //size of first array
  	int sizeTest = 0; //size of second array

	q5Array = (int*)malloc(MAXSUM * sizeof(int)); //allocated dynamic memory
  	memset(q5Array, '-', MAXSUM * sizeof(int));//sets empty cells

  	sumTest = (int*)malloc(MAXSUM * sizeof(int)); //allocated dynamic memory
  	memset(sumTest, '-', MAXSUM * sizeof(int));//sets empty cells

  	inputPtr = (int*)malloc(MAXSUM * sizeof(int)); //allocated dynamic memory
  	memset(inputPtr, '-', MAXSUM * sizeof(int)); //sets empty cells

  	filledTest = (int*)malloc(MAXSUM * sizeof(int)); //allocated dynamic memory
  	memset(filledTest, '-', MAXSUM * sizeof(int));//sets empty cells

  	q5Array = textinarray(inputPtr, userFile); //calling numbers from numbers.txt
  	q5ArraySize = arraySize(q5Array); //calling size of new array
 	printArray(q5Array, q5ArraySize); //calling new array for error checking

  	filledTest = textinarray(sumTest, testFile); //calling to fill array with test.txt
  	sizeTest = arraySize(filledTest);//calling size of new array
  	printArray(filledTest,sizeTest);//prints new array
  	maxSubArray(sumTest, sizeTest);//calling biggest 5 adjacent sum value

  	free(q5Array); //frees memory
	free(filledTest); //frees memory


  	printf("Status: Memory is free.\n");

  	return 0;
}
