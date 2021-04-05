/*
 * File:	Struct.c
 * Author:	Michalis Iona
 * Description: Struct Program
*/

#include<stdio.h>
#include<string.h>

typedef struct
{
  char brand[20];
  int championships;
} formulacar;

typedef struct
{
  char name [30];
  float age;
} driver;

typedef struct
{
  formulacar formulacar;
  driver driver;
} formula;

int *formulafiller(int *structptr, int size) {
  int i = 0;

  formulacar car = {};
  driver car = {};

  for (i = 0; i < size; i++) {
    printf("Enter their brand and how many championships (eg - ferrari 45): \n");
    scanf("%s %d", car->brand, car->championships);
    printf("Enter its driver and his age (eg - alonso 40) \n");
    scanf("%s %2f", car->name, car->age);
  }

  formula *structptr = &car;
  return structptr;
}

void formulaprinter(int *structptr, int size) {
  int i = 0;

  position car[i] = {};

  for(i = 0; i < size; i++) {
      printf("Brand Name: %s. Championships: %d.\n", car[i]->brand, car[i]->championships);
      printf("Drivers Name: %s. Age: %2f.\n", car[i]->name, car[i]->age);
      structptr++;
  }
}
