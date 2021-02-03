//File name:	Exercise3.c
//Author:	Michalis Iona
//Description:	Multiple tasks such as:
//		Counting the sum of numbers using a loop, sum of even numbers using loop and generating a random number and assign it some tasks.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main() {
//Exercise 3 Question 3
int RangeInLoop = 0; //Range in the loop
int firstcounter = 0;//counter num1
int sum = 0; //variable
	    printf("Enter a number from 1 to 100 in order to find the sum until your certain limit: ");
	    scanf("%d", &RangeInLoop);
	    for (firstcounter = 0; firstcounter <= RangeInLoop; ++firstcounter) { //adding to counter until Range in loop
	      sum += firstcounter; //assigns sum to equal to first counter
	    }
	    printf("The sum for all numbers from 0 to %d is: %d\n", RangeInLoop, sum);
	    
int RangeEven = 0;
int secondcounter = 0;	
int EvenSum = 0;    
	    printf("Enter a number from 1 to 1000  in order to find the sum until your certain limit: ");
	    scanf("%d", &RangeEven);
	    for (secondcounter = 0; secondcounter <= RangeEven; ++secondcounter) { //adding to counter until last sum of given number
	      if(secondcounter%2 == 0) {  //checks if the number when divided by 2 the remainder is 0 so its even
      		EvenSum = EvenSum + 1;
      	      }
      	    }
      	    printf("The sum for all even number from 0 to %d is: %d\n", RangeEven, EvenSum);
      	    
int RandomNumber = 0; //generates random number from 1 to 100
int UpperLimit = 20; //upper limit is 20
int LowerLimit = 2; //lower limit is 2
int MultiItself = 0; //The sum when the random generated number adds itself
srand(time(NULL)); // random seed
	    RandomNumber = (rand() % (UpperLimit - LowerLimit + 1)) + LowerLimit; //assignes the random number to have an upper limit and lower limit
	    printf("The random number generated from 2 to 20 is: %d\n", RandomNumber);
	    for (MultiItself = RandomNumber; MultiItself <= 65535; MultiItself *= RandomNumber) { //Random number multiplies itself until a maximum of 2 bytes reached as it can multiply twice maximum.
	      printf("%d \t\n", MultiItself);
	    }
	    
	    printf("The sum of the number multiplied itself until a maximum of 2-byte storage used is: %d\n", MultiItself); //Note: 2 Bytes unsigned short are from 0 to 65,535
     	    return 0;
}

