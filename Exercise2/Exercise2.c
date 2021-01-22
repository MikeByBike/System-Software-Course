//File name:	Exercise2.c
//Author:	Michalis Iona
//Description:	Multiple tasks such as:
//		-User inputs 2 number which does multiple operations
//		-Generating a random number and checks if odd or even and if its divisible
//		-Hard coding 10 integers into an array  

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
	//Exercise 2 Question 3
int n1, n2; //variable
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2); //reads both numbers
	 	
    	if (n1 == n2) //checks if first number is equal with the second number
    	   printf("Both numbers are equal to each other \n");
    	   
int diff; //variable 
double div; //variable     	   
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
    	
int sum; //variable    	
    	sum = n1 + n2;//sum of two numbers
    	printf("The sum of two numbers: %d\n", sum);
    	
double avg; //variable  
    	avg = (float)(n1+n2)/2; //average of two numbers
    	printf("The average of two numbers: %.2lf\n", avg);
    	
        printf("The difference of two numbers is: %d\n", diff);
         
	if (n1 == 0 || n2 == 0) { //if either number is 0 defines that its not possible to divide
	printf("The division is not possible. \n");
	}
	else { //if none of the numbers is 0 then posibility of division occurs
        printf("The division between two numbers is: %.2lf\n", div);
        }
        
long long power = 1; //variable        
    	while (n2 != 0) { //makes sure that the exponent is not 0
    	   power *= n1; //ensures that first number is base
    	   --n2; //ensures that second number is exponent
    	}
    	printf("The second number power of your first number is: %lld\n", power);
    		
    	//Exercise 2 Question 4
srand(time(NULL)); // random seed
int rng = rand() %100; //generates random number from 1 to 100
    	printf("The random number generated from 1 to 100 is: %d\n", rng);
   	
   	while (rng != 0) { //checks odd or even only if the number is not 0
   	  if (rng%2 == 0) { //checks if the number when divided by 2 the remainder is 0 so its even
	    printf("The number generated is even\n");
	  }
  	  else {//if there is a remainder then its odd
    	    printf("The number generated is odd\n");
    	  }
    	  if (rng%3 == 0 && rng%8 == 0) { //checks if nuber is divisible 3 and 8
    	    printf("The number generated is divisible with 3 and 8\n");
    	  }
	  else { //if not it outputs that its not divisible by 3 and 8
	    printf("The number generated is not divisible with 3 and 8\n"); 
	  }
    	return 0;
    	}
    	
    	if ((rng = 0)) {//if the number is 0 then it outputs that its neither even or odd
    	  printf("The number generated is neither even or odd\n");
    	}    			
}
