//File Name: 	Exercise3Part2.c (Question 4)
//Author: 	Nicholas Navarro
//Description: 	Encoding Fibonacci Numbers and Checking if a generated random number is part of the sequence


#include <stdio.h> 
#include <math.h>
#include <time.h>
#include <stdlib.h>

//function to return True when squared if it a integer.
int SquaredInteger(int input){
int squared = 0; //assigns squared as the squared input
  squared = input * input;
  return (squared*squared == input); //returns only if the number times itself and equals to the squared integer
}

//function to check if the formula provided results to a Fibonacci number
int FibonacciFunction(int input){
  return SquaredInteger(5 * input * input + 4) || SquaredInteger(5 * input * input - 4);
}

int main(){
srand(time(NULL)); // generated random seed in order to ouytput random number
int RandomNumberFibo = rand() % 100000; //assigns the random number up to 100,000
  printf("The random generated number is: %d\n", RandomNumberFibo);
  
  if (FibonacciFunction(RandomNumberFibo) == 1) { //if the formula in the function returns 1, this means it is a fibbo number
    printf("The random generated number is a Fibonacci number.\n"); 
  }
  else {
    printf("The random generated number is not a Fibonacci number.\n");
  }
  return 0;
}
