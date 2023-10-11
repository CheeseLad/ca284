/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  float numbers[argc];
  float sum = 0;
  for (unsigned int i = 2; i < argc; i++){
    numbers[i - 2] = atof(argv[i]);
  } 
  if (strcmp(argv[1], "largest") == 0) {
    
    for (unsigned int k = 0; k < argc; k++) {
      if (numbers[k] > sum) {
        sum = numbers[k];
      }
      
    }
  printf("%f\n", sum);
  }
  return 0;
}