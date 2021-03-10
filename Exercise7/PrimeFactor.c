/*
 * File:   		PrimeFactor.c
 * Author:		Michalis Iona
 * Description:		Finding prime factors from Armstrong numbers
*/

#include <stdio.h>
#include <math.h>
#include "PrimeFactor.h"


void testPrime(int *primeArray) {
	int counter = 0; //count
	int i = 0; //first loop
	int j = 0; //second loop
	int isPrime = 0; //if its prime


	for (counter = 0; counter < 20; counter++) { //for each value from 0 to size of array

		int number = *(primeArray + counter);

		if (number == 0 || number == 1 || number == 2) { //if number is 0, 1 or 2
			printf("\n%d is a prime number\n", number);
		}

		else {
    
		printf("\nThe Prime Factors of %d are: ", number);

    
    		for (i = 2; i <= number; i++) {//find all prime factors
    
        		if ( number % i == 0) { //checks i for factor of number
            			isPrime = 1; //checks if i is prime
            			
            			for (j = 2; j <= i / 2; j++) {
            
                			if (i % j == 0) {
                
                    				isPrime = 0;
                    				break;
               				 }
            			}
            			
            		if (isPrime == 1) { //if i is a prime number and factor of number
               			printf("%d ", i);
            		}

			}

    		}
		}
	}
	printf("\n");
}
