//File name:	Exercise3Part3.c
//Author:	Michalis Iona
//Description:	Generating the Collatz sequence for the random generated number

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int RandomCollatz = 0; 

//function to provide the Collatz formula
int CountCollatz(int n){ 
  int count = 0; //counts the while loop 
  while(n != 1) { //while loop that runs when its not equal to 1
    printf("%d - ", n); //prints step
    if(n % 2 == 0){ //check if even
      n /= 2;//formula for even
    }
    else{
      n = (3 * n) + 1; //formula for odd
    }
    count++;
  }
  printf("\nLength of the sequence is: %d\n", count); //prints runs of while loop as Sequence Length
  return 0;
}

int main(){
  srand(time(NULL)); // random seed
  RandomCollatz = rand() % 100; //generated number until 100
  printf("The random collatz number generated is: %d\n", RandomCollatz);
  if (RandomCollatz == 0 || RandomCollatz == 1) { //prints error if random number is 0 OR 1
    printf("Error, the Collatz number is undefinined OR if collatz number is 1, length is 0\n");
  }
  else {
    CountCollatz(RandomCollatz); //calls function
  }
  return 0;
}
