/*
 * File:   		Armstrong.c
 * Author:		Michalis Iona
 * Description:		From 0 to 100000 inputs in array all Armstrong numbers
*/

#include <stdio.h>
#include <math.h>
#include "Armstrong.h"
#define SIZE 100000


int testArmstrong(int *fillArray) {

	int i = 0; //counter
    	int sum = 0; //result
   	int number = 0; //number to test
    	int last = 0; //holds last digit
    	int digits = 0; //number of digits
  	int lower = 0; //lower range
    	int upper = SIZE; //max range
    	int position = 0; //hold the positional co-ordinates in the array


	for(i=lower; i<=upper; i++) {
         	sum = 0;
         	number = i; //copies number to process
         	digits = (int) log10(number) + 1; //total digits in number

         	while(number != 0) { //if number is not zero
             		last = number % 10; //gets last digit
             		sum = sum + ceil(pow(last, digits)); //find sum of power of digits and uses ceil to overcome rounding errors
            		number = number / 10; //removes last digit
         	}
         	
         	if(i == sum) { //checks if Armstrong number
             		*(fillArray + position) = i;
			position = position + 1;
		}
	}
	return *fillArray;
}
