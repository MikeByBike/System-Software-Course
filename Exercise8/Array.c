/*
 * File:	Array.c
 * Author:	Michalis Iona
 * Description: Array Program
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Array.h"

void printArray(int *pointerArray, int size) { //printing array that has parameters and proper size
  	printf("Numbers in the array: \n");
  	int count = 0; //count
  	for (count = 0; count < size; count++) { //0 to size of array
    		printf("Number %d is at pointer: %d\n", count+1, *pointerArray);
    		pointerArray++; //increase pointer
  	}
}

int *fillArray (int *arrayFiller, int size) { //function for filling array with random numbers, with parameters of array
  	int count = 0; //count
  	for (count = 0; count < size; count++) {//0 to size of array
    		*(arrayFiller + count) = rand() % 100; //random numbers are filled accordingly to the counter
  	}
    	return arrayFiller;
}

void randomgenerator() {
    	srand(time(NULL)); //seeds
}

void memoryallocated(int *dynamic) {
  	if (dynamic == NULL) {
        	printf("Memory is not allocated.\n");
  	}
}
