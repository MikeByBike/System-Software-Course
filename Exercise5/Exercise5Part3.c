//File name:	Exercise5Part3.c
//Author:	Michalis Iona
//Description:	Function that takes an array and it’s length as arguments, takes an empty array filled with random-generated numbers and arranges the numbers from largestto smallest.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void PrintArray(int array_print[SIZE], int length) { //function to print array
	int count = 0;
	for (count = 0; count < length; count ++) { 
		printf("%d\t", array_print[count]);
	}
}

int FillArray(int *array_fill) { //function to fill array with random numbers
	int index = 0;
	for (index = 0; index < SIZE; index ++) {
		array_fill[index] = rand()% 1000000;
	}
	return array_fill[SIZE]; //returns filled array
}

int DescendingArray(int *array, int length) { //function to sort numbers in descending order
	int x = 0; //first loop
	int y = 0; //second loop
	int temp = 0;
	
	for (x = 0; x < length; x++) {
		for (y = 0; y < length; y++) {
			if (array[x] < array[y]) {
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
			}
		}
	}
	return array[SIZE]; //return array
}

int main() { //main
	
	srand(time(NULL)); //seed
	int empty[SIZE] = {};
	FillArray(empty); //calls function
	
	printf("\nRandom Generated Array: \n");
	PrintArray(empty, SIZE); //calls function
	printf("\n");
	DescendingArray(empty,SIZE); //calls function
	printf("Array in descending order: \n");
	PrintArray(empty,SIZE); //calls function
	printf("\nTask Complete\n");
	
	return 0;
}
