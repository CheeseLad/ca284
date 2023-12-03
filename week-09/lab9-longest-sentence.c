/*
Author: Jake Farrell
Date: 9/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  //int length = argc - 1;
  long int longest;
  int *pLength = (int*)calloc(1, sizeof(int));
  *(pLength + argc - 1);
  for (unsigned int i = 0; i < *(pLength); i++) {
    if (strlen(argv[i + 1]) >= longest) {
      longest = strlen(argv[i + 1]);
    }
  }
  for (unsigned int i = 0; i < *(pLength); i++) {
    if (strlen(argv[i + 1]) >= longest) {
      printf("%s\n", argv[i + 1]);
    }
  }
	return 0;
}

/* other functions */