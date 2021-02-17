//File name:	Exercise5Part1b.c
//Author:	Michalis Iona
//Description:	Enter numbers in array.

#include <stdio.h>

int main() {
    
    int index, number = 0;
    float array[100];
    
    printf("Enter total number of elements (1 to 100): ");
    scanf("%d", &number);
    printf("\n");

    for (index = 0; index < number; ++index) {
        printf("Enter number %d: ", index + 1);
        scanf("%f", &array[index]);
        if (array[0] < array[1]) {
            array[0] = array[index]; 
        }
    }
       
    printf("What am I printing out? %2.f\n", array[0]);
    
    return 0;
}
