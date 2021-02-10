//File name:	Exercise4Part2.c
//Author:	Michalis Iona
//Description:	Multiple tasks such as:
//		-Generating random numbers to calculate a system software grade.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RangeRandomNumber(int lower, int upper){
    	int randomnumber = 0;
    	if (lower < upper) {
  		randomnumber = (rand()% ((upper - lower) + 1) + lower);
  	}
  	if(lower > upper ){
  		randomnumber = (rand()% ((lower - upper) + 1) + upper);
  	}
  	else {
  		randomnumber = (rand() % lower); //if two numbers are equal, the range will be from 0 to numbers entered
  	}
  	return randomnumber;
}

int GivenGrade(int exercises, int exam){
      	int sumpoints = 0;
      	int grade = 0;
      	if (exercises < 50 || exam < 50) { //if the exam or the exercises student scores less than 50, he gets a grade 0
        	grade = 0;
        	return grade;
      	}	
      	else {
        	sumpoints = exercises + exam;
        }
      	if (sumpoints < 100) { //under 100 grade is 0
     		grade = 0;
      	}
      	
     	if (sumpoints > 100 && sumpoints < 120) { //under 120 and abve 100 grade is 1
     		grade = 1;
      	}
      	
      	if (sumpoints > 120 && sumpoints < 140) { //under 140 and abve 120 grade is 2
        	grade = 2;
      	}
      		
      	if (sumpoints > 140 && sumpoints < 160) { //under 160 and abve 140 grade is 3
        	grade = 3;
      	}
      	
        if (sumpoints > 160 && sumpoints < 180) { //under 180 and abve 160 grade is 4
        	grade = 4;
      	}
      	
      	if (sumpoints > 180 && sumpoints < 200) { //under 200 and abve 180 grade is 5
        	grade = 5;
      	}

      	return grade;
}



int main(){
  	int FirstInput = 1;
  	int SecondInput = 1;
  	int exam = 0;
  	int exercises = 0;
	int RangeMin = 101;
  	int RangeMax = 101;
  	srand( time(NULL) );
  	
  	printf("Two random numbers will be generated\n");
	printf("You are requested to enter two numbers inorder to proceed with random number generator \n");
	
  	printf("Enter first number: \n");
  	scanf("%d", &FirstInput);
  	if(FirstInput == 0){ //if 0 is inputted then user has to enter again
    		printf("Can't input 0. Input another number\n");
    		return 0;
  	}
  	
  	printf("Enter second number: \n");
  	scanf("%d", &SecondInput);
  	if(SecondInput == 0){ //if 0 is inputted then user has to enter again
    		printf("Can't input 0. Input another number\n");
    		return 0;
  	}
  	if (FirstInput == SecondInput){
      		printf("Both numbers are equal\n");
      		return 0;
  	}

  	printf("The random number generated is: %d \n", RangeRandomNumber(FirstInput,SecondInput));
  	exam = RangeRandomNumber(RangeMin, RangeMax); //calls
 	exercises = RangeRandomNumber(RangeMin, RangeMax); //calls
  	
  	printf("You score in total with the exercises given is: %d\n", exercises);
  	printf("You score in total with the exam given is: %d\n", exam);
  	printf("Grade in System Software: %d\n", GivenGrade(exercises,exam));

  	return 0;
  	
}

