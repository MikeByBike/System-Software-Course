//File name:	Exercise4Part1.c
//Author:	Michalis Iona
//Description:	Multiple tasks such as:
//		-User Inputs  many numbers. Numbers provide following outputs on amount of Negative integers, sum of all numbers and sum of numbers only divisible by three.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CountNegativeNumbers(int number){ //function that counts how many negative numbers user input
	static int negative = 0;
    	if (number < 0) { //if number is less than 0
        	negative++; //counts negative numbers 
    	}
    	return negative; //returns
} 

int SumInput(int number) { //function that counts the sum of all numbers the user input
    	static int sumuser = 0;
    	sumuser += number; //sums all together
    	return sumuser; //returns
}

int SumDivisibleByThree(int number){ //function that count only the numbers divisible by 3 the user input
	static int sumthree = 0;
    	if (number%3 == 0) { //if only number is divisible by three
        	sumthree += number; //sums numbers only divisible by 3 together
    	}
    	return sumthree; //returns
}

int main(){
	//Question 3 main
    	int userinput = 1;
    	while (userinput != 0) { //Count stops when user inputs 0
        	printf("Enter a number: ");
        	scanf("%d, ", &userinput); //reads user input
        	CountNegativeNumbers(userinput); //Calls CountNegativeNumbers function
        	SumInput(userinput); //Calls SumInput function
        	SumDivisibleByThree(userinput); //Calls SumDivisibleByThree function
    	}
    	printf("You have entered %d negative numbers.\n", CountNegativeNumbers(userinput));
   	printf("The sum of all numbers entered is:  %d\n", SumInput(userinput));
    	printf("The sum of all numbers that are only divisible by three entered is:  %d\n", SumDivisibleByThree(userinput));

  	return 0;
}

