//File name:	Exercise6Part2.c
//Author:	Michalis Iona
//Description:	Using pointers for arrays

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

//Initialising
void printArray(int *pointerArray, int size); 
void fillArray(int *arrayFiller); 
void sortArray(int *sort, int length); 


//main
int main(){
	int currentArray[10] = {3, 4, 7, 11, 15, 23, 25, 35, 50, 70}; //creating our own array
	int *currentPointer = &currentArray[0]; //creating pointer for our own array and pointing it
	srand(time(NULL));
	int randomArray[SIZE] = {}; //creating a random array
  	int *randomPointer = &randomArray[0]; //creating pointer for the random array and pointing it

  	printArray(currentPointer, 10); //calling function for printing
  	fillArray(randomPointer); //calling function for filling 
  	printArray(randomPointer, SIZE); //calling function for printing random array

  	printf("Array has been sorted from largest to smallest. The Result is: \n");
  	sortArray(randomPointer,SIZE); //calling function for sort
  	printArray(randomPointer, SIZE); //calling function for printing sorted array
	
  	return 0;
}

void printArray(int *pointerArray, int size) { //printing array that has parameters and proper size
  	printf("Numbers in the array: \n");
  	int count = 0; //count
  	for (count = 0; count < size; count++) { //0 to size of array
    		printf("Number %d is at pointer: %d\n", count, *pointerArray);
    		pointerArray++; //increase pointer
  	}

}

void fillArray (int *arrayFiller){ //function for filling array with random numbers, with parameters of array
  	int count = 0; //count
  	for (count = 0; count < SIZE; count++) {//0 to size of array
    		*(arrayFiller + count) = rand() % 1000000; //random numbers are filled accordingly to the counter
  	}
}

void sortArray (int *sort, int length){ //function for sorting array from largest to smallest with parameters of array
  	int x = 0; //count for first loop
  	int y = 0; //count for second loop
  	int temp = 0; //hold temporary variables
   	for (x = 0; x < length; x++) { // length step
   		for (y = x + 1; y < length; y++) { //length step + 1
    			if (*(sort + x) > *(sort + y)) {//if current number is smaller than the next one smaller value takes importance
      				temp = *(sort + x);
      				*(sort + x) = *(sort + y);
      				*(sort + y) = temp;
     			}
    		}
   	}
}
