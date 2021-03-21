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

int *textinarray(int *textarray, char *path) {
	FILE *open = fopen(path, "r"); //opens the file
	int counter = 0; //counter variable

	printf("File %s has been opened \n", path); //message to show that file has been opened

	if ( open == NULL || counter <= 5) {// if no file has been found
                printf("Error!, file has not been found OR Numbers are less than 5\n");
                return 0;
  }

	while(!feof(open)) { //while the end of file hasnt been read
		fscanf(open, "%d", &*(textarray + counter)); //scans numbers and place them into array+position
		counter++; //next position in array
	}

	fclose(open); //closes file
	printf("The file %s has been closed, with the amount of %d numbers added to the array. \n", path, counter - 1); //ensures file is closed and prints entries
	return textarray; //returns the array filled
}
