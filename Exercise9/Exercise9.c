/*
  File:         Exercise9.c
  Author:	Michalis Iona
  Description:  Exercise 9 - Array of structs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Struct.h"

#define MAX 256

int main() {

  int *dynamicptr = NULL;
  int *fillptr = NULL;
  int userinput = 0;

  dynamicptr = (int*)malloc(MAX * sizeof(int));
  memset(dynamicptr, '-', MAX * sizeof(int));

  printf("How many formula car you want to input?\n");
  scanf("%d", &userinput);

  fillptr = formulafiller(dynamicptr, userinput);
  formulaprinter(fillptr, userinput);


  return 0;


}
