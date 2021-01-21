//File name:	Exercise2.c
//Author:	Michalis Iona
//Description:	The user enters two integers which are manipulated to do certain tasks 

#include <stdio.h>

int main() {
int n1, n2; //variables
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2); //reads both numbers
    	
    	if (n1 == n2)
    	   printf("Both numbers are equal to each other");
    	if (n1 > n2)
    	{
    	   printf("Largest number is %d.", n1)
    	}
    	else
    	{
    	   printf("Largest number is %d.", n2)
    	}
    	
    	
}
