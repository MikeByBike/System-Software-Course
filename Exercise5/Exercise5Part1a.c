//File name:	Exercise5Part1a.c
//Author:	Michalis Iona
//Description:	Maximum range of numbers.

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
	int userinput = 1, number1 = 0, number2 = 1, number3 = 2, new_variable = 0, count = 0;
	
	printf("Enter the maximum range of numbers: \t");
	scanf("%d", &userinput);
	
    	printf("%d\t%d\t%d\t", number1, number2, number3);
	
	count = 0;

	while (count < userinput) {
		new_variable = number1 + number2 + number3;
		printf("%d\n", new_variable);
		number1 = number2;
		number2 = number3;
		number3 = new_variable;
		count++;
	}
	
	return 0;
}
