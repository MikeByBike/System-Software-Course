//File name:	Exercise6Part2.c
//Author:	Michalis Iona
//Description:	

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArray(int *pointerArray, int lengthArray);
int *fillArray(int *pointerArray);
int *selectionSort(int *pointerArray);

int randomInt(int lowest, int highest);
void pointerSwap(int *firstPointer, int *secondPointer);




void printArray(int *pointerArray, int lengthArray){
    for(int i = 0; i < lengthArray; i++){
        printf("The %2d. number is: %d\n", i+1, *pointerArray);
        pointerArray++;
    }
}

int *fillArray(int *pointerArray){
    for(int i = 0; i < 10; i++){
        *pointerArray = randomInt(0, 100);
        pointerArray++;
    }
    return (pointerArray - 10);
}

int *selectionSort(int *pointerArray){
    int *biggestNumberPointer = NULL;
    biggestNumberPointer = pointerArray;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10-i; j++){
            //Find the biggest number in the array
            if(*pointerArray > *biggestNumberPointer){
                biggestNumberPointer = pointerArray;
            }
            pointerArray++;
        }
        //Swap the biggest Number with the last number
        pointerSwap(pointerArray, biggestNumberPointer);
        pointerArray -= 10-i;
    }
    return arrayPointer;
}

int randomInt(int lowest, int highest){
    return(rand() % (highest - lowest) + lowest);
}

void pointerSwap(int *firstPointer, int *secondPointer){
    int temp = *firstPointer;
    *firstPointer = *secondPointer;
    *secondPointer = temp;
}
int main(){
    srand((unsigned)time(NULL));
    int numbersArray[SIZE] = {15, 7, 5, 9, 45, 11, 59, 6, 34, 38};
    int secondArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *pointerArray = NULL;
    
    printf("First array: \n");
    pointerArray = &numbersArray[0];
    printArray(selectionSort(pointerArray), SIZE);
    
    printf("\nSecond array: \n");
    pointerArray = &secondArray[0];
    printArray(selectionSort(fillArray(pointerArray)), 10);
    
    return 0;
}

