/*
 * File:   		Exercise7.c
 * Author:    		Michalis Iona
 * Description:		Armstrong Arrays and their prime functions
*/

#include <stdio.h>
#include "Armstrong.h"
#include "PrimeFactor.h"


void printArray(int *arrayPointer, int size) {

  	printf("The Armstrong numbers from 0 to 100,000 are: \n");
  	int counter = 0; 

  	for (counter = 0; counter < size; counter++ ) { //from 0 to size of array (100,000)
    		printf("Position %d: %d\n", counter, (*arrayPointer)); //print value of variable
    		arrayPointer++; //increase pointer
 	 }

}


int main () {

	int CreatedArray[20] = {}; 
	int *implementedPtr = &CreatedArray[0];

  	testArmstrong(implementedPtr);
  	printArray(implementedPtr, 20);
  	
  	testPrime(implementedPtr);
	return 0;
}
