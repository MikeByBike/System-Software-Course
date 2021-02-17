//File name:	Exercise5Part1.c
//Author:	Michalis Iona
//Description:	Giving command line arguments to main function

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int PrimeNumber(int check) { //Function if prime number or not.

	int count = 0; //counter variable
  	int variable = sqrt(check); //square root of arguement value
  	int flag = 0; //boolean variable to show either prime or not prime
  	for(count = 2; count <= variable; count++) { // No prime if variable is divisible by any number between 2 and n/2
    		if(check%count == 0) { //In order to stop function flag becomes true so it returns false
      			flag = 1; 
      			return 0;
    		}

    		else if (flag == 0) { //if flag is 0 then number is prime and returns true
    			return 1;
   		 }
  	}
  	return 0;
}


int main(int argc, char *argv[]) {

	if (argc > 2) {
    		printf("Enter an argument: \n");
    		return 0;
  	}
  	else {
		int UserInput = atoi(argv[1]);//stores integer and turns from char to int.
		
    		if(UserInput < 0 || UserInput > 100000) { //If user enters a number not between 0 and 100,000
      			printf("Error! - The number is not a valid input. Input an integer between 0 and 100,000.\n"); //error message
      			return 0;
    		}
    		else if( UserInput == 0) {
      			printf("Error! - The number is not a valid input. Input an integer bigger than 0.\n"); //invalid characters
      			return 0;
    		}
    		else {
      			printf("Your input: %d\n",UserInput); 

    		}

    		int PrimeFunction = PrimeNumber(UserInput); //function call, integer to hold result from prime check function
		
		if(PrimeFunction == 0){ //not a prime number
      			printf("%d is not a prime number\n", UserInput);
      			return 0;
    		}
    		else if(PrimeFunction == 1){//prime number
      			printf("%d is a prime number\n", UserInput);
      			return 0;
    		}

  	}
}
