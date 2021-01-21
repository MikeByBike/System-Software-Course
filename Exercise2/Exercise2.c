//File name:	Exercise2.c
//Author:	Michalis Iona
//Description:	The user enters two integers which are manipulated to do certain tasks 

#include <stdio.h>
#include <math.h>

int main() {
int n1, n2; //variable
int diff; //variable
int sum; //variable
double div; //variable
double avg; //variable
long long power = 1; //variable
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2); //reads both numbers
    	
    	if (n1 == n2) //checks if first number is equal with the second number
    	   printf("Both numbers are equal to each other \n");
    	   
    	if (n1 > n2) { //checks if first number is biggger than the second number
     	   diff = n1-n2; //finds difference between first number and second number if the first number is bigger
     	   div = (float)n1/n2; //divides first number by second number as first number is bigger
    	   printf("The largest number is: %d\n", n1);
    	}
    	else { //checks if second number is biggger than first
    	   diff=n2-n1; //finds difference between first number and second number if the second number is bigger
    	   div = (float)n2/n1; //divides second number by first number as second number is bigger
    	   printf("The largest number is: %d\n", n2);
    	}
    	
    	sum = n1 + n2;//sum of two numbers
    	printf("The sum of two numbers: %d\n", sum);
    	
    	avg = (float)(n1+n2)/2; //average of two numbers
    	printf("The average of two numbers: %.2lf\n", avg);
    	
        printf("The difference of two numbers is: %d\n", diff);
        
	if (n1 != 0 || n2 != 0) { //if either number is 0 defines that its not possible to divide
	printf("The division is not possible \n");
	}
	else { //if none of the numbers is 0 then posibility of division occurs 
        printf("The division between two numbers is: %.2lf\n", div);
        }
        
    	while (n2 != 0) { //makes sure that the exponent is not 0
    	   power *= n1; //ensures that first number is base
    	   --n2; //ensures that second number is exponent
    	}
    	printf("The second number power of your first number is: %lld\n", power);
    	
}
