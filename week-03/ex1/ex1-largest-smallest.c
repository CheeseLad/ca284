/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */

/* main function */
int main(int argc, char*argv[])
{
  float numbers[argc];
  for (unsigned int i = 1; i < argc; i++) {
    numbers[i] = atof(argv[i]);
    float sum = 0.0;
    for (unsigned int k = 0; k < argc; k++) {
      if (numbers[k] > sum) {
        sum = numbers[k];
      }
    }
    printf("%lf\n", sum);
  }
	return 0;
}