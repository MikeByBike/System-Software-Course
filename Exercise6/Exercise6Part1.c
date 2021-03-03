//File name:	Exercise6Part1.c
//Author:	Michalis Iona
//Description:	Implementing pointers

#include <stdio.h>
int main()
{
	// number variable
  	int number1 = 90;
  	float number2 = 54.5;
  	char character = 'A';
  
  	int *pointerNumber = NULL;
  	float *pointerFloat = NULL;
  	char *pointerCharacter = NULL;

  	//printing variables
  	printf("The value of the first number is: %d\n", number1); 
  	printf("The value of the second float number is: %f\n", number2);
  	printf("The character provided is: %c\n", character);
  
  	//printing pointer values
  	printf("The pointer of the first number points to: %p\n", pointerNumber);
 	printf("The pointer of the second float number points to: %p\n", pointerFloat);
  	printf("The pointer of the character points to: %p\n", pointerCharacter);
  
  	//pointers point to variables memory addresses
  	pointerNumber = &number1;
  	pointerFloat = &number2;
  	pointerCharacter = &character;
  
  	//printing out variables memory addresses
 	printf("The pointer of the first number points to: %p\n", pointerNumber);
  	printf("The pointer of the second number points to: %p\n", pointerFloat);
  	printf("The pointer of the character points to: %p\n", pointerCharacter);
  
  	//printing variable values using pointers    
  	printf("The first number value in that memory address: %d\n", *pointerNumber);
  	printf("The second number value in that memory address: %f\n", *pointerFloat);
  	printf("The character in that memory address: %c\n", *pointerCharacter);
  
  	return 0;
}

