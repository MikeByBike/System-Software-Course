//File name:	Exercise6Part3.c
//Author:	Michalis Iona
//Description:	2-D Arrays.

#include <stdio.h>
#include <stdlib.h>
int main(){

  	int x = 0;
  	int y = 0;
  	float matrix[32][2] = {
    		{250, 1.4} ,
    		{260, 2.4} ,
    		{270, 3.4} ,
		{280, 4.4} ,
		{290, 5.4} ,
		{300, 6.4} ,
		{310, 7.4} ,
		{300, 8.4} ,
		{320, 9.4} ,
		{330, 10.4} ,
		{340, 11.4} ,
		{350, 12.4} ,
		{360, 13.4} ,
		{370, 14.4} ,
		{380, 15.4} ,
		{390, 16.4} ,
		{400, 17.4} ,
		{410, 18.4} ,
		{420, 19.4} ,
		{430, 20.4} ,    
		{440, 21.4} ,    
		{450, 22.4} ,
		{460, 23.4} ,   
		{470, 24.4} ,
		{480, 25.4} ,    
		{490, 26.4} ,    
		{500, 27.4} ,    
		{510, 28.4} ,    
		{520, 29.4} ,
		{530, 30.4} ,
		{540, 31.4} ,
		{550, 32.4} ,
	};

  	printf("The 2-D Array:\n");
  	printf("\nThermomistor Reading in Celcius\n");
  	printf("Reading in Celsius\n");
  	
  	for(x = 0; x < 32; x++) { 
    		printf("-\n");
		for(y = 0; y < 2; y++) {
        		printf("%f\n", matrix[x][y]); //printing the array
      		}
  	}
  	return 0;
}
