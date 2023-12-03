/*
Author: Jake Farrell
Date: 9/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */

/* main function */
int main(int argc, char*argv[])
{
  int length = argc - 1;
  float *pValues = calloc(length, sizeof(float));
  if(!pValues)
{
    //Do something if failed to allocate memory, e.g.:
    printf("Not enough memory!");
    exit(0);
}
  float *pDoubles = calloc(length, sizeof(float));
  if(!pDoubles)
{
    //Do something if failed to allocate memory, e.g.:
    printf("Not enough memory!");
    exit(0);
}
  int largest = 0;
  for (unsigned int i = 0; i < length; i++) {
    *(pValues+i) = atoi(argv[i + 1]);
    if (*(pValues+i) >= largest) {
      largest = *(pValues+i);
    }
    *(pDoubles+i) = atoi(argv[i + 1]) * 2;
  }
  int check = 0;
  for (unsigned int i = 0; i < length; i++) {
    if (largest == *(pDoubles+i)) {
      check = 1;
      break;
    }
   }
  if (check == 1) {
    printf("%d\n", largest);
  } else if (check == 0) {
    printf("0\n");
  }
	return 0;
}

/* other functions */