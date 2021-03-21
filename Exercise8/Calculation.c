/*
 * File:	Calculation.c
 * Author:	Michalis Iona
 * Description: Calculation Program
*/

#include <stdio.h>
#include "Calculation.h"

void maxSubArray(int *subArray, int size) {
	int i = 0; //counter
	int j = 0; //counter 
	int k = 0; //counter 
  	int sum = 0; //holds sum of 5 numbers
	int maxSum = 0; //holds highest sum

	for (i = 0; i < size; i++) {//for each step from 1 to size of array
  		for (j = i; j < size; j++) {//for each step from 1 to size of the array
    			sum = 0; //temp is empty
      			for (k = i ; k < j; k++) {//for each value higher than previous value
        			sum = sum + *(subArray + k); //it adds previous number to next number
      			}
      			if (sum > maxSum) {//if the sum is higher than the max sum
        			maxSum = sum; //maxSum now holds the biggest number
    			}
   		}
   	}		
  	printf("The maximum sum of the adjacent numbers is: %d\n", maxSum);
}
